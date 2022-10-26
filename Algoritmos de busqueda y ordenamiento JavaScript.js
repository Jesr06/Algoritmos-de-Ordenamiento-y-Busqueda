
// Algoritmos de ordenamiento
// Algoritmo QuickSort
var start = Date.now();
let miarray = Array.from({length: Math.pow(10,2)}, () => Math.floor(Math.random() * 100000));
function quickSort(array) {

    if (array. length < 1) {
        return [];
    }
    var left = [];
    var right = [];
    var pivot = array[0];
    for (var i = 1; i < array. length; i++) {
        if (array[i] < pivot) {
            left.push(array[i]);
        }
        else{
            right.push(array[i]);
        }
    }
        return [].concat (quickSort(left), pivot, quickSort(right));
}


// Algoritmo Búrbuja

function burbuja(lista){
    let i,n,j,aux;
    n=lista.length;
    for (j=1; j<n; j++){
        for(i=0; i<(n-j); i++){
            if(lista[i] > lista[i + 1]){
                aux = dista[i]
                lista[i] = lista [i+1];
                lista[i+1] = aux;
            }
        }
    }
        console.log(lista);
    }
    var end = Date.now();
    console.log(start - end);

// Algoritmo de selección
    function selectionSort(array){
        let auxiliar = [...array];
        for (let i = 0; i < array.length; i++) {
            let minimo = auxiliar.slice(i + 1)
                .reduce((a, e, j) => (e < auxiliar[a] ? i+i+1: a), i)
            
            if(minimo !=i){
                [auxiliar[i], auxiliar [minimo]] = [auxiliar [minimo],auxiliar[i]];
            }
        }
        return auxiliar;
    }
    


// Algoritmos de búsqueda
//Binary search
function binarySearch(array, item) {
        var min = 0;
        var max = array.length - 1;
        
        while (min <= mgx) {
        var middle = Math.floor((min + max) / 2);
        var guess = array[middle];
        
        if (guess === item) {
            return middle;
        }
        if (guess > item) {
            max = middle-1;
        }
        else {
            min = middle + 1;
        }
    }
        return -1;
}

// Algoritmo lineal

function linearSearch(arr, key){
    for(let i = 0; i < arr.length; i++){
        if(arr[i] === key){
            return i
        }
    }
    return -1
}


