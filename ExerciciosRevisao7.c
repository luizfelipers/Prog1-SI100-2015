#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){

int n, soma;//

printf("Digite o valor de n:\n");//Solicita o valor de N (numeros na sequencia)
scanf("%d", &n);//Grava N


int i, vetorsequencia[n]; //inicializa VetorSequencia, que recebe o valor

for(i = 1; i<n; i++){
vetorsequencia[i] = i;

}
soma =0;
int j;
for(j = 1; j<n; j++){
if(vetorsequencia[j] % 2 == 0){
    soma = soma + vetorsequencia[j];
}

}
printf("O valor da soma é: %d  \n", soma);
}
