/*
    Assim como o Mergesort, o Quicksort também aplica o paradigma divisão e conquista.
    
    Considere o subarranjo A[p . . .r], os três passos do processo de divisão e
    conquista são:

        I Divisão: Particionar (reorganizar) o arranjo A[p . . .r] em dois subarranjos
        (possivelmente vazios) A[p . . . q − 1] e A[q + 1 . . .r] tais que, cada elemento
        de A[p . . . q − 1] é menor ou igual a A[q] que, por sua vez, é menor do que
        cada elemento de A[q + 1 . . .r]. Calcular o índice q como parte desse
        procedimento de particionamento.
        
        II Conquista: Ordenar os dois subarranjos A[p . . . q − 1] e A[q + 1 . . .r] por
        chamadas recursivas a quicksort.
        
        III Combinação: Como os subarranjos já estão ordenados, não é necessário
        nenhum trabalho para combiná-los: o arranjo A[p . . .r] inteiro agora está
        ordenado.
*/

void randPivot(int vector[], int first, int last){
    int a,b,c;
    int pivot;
    a = randNumber(first, last);
    b = randNumber(first, last);
    c = randNumber(first, last);

    if( (vector[a] >= vector[b] && vector[a] <= vector[c]) || (vector[a] >= vector[c] && vector[a] <= vector[b]))
        pivot = a;
    else if( (vector[b] >= vector[a] && vector[b] <= vector[c]) || (vector[b] >= vector[c] && vector[b] <= vector[a]))
        pivot = b;
    else if( (vector[c] >= vector[b] && vector[c] <= vector[a]) || (vector[c] >= vector[a] && vector[c] <= vector[b]))
        pivot = c;
    change(&vector[pivot], &vector[last]);
}

int split(int vector[], int first, int last){
    randPivot(vector, first, last);
    int less = first - 1;
    for(int more = first; more < last; more++){
        if( vector[more] < vector[last] ){
            less++;
            if( more!=less)
                change(&vector[less], &vector[more]);
        }
    }
    change(&vector[last], &vector[less+1]);
    return less+1;
}

void QuickSort(int vector[], int first, int last){
    if (first < last){
        int pivot = split(vector, first, last);
        QuickSort(vector, first, pivot-1);
        QuickSort(vector, pivot+1, last);
    }
}