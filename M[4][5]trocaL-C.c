#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int matriz[4][5];
    
    for(int linha = 0; linha < 4; linha++) {
        for(int coluna = 0; coluna < 5; coluna++) {
            printf("Digite um número inteiro: ");
            scanf("%i", &matriz[linha][coluna]);
        }    
    }
    for(int linha = 0; linha < 4; linha++) {
        for(int coluna = 0; coluna < 5; coluna++) {
            printf("[%i]", matriz[linha][coluna]);
        }    
        printf("\n");
    }
    printf("Trocando linhas por colunas: \n");
    
    for(int coluna = 0; coluna < 5; coluna++) {
        for(int linha = 0; linha < 4; linha++) {
            printf("[%i]", matriz[linha][coluna]);
        }    
        printf("\n");
    }
    system("pause");
    return 0;
}
    