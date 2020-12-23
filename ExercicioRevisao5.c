#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

int vendapordia[10], //vetor que guarda o valor de cada dia
maior=0, contadorvetor; //auxiliar que guardará o maior valor do m~es

printf("Digite os valores do vetor:\n"); //Pede os valores


int j;
for(j=0; j<10; j++){ //Laço para percorrer o vetor
    printf("Digite o valor do %d o valor", j); //Solicita os valores para cada casa do vetor
    scanf("%d", &vendapordia[j]); //grava o valor em cada casa do vetor
}//Fim Laco



//Comparar as casas do vetor para pegar o maior valor
int i;
for(i = 0; i < 10; i++){ //Laço para percorrer o vetor
if(vendapordia[i] > maior){ //Compara o valor de cada dia com o maior valor gravado
    maior = vendapordia[i];//caso ache um valor maior, salva o valor desse dia na variavel Maior
}//Fim Laco


}
printf("O maior valor é %d \n", maior); //Printa o maior valor do vetor123456
}
