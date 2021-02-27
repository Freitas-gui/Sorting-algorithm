#include <stdio.h>
#include <stdlib.h>


void toString(int vector[], int lenVet){
    for(int index = 0; index<lenVet; index++)
        printf("| %d |",vector[index]);
}

void changeInVector(int vector[], int a, int  b){
    int value = vector[a];
    vector[a] = vector[b];
    vector[b] = value;
}

void change(int *a, int *b){
    int value_a = *a;
    int value_b = *b;
    *a = value_b;
    *b = value_a;
}

void findLess(int vector[], int lenVet, int *less){
    for(int find=0 ; find<lenVet ; find++){
        if(vector[*less]>vector[find])
            *less = find;
    }
}

void findMax(int vector[], int lenVet, int *max){
    for(int find=0 ; find<lenVet ; find++){
        if(vector[*max]<vector[find])
            *max = find;
    }
}

int randNumber(int first, int last){
    if (first > last) return -1;
    srand( (unsigned)time(NULL) );
    return first + ( rand() % last );
}

void incrementVectorSize(int vector[], int *lenVet){
    (*lenVet)++;
    int first = vector[0];
    *vector = (int *) realloc (*vector, ((*lenVet) * sizeof(int) ));
    vector[0] = first;
}