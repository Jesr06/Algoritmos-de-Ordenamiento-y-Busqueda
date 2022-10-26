// Bubble sort in C++  	from: https://www.geeksforgeeks.org/bubble-sort/
#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++){
	
		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

// Function to print an array
void printArray(int arr[], int size){
	int i;
	for (i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Driver code
int main(){
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
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
// This code is contributed by rathbhupendra


