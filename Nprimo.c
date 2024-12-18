#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    int contador = num;
    int qtdDivisores = 0;

    while (contador < 0  && qtdDivisores < 2)
    {
        if (num % contador == 0)
        {
            qtdDivisores++;
        }
        contador--;
    }
    
    if (qtdDivisores < 2 || contador > 0)
    {
        printf("O numero eh primo");   
    }

    return 0;
}
