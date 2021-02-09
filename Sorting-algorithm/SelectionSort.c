
/* Um dos algoritmos mais simples de ordenação.*/

/* Funcionamento: primeiro, encontre o menor elemento no arranjo e troque-o
com o elemento na primeira posição. Depois, encontre o segundo menor
elemento do arranjo e troque-o com o elemento na segunda posição.
Continue o processo até que todo o arranjo esteja ordenado. */

// [ 1 | 2 | 0 | 3 | 4 | 6 ]

void SelectionSort(int vector[], int lenVet){
    if(lenVet == 1) return;

    for(int index=0, less=index ; index<lenVet ; less = 0 , index++){
        findLess(vector+index, lenVet-index, &less);
        change(vector, less+index, index);
    }
}


