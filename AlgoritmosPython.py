
#Algoritmo de Búsqueda Binaria
#Código extraído de https://programacionpython80889555.wordpress.com/2021/12/22/algoritmos-en-python-busqueda-binaria/#:~:text=Tambi%C3%A9n%20llamada%20%C2%ABb%C3%BAsqueda%20de%20intervalo,modo%20que%20si%20ambos%20no
from operator import truediv
from re import L
import random
import time

#Metodo de búsqueda Binaria
#Código extraído de https://www.geeksforgeeks.org/binary-search/

def binarySearch(v, To_Find):
    lo = 0
    hi = len(v) - 1
 
    # This below check covers all cases , so need to check
    # for mid=lo-(hi-lo)/2
    while hi - lo > 1:
        mid = (hi + lo) // 2
        if v[mid] < To_Find:
            lo = mid + 1
        else:
            hi = mid
 
    if v[lo] == To_Find:
        print("Found At Index", lo)
    elif v[hi] == To_Find:
        print("Found At Index", hi)
    else:
        print("Not Found")



#Algoritmo de Búsqueda lineal
#Código extraído de https://programacionpython80889555.wordpress.com/2021/12/22/algoritmos-en-python-busqueda-binaria/#:~:text=Tambi%C3%A9n%20llamada%20%C2%ABb%C3%BAsqueda%20de%20intervalo,modo%20que%20si%20ambos%20no

def busquedaLineal(lista, valor):
    steps=0
    for i, item in enumerate(lista):
        steps+=1
        if item==valor:
            return "Valor encontrado en {} pasos en la posicion {}.".format(steps,i)
    return "Elemeno no encontrado."


#Algoritmo de ordenamiento #1- Bubble sort
#Código extraído de https://www.geeksforgeeks.org/python-program-for-bubble-sort/

def bubbleSort(arr):
    n = len(arr)
    # optimize code, so if the array is already sorted, it doesn't need
    # to go through the entire process
    swapped = False
    # Traverse through all array elements
    for i in range(n-1):
        # range(n) also work but outer loop will
        # repeat one time more than needed.
        # Last i elements are already in place
        for j in range(0, n-i-1):
 
            # traverse the array from 0 to n-i-1
            # Swap if the element found is greater
            # than the next element
            if arr[j] > arr[j + 1]:
                swapped = True
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
         
        if not swapped:
            # if we haven't needed to make a single swap, we
            # can just exit the main loop.
            return


#Algoritmo de ordenamiento #2-Merge Sort
#Codigo extraído de https://www.geeksforgeeks.org/merge-sort/  by Mayank Khanna
def mergeSort(arr):
    if len(arr) > 1:
 
         # Se encuentra la mitad del array
        mid = len(arr)//2
 
        # Se Divide el array para el lado izquierdo
        L = arr[:mid]
 
        #Se divide el array para el lado derecho
        R = arr[mid:]
 
        # Se ordena la primera mitad del array
        mergeSort(L)
 
        # Se ordena la segunda mitad del array
        mergeSort(R)
 
        i = j = k = 0
 
        # Se crean sub- arrays del array original
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
 
        # Verificamos si queda algun elemento del array restante
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
 
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

#Algoritmo  de ordenamiento #3-Insertion Sort
#Algoritmo tomado de https://www.geeksforgeeks.org/insertion-sort/  By Mohit Kumra

def insertionSort(arr):
    for i in range(1,len(arr)):
        key=arr[i]
        j=i-1
        while j>=0 and key < arr[j]:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key


#Algoritmo para imprimir un array 
def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
           
#Metodo que invierte un arrray
def invertirArray(arr):
    arr.reverse()
    return arr


#Metodo que genera un array con elementos parcialmente ordenado (A la mitad)    

#Metodo que genera un array con elementos aleatorios, totalmente desordenados

def arrayAleatorio(arrAleatorio, n):
    for i in range(0, n):
        arrAleatorio[i]=random.randint(10000,99999)

    return arrAleatorio




if __name__ == '__main__':
    
    n=1000000
    arr = [None]*n  
    #x=random.randint(1,n)
    #print(x)
    #print("Given array is: ", end="\n")
    arrayAleatorio(arr,n)
    #printList(arr)
    #arrinvertido=invertirArray(ar)
    #print("El array invertido es:", end="\n")
    #printList(ar)
    #mergeSort(ar)
    mergeSort(arr)
    x=random.randint(10000,99999)
    inicio=time.time()
    binarySearch(arr,x)
    fin=time.time()
    #print()
    #print("Sorted array is: ", end="\n")
    #printList(arr)
    print(fin-inicio)       