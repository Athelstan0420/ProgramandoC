#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    int soma = 0;
    printf("Digite um numero: ");
    scanf("%i", &num);

    while (num != 0)
    {
        soma = soma + num % 10;
        num = num / 10;
    }

    printf("A soma dos digitos eh: %i \n", soma);

    system("pause");
    return 0;
}


