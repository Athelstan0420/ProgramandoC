#include <stdio.h>
#include <stdlib.h>

int numero(int num){

    if(num % 2 == 0){
        return "O número %i é par!", num;
    }
    else return "O número %i é ímpar!", num;

}

int main(int argc, char const *argv[])
{

   int valor, func;
   
   printf("Digite um número inteiro: ");
   scanf("%i", &valor);
    
   func = numero(valor);
   
   printf("%i", func);
    
   system("pause");
   return 0;
   
}
    