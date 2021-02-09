#include "Helper.c"
#include "SelectionSort.c"
#include "InsertionSort.c"


/*
Testes:

Já ordenados: 1,2,3,4,5,6
Ao contrário: 6,5,4,3,2,1
Repetidos: 3,5,0,3,0,5

*/

int main()
{
    int vector[6] = {5,4,6,3,2,1};
    int lenVet = sizeof(vector)/sizeof(int);
    insertionSort(vector, lenVet);
    toString(vector,lenVet);
}