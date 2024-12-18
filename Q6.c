
/*
    Escreva um programa em C que leia uma sequência de 10 números inteiros fornecidos pelo usuário
    e conte quantos desses números são pares e quantos são ímpares.
    O programa deve utilizar um laço for para iterar sobre os números e um 
    comando condicional para verificar a paridade de cada número.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int num;
    int par = 0;
    int imp = 0;

    for (int i = 10; i >= 1; i--)
    {
        printf("Digite um numero inteiro: ");
        scanf("%i", &num);

        if (num < 0)
        {
            printf("OPS! Voce digitou um numero negativo, todos os valores devem ser positivos. Rode o programa novamente!");
            return 0;
        }
        else if (num % 2 == 0)
        {
            par++;
        }

        else imp ++;  
    }

    printf("Voce digitou %i pares e %i impares \n", par, imp);
    system("pause");
    return 0;
}
