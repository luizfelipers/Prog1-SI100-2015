#include <stdio.h>


int main()
{
  

//Vars
int n,x, fatorial =1;



//Entrada de valores
printf("Digite um numero\n\n");

scanf("%d", &n);


//Confere se o numero é maior que zero
while(n<=0){
  
  printf("Digite outro valor para n\n ");
 
   scanf("%d", &n);
}


x = n;
 //X recebe o valor de N, para que seja usado como auxiliar na recursividade do fatorial
while(x>0){
  
  fatorial = fatorial* x;
 //multiplica o valor inicial de Fatorial (1) pelo valor de X (inicia igual a N)
   x--;
//Decrementa o valor de X, para multiplicar o proximo numero da recursividade na outra iteração
}


printf("%d", fatorial);
 //printa o valor final
   return 0;

}
