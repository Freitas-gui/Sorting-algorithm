// O algoritmo Heapsort utiliza a estrutura de heap máximo: vaector[pai] > vector[filhos]

/*
    A estrutura de dados do heap (binário) é um objeto de array que podemos
    ver como uma árvore binária completa.

    A estrutura de dados do heap (binário) é um objeto de array que podemos
    ver como uma árvore binária completa.

    Pai = i
    Esquerdo = 2*i
    Direito = (2*i)+1

    index começa em 1, esqueça o indíce 0
*/

// [  | 4 | 2 | 3 | 5 | 6 | 8 ]
//  0   1   2   3   4   5   6


void MaxHeapify(int vector[], int lenVet, int index){
    if ( lenVet <= 1 ) return;
    int left = index * 2;
    int right = (index * 2) + 1;
    int more = index;

    if ( left < lenVet && vector[more] < vector[left])
        more = left;
    if ( right < lenVet && vector[more] < vector[right])
        more = right;
    if ( more != index ){
        change(&vector[more], &vector[index]);
        MaxHeapify(vector, lenVet, more);
    }
}

void createMaxHeap(int vector[], int lenVet){
    int index = 1;
    for ( index = 1; index <= (lenVet/2 + 1); index++ ){
        MaxHeapify(vector, lenVet, index);
    }
}

void HeapSort(int vector[], int lenVet){
    createMaxHeap(vector, lenVet);
    while( lenVet > 1 ){
        change(&vector[1], &vector[lenVet-1]);
        lenVet--;
        MaxHeapify(vector, lenVet, 1);
    }
}