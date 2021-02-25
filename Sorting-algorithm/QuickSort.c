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

//last = pivot
int split(int vector[], int first, int last){
    // if (( last - first) < 1 ) return;
    // if (( last - first) == 1 ){
    //     if ( vector[first] > vector[last] ){
    //         change(vector, first, last);
    //         return;
    //     }
    // }
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