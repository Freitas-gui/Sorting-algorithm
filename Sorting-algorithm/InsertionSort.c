
/* Um algoritmo tão simples quanto a ordenação por seleção é a “ordenação por inserção”.*/

/* Este método é usualmente utilizado para ordenar cartas de baralho:
    Considere um elemento por vez, insira cada carta em sua “posição correta”
    entre os elementos já considerados de forma a mantê-los ordenados.*/

/* Para colocar o elemento considerado em sua posição “correta”, basta
    movimentar os elementos maiores que ele dentre aqueles já considerados
    (ordenados) uma posição para a direita e, então, inserir o elemento
    considerado na posição vaga resultante.*/

// [ 4 | 2 | 3 | 5 | 6 | 8 ]

void insertion(int vector[], int index){
    int less = vector[index];
    int walk = index-1;
    for( ; walk > -1 || vector[walk] < less ; walk--){
        vector[walk+1] = vector[walk];
    }
    vector[walk+1] = less;
}

void insertionSort(int vector[], int lenVet){
    for(int index=1 ; index<lenVet ; index++){

        if(vector[index] < vector[index-1]){
            insertion(vector, index);
        }
    }
}