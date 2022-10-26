// C++ code to linearly search x in arr[].  	from: https://www.geeksforgeeks.org/linear-search/
// If x is present then return its location, 
// otherwise return -1

#include <iostream>
using namespace std;

int search(int arr[], int N, int x){
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver's code
int main(void){
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
	int x = 10003;
	// Function call
	int result = search(arr, N, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
