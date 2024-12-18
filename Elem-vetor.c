#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int len;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &len);
    
    int vetor[len];
    for(int i = 0; i < len; i++){
        printf("Digite um valor para adicionar no vetor: ");
        scanf("%i", &vetor[i]);
    }
    
    printf("Vetor: ");
    for(int i = 0; i < len; i++){
        printf("%i ", vetor[i]);
    }
    
    system("pause");
    return 0;
}
    