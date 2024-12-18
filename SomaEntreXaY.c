#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    
    printf("Digite o primeiro numero:");
    scanf("%d", &num1);
    printf("Digite o segundo numero:");
    scanf("%d", &num2);

    int soma = 0;
    int cont = num1;
    
    while (cont <= num2)
    {
        printf("%d \n", cont);
        soma = soma + cont;
        cont++;
    }

    while (num1 >= num2)
    {   
        printf("%d \n", num1);
        soma = soma + num1;
        num1--;
    }
    
    printf("%d \n", soma);
    
    system("pause");
    return 0;
    

    

    
  
}



