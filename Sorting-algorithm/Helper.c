#include <stdio.h>
#include <stdlib.h>


void toString(int vector[], int lenVet){
    for(int index = 0; index<lenVet; index++)
        printf("| %d | ",vector[index]);
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
