// Não é um algorítimo tão simples como os anteriores, é mais elaborado para implementar.

// Assintóticamente mais eficiente. Complexidade n*log(n).

// [ 1 | 2 | 0 | 3 | 4 | 6 ]


int merge(int vector1[], int sizeVector1, int vector2[], int sizeVector2){
    int sizeVectorReturn = (sizeVector1+sizeVector2);
    int *vectorReturn;
    vectorReturn = malloc(sizeVectorReturn*sizeof(int));

    for(int index1=0, index2=0, indexReturn=0 ; indexReturn < sizeVectorReturn ; indexReturn++){
        if(index1==sizeVector1){  
            vectorReturn[indexReturn] = vector2[index2];
            index2++;
         }
        else if(index2==sizeVector2){
            vectorReturn[indexReturn] = vector1[index1];
            index1++;
        }
        else if( vector1[index1] < vector2[index2]){
            vectorReturn[indexReturn] = vector1[index1];
            index1++;
        }
        else{
            vectorReturn[indexReturn] = vector2[index2];
            index2++;
        }
    }
    return vectorReturn;
}

int mergeSort(int vector[], int sizeVector){
    if(sizeVector <= 1) return vector;
    int sizeVector1 = sizeVector/2;
    int sizeVector2 = sizeVector - sizeVector1;
    
    int *vector1 , *vector2;
    vector1 = malloc(sizeVector1*sizeof(int));
    vector2 = malloc(sizeVector2*sizeof(int));

    vector1 = mergeSort(vector, sizeVector1);
    vector2 = mergeSort(vector + sizeVector1, sizeVector2);   

    vector = merge(vector1, sizeVector1, vector2, sizeVector2);
    free(vector1);
    free(vector2);

    return vector;
}