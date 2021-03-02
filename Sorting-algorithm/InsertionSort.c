
/* Um algoritmo tão simples quanto a ordenação por seleção é a “ordenação por inserção”.*/

/* Este método é usualmente utilizado para ordenar cartas de baralho:
    Considere um elemento por vez, insira cada carta em sua “posição correta”
    entre os elementos já considerados de forma a mantê-los ordenados.*/

/* Para colocar o elemento considerado em sua posição “correta”, basta
    movimentar os elementos maiores que ele dentre aqueles já considerados
    (ordenados) uma posição para a direita e, então, inserir o elemento
    considerado na posição vaga resultante.*/

// [ 0 | 2 | 3 | 4 | 5 | 6 ]    

void insertion(int vector[], int index){
    int less = vector[index];
    int walk;
    for(walk = index-1; walk>-1 && vector[walk] > less; walk--){
        vector[walk+1] = vector[walk];
    }
    vector[walk+1] = less;
}

void insertionSort(int vector[], int sizeVector){
    if(sizeVector <= 1) return;
    for(int index=1; index < sizeVector; index++){
        insertion(vector, index);
    }
}


void insertionString(char vector[], int index){
    char less[2];
    less[0] = vector[index];
    int walk;
    for(walk = index-1; walk > -1 && vector[walk] > less[0] ; walk--){
        vector[walk+1] = vector[walk];
    }
    vector[walk+1] = less[0];
}

void insertionSortString(char vector[]){
    for(int index=1; vector[index] != '\0'; index++){
        insertionString(vector, index);
    }
}