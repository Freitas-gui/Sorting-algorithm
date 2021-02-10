#include "Helper.c"
#include "SelectionSort.c"
#include "InsertionSort.c"
#include "BubbleSort.c"



/*
Testes:

Já ordenados: 1,2,3,4,5,6
Ao contrário: 6,5,4,3,2,1
Repetidos: 3,5,0,3,0,5

*/

int main()
{
    int vector[6] = {9,4,3,3,2,1};
    int lenVet = sizeof(vector)/sizeof(int);
    BubbleSort(vector, lenVet);
    toString(vector,lenVet);
}