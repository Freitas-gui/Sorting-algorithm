/*
A ordenação por contagem supõe que cada um dos n elementos de entrada é
um inteiro na faixa 1 a k , para algum inteiro k “pequeno”.

Quando k = O(n), a ordenação é executada no tempo Θ(n).

Suponha que um vetor A a ser ordenado contenha n números inteiros, todos
menores ou iguais a k.

O algoritmo CountingSort ordena estes n números em tempo O(n + k)
(equivalente a O(n)).
*/

void CountSort(int vector[], int *vectorReturn, int lenVet, int maxValue){
    if (lenVet < 1) return;
    maxValue++;
    int vectorCount[maxValue];
    for ( int index = 0; index < maxValue; index++ )
        vectorCount[index] = 0;

    for ( int index = 0; index < lenVet; index++ )
        vectorCount[vector[index]]++;
    
    for ( int index = 1; index < maxValue; index++ )
        vectorCount[index] += vectorCount[index-1];

    for ( int index = lenVet-1; index > -1; index-- ){
        vectorCount[vector[index]]--;
        vectorReturn[vectorCount[vector[index]]] = vector[index];
    }
}