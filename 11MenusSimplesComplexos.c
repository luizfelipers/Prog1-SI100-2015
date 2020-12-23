#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

void main(){
//Declarar variaveis

int opcao;

//prende o usuario dentro das opcoes validas
while(opcao <1 || opcao > 3){


//Texto Introdutorio

printf("Escolha uma opcao\n");
printf("Opcao1\n");
printf("Opcao2\n");
printf("Opcao3\n");
printf("Opcao4\n");

//lendo a opcao
scanf("%d", &opcao);

//escolhendo opcao
switch(opcao){

case 1:
    printf("\nOpcao 1 Escolhida");
    break;
case 2:
    printf("\nOpcao 2 Escolhida");
    break;

case 3:
    printf("\nOpcao 3 Escolhida");
    break;
case 4:
    printf("\nOpcao 4 Escolhida");
    break;
default:
    printf("\nOpcaoInvalida\n\n");
    break;

}
}

}
