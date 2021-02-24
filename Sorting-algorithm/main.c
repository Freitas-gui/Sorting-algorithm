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
    int vector[1] = {1};
    int lenVet = sizeof(vector)/sizeof(int);
    split(vector, 0,0);
    toString(vector, lenVet);

    // int vector1[4] = {1,2,3,4};
    // int vector2[3] = {5,6,7};
    // int *vectorReturn = merge(vector1, 4, vector2, 3);
    // toString(vectorReturn,7);
}   