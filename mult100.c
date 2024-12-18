#include <stdio.h>
#include <stdlib.h>

int mult_cem(int num);

int main(int argc, char const *argv[])
{

    int valor, mult;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    mult = mult_cem(valor);
    printf("O numero multiplicado por 100 eh igual a: %i\n", mult);

    system("pause");
    return 0;
}

int mult_cem(int num) {

    int multiplicacao;
    multiplicacao = num * 100;
    return multiplicacao;
    
}

