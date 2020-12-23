#include<stdlib.h>
#include<stdio.h>



void main(){

int n, maior =0, menor = 999; // valor Maior recebe o valor mínimo, e o valor Menor recebe o valor máximo.

printf("Digite o numero de alunos:\n");
scanf("%d", &n); // Salva na variavel N o numero de alunos, para definir o valor do vetor das notas

int notas[n];//Recebe o valor definido

int i; //Contador para percorrer o vetor
for(i = 0; i< n; i++){
    printf("Digite o valor da nota do %d aluno: \n", i);
    scanf("%d", &notas[i]);//salva os valores em cada caso do vetor
while(notas[i] < 0 || notas[i] > 999){ //Caso as notas não respeitem os valores máximo e miinimo
    printf("Digite outro numero carai:\n");//pede outro valor
    scanf("%d", &notas[i]);//salva de novo
}
}//FimLaço

//Compara os valores
int comparador;
for(comparador = 0; comparador<n; comparador++){
    if(notas[comparador] > maior ){ //Caso o valor de uma nota seja maior que o valor de Maior
        maior = notas[comparador];//Maior recebe o valor da maior nota
    }
    if(notas[comparador] < menor){//Caso o valor de alguma nota seja menor que o valor salvo em menor
        menor = notas[comparador];//salva o valor de menor
    }

}

 printf("O maior valor é %d , e o menor eh %d", maior, menor); //Printa o maior e o menor valor

}
