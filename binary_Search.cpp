// C++ program to implement recursive Binary Search		from: https://www.geeksforgeeks.org/binary-search/
#include <bits/stdc++.h>
using namespace std;
 
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x){
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
 
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
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) 
		? cout << "Element is not present in array" 
		: cout << "Element is present at index " << result;
    return 0;
}