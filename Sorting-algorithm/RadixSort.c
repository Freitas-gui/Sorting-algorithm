/*
*/

int RadixSort(int *vectorA, int *vectorB, int lenVet, int maxDigits, int initDigit){
    if (lenVet < 1) return;
    int maxValue = 10;
    int vectorCount[maxValue];
    int *vectorNew = (int *) malloc(lenVet*sizeof(int));

    for ( int index = 0; index < maxValue; index++ )
        vectorCount[index] = 0;

    for ( int index = 0; index < lenVet; index++ )
        vectorCount[ cutNumberInt(vectorA[index], initDigit) ]++;
    
    for ( int index = 1; index < maxValue; index++ )
        vectorCount[index] += vectorCount[index-1];

    for ( int index = lenVet-1; index > -1; index-- ){
        vectorCount[ cutNumberInt(vectorA[index], initDigit) ]--;
        vectorB[vectorCount[ cutNumberInt(vectorA[index], initDigit) ]] = vectorA[index];
    }

    for ( int digit = initDigit + 1; digit < maxDigits; digit++ ){
        RadixSort(vectorB, vectorA, lenVet, maxDigits, digit);
    }
    if ((maxDigits % 2) == 0)
        return vectorA;
    else
        return vectorB;
}