#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int matriz [3][3];

    int linha, coluna;

    int valor = 10;

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            matriz[linha][coluna] =  valor;
            valor += 10;
        }
        
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("[%i]", matriz [linha][coluna]);
        }
        printf("\n");
        
    }

    system("pause");
    return 0;
}


