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
    printf("\n");
    
    if (len == 1) {
        printf("O primeiro e último valor é: %i \n", vetor[0]);
    }
    else if (len > 1) {
        printf("Primeiro valor digitado foi: %i \n", vetor[0]);
        printf("O último valor digitado foi: %i \n", vetor[len-1]);
    }
    
    if(len % 2 == 0) {
        printf("Não há um elemento exatamente no meio do vetor, pois o tamanho do vetor é par. \n");
    }
    
    system("pause");
    return 0;
}
