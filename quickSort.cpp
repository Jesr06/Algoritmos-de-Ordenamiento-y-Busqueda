// Quick sort in C++  	from: https://www.programiz.com/dsa/quick-sort

#include <bits/stdc++.h>
using namespace std;

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to print the array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// function to rearrange array (find the partition point)
int partition(int array[], int low, int high) {
    
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }
  
  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
      
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
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
  
  // perform quicksort on data
  quickSort(arr, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(arr, n);
}