#include<stdio.h>
#include<stdlib.h>
#define TAM 3


void main(){

//variavel
int vetor[TAM];

//passando valor pro vetor
vetor[0] = 1;
vetor[1] = 2;
vetor[2] = 3;

//exibindo valores pré-digitados
printf("\nPosicao 0: %d", vetor[0]);
printf("\nPosicao 1: %d", vetor[1]);
printf("\nPosicao 2: %d", vetor[2]);


//For que preenche o vetor
int i;
for(i=0; i < TAM; i++){
    printf("\nDigite o valor da %d a casa:\n", i);
    scanf("%d", &vetor[i]);
}

//Imprime os valores digitados
int j;
for(j=0; j < TAM; j++){
    printf("\nO valor das posicoes e: %d \n", vetor[j]);
}
}
