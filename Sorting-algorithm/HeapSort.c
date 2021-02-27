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

int deleteMax(int vector[], int *lenVet){
    if ((*lenVet) <= 1) return -1;
    if ((*lenVet) == 2){
        (*lenVet) = (*lenVet) - 1;
        return vector[1];
    }
    int max = vector[1];
    vector[1] = vector[(*lenVet)-1];
    (*lenVet)--;
    MaxHeapify(vector, *lenVet, 1);  
    return max;
}

void keyIncrement(int vector[], int lenVet, int key, int index){
    if(index > lenVet) return;
    if( vector[index] > key){
        printf("Key cant'be less than value of vector[index]");
        return;
    }
    vector[index] = key;
    while ( index > 1 && vector[(int)index/2] < vector[index]   ){
        change(&vector[index], &vector[(int)index/2]);
        index = (int)index/2;
    }
}

void insertMaxHeap(int vector[], int *lenVet, int key){
    incrementVectorSize(vector, lenVet);
    vector[(*lenVet)-1] = key-1;
    keyIncrement(vector, (*lenVet), key, *(lenVet)-1);
}