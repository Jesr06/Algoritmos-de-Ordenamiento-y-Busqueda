//Autor: Juan Esteban Serrano Rodelo - 1152033

package main

import (
	"fmt"
	"math"
)

func main() {
	arregloDeNumeros := []int{1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9, 10, 12, 15, 18, 20, 21}
	busquedaNumerica := 3
	resultadoBusquedaNumerica := busquedaBinariaRecursiva(arregloDeNumeros, busquedaNumerica, 0, len(arregloDeNumeros)-1)
	resultadoSecuencial := busquedaSecuencial(arregloDeNumeros, busquedaNumerica)
	fmt.Println(resultadoBusquedaNumerica)
	fmt.Println(resultadoSecuencial)
	//--------------
	arreglo := []int{5, 4, 8, 6, 9, 1, 3, 15}
	ordenado := insercion(arreglo)
	ordenado2 := selectionSort(arreglo)
	ordenado3 := bubbleSort(arreglo)
	fmt.Println(ordenado)
	fmt.Println(ordenado2)
	fmt.Println(ordenado3)
}

//------------------------------Algoritmos de Búsqueda ------------------------------------------------------------

// --> Algoritmo de Busqueda Binaria con Recursividad
// --> Extraído de: https://parzibyte.me/blog/2018/11/01/golang-algoritmo-busqueda-binaria/
func busquedaBinariaRecursiva(arreglo []int, busqueda, izquierda, derecha int) (indice int) {
	if izquierda > derecha {
		return -1
	}
	indiceDelMedio := int(math.Floor((float64(izquierda+derecha) / 2)))
	elementoDelMedio := arreglo[indiceDelMedio]
	if elementoDelMedio == busqueda {
		return indiceDelMedio
	}
	if busqueda < elementoDelMedio {
		derecha = indiceDelMedio - 1
	} else {
		izquierda = indiceDelMedio + 1
	}
	return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha)
}

// --> Algoritmo de Búsqueda Secuencial
// --> Extraído de: https://apuntes.de/golang-estructuras-de-datos-y-algoritmos/arreglos-busqueda-secuencial/#gsc.tab=0
func busquedaSecuencial(numeros []int, valor int) int {
	for k, v := range numeros {
		if v == valor {
			return k
		}
	}
	return -1
}

//-----------------------------Algoritmos de Ordenamiento ----------------------------------------------------------------------

// --> Algoritmo de Ordenamiento por Insercion
// --> Extraído de: https://awebytes.wordpress.com/2020/04/12/golang-algoritmos-ordenacion-implementados-bases/
func insercion(arreglo []int) []int {
	for i := 1; i < len(arreglo); i++ {
		j := i
		for j > 0 && arreglo[j-1] > arreglo[j] {
			swap(j-1, j, &arreglo)
			j--
		}
	}
	return arreglo

}

func swap(previo, actual int, puntero_arreglo *[]int) {
	arreglo := *puntero_arreglo
	copia := arreglo[actual]
	arreglo[actual] = arreglo[previo]
	arreglo[previo] = copia
}

// --> Algoritmo de Ordenamiento por Seleccion
// --> Extraído de: https://awebytes.wordpress.com/2020/04/12/golang-algoritmos-ordenacion-implementados-bases/
func selectionSort(arreglo []int) []int {
	for i := 0; i < len(arreglo); i++ {
		minimo_encontrado, posicion_minimo := arreglo[i], i
		valor_original := arreglo[i]
		for j := i + 1; j < len(arreglo); j++ {
			valor_comparacion := arreglo[j]
			if valor_comparacion < minimo_encontrado {
				minimo_encontrado, posicion_minimo = valor_comparacion, j
			}
		}
		if minimo_encontrado != valor_original {
			arreglo[i], arreglo[posicion_minimo] = minimo_encontrado, valor_original
		}
	}

	return arreglo
}

// --> Algoritmo de Ordenamiento por Burbuja
// --> Extraído de: https://awebytes.wordpress.com/2020/04/12/golang-algoritmos-ordenacion-implementados-bases/
func bubbleSort(arreglo []int) []int {
	numeros_ordenados := 0
	intercambio := true
	for intercambio {
		intercambio = false
		for i := 1; i < (len(arreglo) - numeros_ordenados); i++ {
			if arreglo[i-1] > arreglo[i] {
				intercambio = true
				swap2(&arreglo, i)
			}
		}
		numeros_ordenados++
	}
	return arreglo
}

func swap2(puntero_arreglo *[]int, index_derecha int) {
	index_izquierda := index_derecha - 1
	arreglo := *puntero_arreglo
	copia := arreglo[index_izquierda]
	arreglo[index_izquierda] = arreglo[index_derecha]
	arreglo[index_derecha] = copia

}
