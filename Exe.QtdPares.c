#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int cont = 1;
    int num;
    int par = 0;
    do
    {
        printf("Digite um numero positivo: ");
        scanf("%i", &num);

        if (num < 0)
        {
            printf("ERROR! Esse numero nao sera contabilizado! \n"); 
        }

        else if (num % 2 == 0 && num > 0)
        {
            par++;
        }
        cont++;

    } while (cont <= 10);

    printf("Voce digitou %i numeros pares \n", par);
    system("pause");
    return 0;
}
