#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int matriz [2][3];
    
    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            printf("Digite um número inteiro: ");
            scanf("%i", &matriz[linha][coluna]);
            
        }    
    }
    
    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            printf("[%i]", matriz[linha][coluna]);
        }    
        printf("\n");
    }
    
    system("pause");
    return 0;
}
    