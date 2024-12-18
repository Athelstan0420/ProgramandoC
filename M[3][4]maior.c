#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int matriz[3][4];
    
    for(int linha = 0; linha < 3; linha++) {
        for(int coluna = 0; coluna < 4; coluna++) {
            printf("Digite um número inteiro: ");
            scanf("%i", &matriz[linha][coluna]);
            
        }    
    }
    for(int linha = 0; linha < 3; linha++) {
        for(int coluna = 0; coluna < 4; coluna++) {
            printf("[%i]", matriz[linha][coluna]);
        }    
        printf("\n");
    }
    int maior = 0;
    for(int linha = 0; linha < 3; linha++) {
        for(int coluna = 0; coluna < 4; coluna++) {
           if(matriz[linha][coluna] > maior) {
                maior = matriz[linha][coluna];
           }
        }    
    }
    
    printf("O maior valor é: %i", maior);
    system("pause");
    return 0;
}
    