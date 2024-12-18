#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int len = 5;
    int num[len];
    int soma = 0;
    
    for(int i = 0; i < len; i++){
    
        printf("Digite um valor %i: ", (i));
        scanf("%i",&num[i]);
        soma += num[i];
    
    }
    printf("Vetor: ");
    for(int i = 0; i < len; i++){
        printf("%i ", num[i]);
    }
    printf("\n");
    printf("A soma dos números inseridos é: %i", soma);
    
    system("pause");
    return 0;
}



    