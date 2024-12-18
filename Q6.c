#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{               
    float valor;
    float cotacao;
    printf("Insira o valor em reais que deseja converter: ");
    scanf("%f", &valor);
    printf("Insira o valor da cotacao atual: ");
    scanf("%f", &cotacao);
    float conversao = valor / cotacao;
    printf("%.2f R$ eh %.2f $ \n", valor, conversao);
    system("pause");
    return 0;
}