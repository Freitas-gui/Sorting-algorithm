#include "Helper.c"
#include "SelectionSort.c"
#include "InsertionSort.c"
#include "BubbleSort.c"
#include "MergeSort.c"
#include "QuickSort.c"


/*
Testes:

Já ordenados: 1,2,3,4,5,6
Ao contrário: 6,5,4,3,2,1
Repetidos: 3,5,0,3,0,5

*/

int main()
{
    int vector[6] = {61,7,33,7,99,7};
    int lenVet = sizeof(vector)/sizeof(int);
    int pivot, equal;
    split(vector, 0,5, &pivot, &equal);
    toString(vector, lenVet);

    // int vector1[4] = {1,2,34};
    // int vector2[3] = {5,6,7};
    // int *vectorReturn = merge(vector1, 4, vector2, 3);
    // toString(vectorReturn,7);
}   