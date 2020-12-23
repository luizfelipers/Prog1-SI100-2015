#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){

int n, numeros; // uma variavel para guardar quantos numeros

printf("Digite quantos numeros naturais impares voce quer na lista:\n"); //Pede o valor de N
scanf("%d", &n); // grava o valor de N

int i;


for(i = 0; i < n; i++){ //Inicializa o contador em 0, para poder começar a contar  no 1


    printf("%d \n", i*2 + 1 ); // Multiplica o contador por 2, para que a cada iteração, sempre pule os numeros pares
}





}





