package ejercicio4;
import java.util.Random;
import java.util.Scanner;

public class Main{

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        
       int n = sc.nextInt();
        
       int matriz[] = new int[n];
       
       Random ra = new Random();
        
        for (int i = 0; i < n; i++) {
            matriz[i] = ra.nextInt();
        }
 
        burbuja(matriz);
        
        for (int i = 0; i < n; i++) {
            System.out.println(""+ matriz[i]);
        }

        
    }
      //1
    public static void burbuja(int[] data) {
        for (int i = 0; i < data.length; i++) {
            for (int j = 0; j < data.length - 1; j++) {
                if (data[j] > data[j + 1]) {
                    Integer temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }
    
    //2
    public static void seleccion(int[] data) {
        for (int i = 0; i < data.length; i++) {
            for (int j = i; j < data.length; j++) {
                if (data[i] > data[j]) {
                    Integer aux = data[j];
                    data[j] = data[i];
                    data[i] = aux;
                }
            }
        }
    }
    
    //3
    public static void shellSort(int[] matrix) {
    for ( int increment = matrix.length / 2;increment > 0;
          increment = (increment == 2 ? 1 : (int) Math.round(increment / 2.2))) {
        for (int i = increment; i < matrix.length; i++) {
            for (int j = i; j >= increment && matrix[j - increment] > matrix[j]; j -= increment) {
                int temp = matrix[j];
                matrix[j] = matrix[j - increment];
                matrix[j - increment] = temp;
            }
        }
    }
}
 
    ////////////////////////////////ALGORITMOS DE BUSQUEDA///////////////////////////////////////////
    
    //1
    public static int linearSearch(int arr[], int elementToSearch) {

    for (int index = 0; index < arr.length; index++) {
        if (arr[index] == elementToSearch)
            return index;
    }
    return -1;
    }
    
    //2
    public static int binarySearch(int arr[], int elementToSearch) {

    int firstIndex = 0;
    int lastIndex = arr.length - 1;

    while(firstIndex <= lastIndex) {
        int middleIndex = (firstIndex + lastIndex) / 2;
       
        if (arr[middleIndex] == elementToSearch) {
            return middleIndex;
        }

        else if (arr[middleIndex] < elementToSearch)
            firstIndex = middleIndex + 1;

        
        else if (arr[middleIndex] > elementToSearch)
            lastIndex = middleIndex - 1;

    }
        return -1;
    }
    
    //3
    public static int recursiveBinarySearch(int arr[], int firstElement, int lastElement, int elementToSearch) {
    if (lastElement >= firstElement) {
        int mid = firstElement + (lastElement - firstElement) / 2;

      
        if (arr[mid] == elementToSearch)
            return mid;

        if (arr[mid] > elementToSearch)
            return recursiveBinarySearch(arr, firstElement, mid - 1, elementToSearch);

        return recursiveBinarySearch(arr, mid + 1, lastElement, elementToSearch);
    }

    return -1;
}
    
}