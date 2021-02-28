#include "Helper.c"
#include "SelectionSort.c"
#include "InsertionSort.c"
#include "BubbleSort.c"
#include "MergeSort.c"
#include "QuickSort.c"
#include "HeapSort.c"
#include "CountSort.c"
#include "RadixSort.c"



/*
Testes:

Já ordenados: 1,2,3,4,5,6
Ao contrário: 6,5,4,3,2,1
Repetidos: 3,5,0,3,0,5

*/

int main()
{
    int vector[8] = {23, 15, 33, 10, 83, 32, 91, 13};
    int lenVet = sizeof(vector)/sizeof(int);
    int *vectorB = (int *) malloc(lenVet*sizeof(int));
    toString(RadixSort(vector,vectorB, lenVet, 3, 0), lenVet);
    
}   