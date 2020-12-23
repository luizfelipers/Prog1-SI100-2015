#include<stdio.h>
#include<stdlib.h>

void main(){ // Sequencia de números ao quadrado

int numero;//numero a ser recebido
int quadrado;//quadrado do numero recebido

printf("Digite uma sequencia de numeros. Digite 0 para que termine a sequencia:\n");
scanf("%d", &numero);

while(numero != 0){
    quadrado = numero * numero;
    printf("O quadrado do numero %d e %d\n", numero, quadrado);
    scanf("%d", &numero);
}


return 0;
}
