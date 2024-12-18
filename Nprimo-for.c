#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int num;
    int qtd = 0;
    printf("Digite um numero: ");
    scanf("%i", &num);

    int aux = num;
    for (aux; aux >= 1; aux--)
    {
       if (num % aux == 0)
       {
        qtd++;
       } 
    }

    if (qtd <= 2)
    {
        printf("O numero %i eh primo \n", num);
    }
    else printf("O numero %i nao eh primo \n", num);

    system("pause");
    return 0;
}



