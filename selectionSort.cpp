// Selection sort in C++	from: https://www.geeksforgeeks.org/selection-sort/
#include <bits/stdc++.h>
using namespace std;

//Swap function
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of
	// unsorted subarray
	for (i = 0; i < n-1; i++)
	{
	
		// Find the minimum element in
		// unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element
		// with the first element
		if(min_idx!=i)
			swap(&arr[min_idx], &arr[i]);
	}
}

//Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Driver program to test above functions
int main()
{
	int size = 10*10;
	int arr[size];
   	int start = 10000, aux = 0, valid = 0; 
   	
   	/*for (int i = 0; i < size; i++ ){ // arreglo ordenado de menor a mayor		
   		arr[ i ] = start;
   		start++;
	}
	for (int i = size-1 ; i >= 0; i-- ){ // arreglo ordenado de mayor a menor		
   		arr[ i ] = start;
   		start++;
	}
	for (int i = 0 ; i < size; i++ ){ // arreglo parcialmente ordenado de menor a mayor
		if(!(( i%4 == 0 || i%5 == 0 || i%6 == 0) && i > 0)){
			arr[ i ] = start;
   			start++;
		} else{
   			aux = start + rand();
			if(valid < aux){	
				arr[ i ] = aux;
				valid = aux;
			}else{
				aux = valid + rand();
				arr [ i ] = aux;
			}	
		}
	}*/
   	for (int i = 0; i < size; ++i ){ // arreglo aleatorio
     	arr[ i ] = 10000 + rand(); // desde 10000
	}
   	cout << "Los valores del arr son:\n";
   	for (int i = 0; i < size; ++i ){
     	cout <<"arr[" << i << "] = " << arr[ i ] << "	";
	}
	cout<<"\n\n"<<endl;
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
// This is code is contributed by rathbhupendra
