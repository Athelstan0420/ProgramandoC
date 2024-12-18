#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int len = 10;
    int array[len];
    int indice;
    
    for(int i = 0; i < len; i++){
        printf("Digite um número: ");
        scanf("%i", &array[i]);
    }
    
    printf("Informe um índice: ");
    scanf("%i", &indice);
    
    if (indice > len - 1 ) {
        printf("Posição Inválida!!");
        return 0;
    }
    else if (indice <= len - 1) { 
        printf("O valor do índice %i é: %i \n",indice,array[indice]);
        if (indice == 0){
            printf("Não existe índice anterior! \n");
            printf("O valor do índice posterior é: %i \n", array[indice+1]);
        }
        else
        {
            printf("O valor do índice anterior é: %i \n", array[indice-1]);
            if (indice + 1 > len-1) {
                printf("Não existe posterior! ");
            }
            else printf("O valor do índice posterior é: %i \n", array[indice+1]);    
        }
    }
    system("pause");
    return 0;
}

    