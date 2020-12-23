#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){


int x,//base
n, //expoente
resultado;

printf("Digite o valor da base a ser potencializada:\n"); //valor dado a base X
scanf("%d", &x); //grava

printf("Digite um valor natural para o expoente:\n"); //valor dado ao expoente
scanf("%d", &n); //grava


//Confere se o expoente e valido (numero natural)
while(n<=0){
    printf("Digite um valor valido para o expoente");
    scanf("%d", &n);
}

resultado = pow(x,n); //faz o calculo indicado, e salva o resultado na variavel Resultado

printf("%d", resultado);//printa resultado

}
