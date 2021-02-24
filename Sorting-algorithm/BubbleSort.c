// A ideia é percorrer o vector diversas vezes, e a cada passagem fazer flutuar para o topo o maior elemento da sequência.

// [ 4 | 2 | 3 | 5 | 6 | 8 ]

void Bubble(int vector[], int lenVet){
    if (lenVet <= 1) return;
    for(int index=1 ; index<lenVet ; index++){
        if(vector[index-1] > vector[index])
            changeInVector(vector, index-1, index);
    }
}

void BubbleSort(int vector[], int lenVet){
    if (lenVet <= 1) return;
    for( ; lenVet>=2 ; lenVet--){
        Bubble(vector, lenVet);
    }
}