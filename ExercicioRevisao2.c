#include<stdio.h>
#include<stdlib.h>

void main(){

int n, soma;
//Recebe o valor do n�mero que ser� usado para somar os anteriores
printf("Digite o numero de numeros a serem somados:\n");
scanf("%d", &n);

//Inicializa soma como 0 (vazio)
soma =0;

//Declara�ao de contador para laco de repeticao
int i =0;

//o laco roda at� o contador chegar no numero definido pelo usuario
while(i<=n){
//variavel soma recebe o valor dos numeros anteriores ao numero N

    soma = soma + i;
    i++;


}

printf("A soma dos %d primeiros inteiros positivos � %d", n, soma);



}
