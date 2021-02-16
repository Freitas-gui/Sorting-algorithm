// Não é um algorítimo tão simples como os anteriores, é mais elaborado para implementar.

// Assintóticamente mais eficiente. Complexidade n*log(n).

// [ 1 | 2 | 0 | 3 | 4 | 6 ]


int merge(int vector1[], int sizeVector1, int vector2[], int sizeVector2){
    int sizeVectorReturn = (sizeVector1+sizeVector2)*sizeof(int);
    int *vectorReturn;
    vectorReturn = malloc(sizeVectorReturn);

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