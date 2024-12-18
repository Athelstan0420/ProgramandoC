#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int len = 3;
    char letras[len];
    char vogais[5];
    
    for(int i = 0; i < len; i++){
        printf("Digite uma letra: ");
        scanf("%s", &letras[i]);
    }
    
    int aux = 0;
    printf("Você digitou as vogais: -> ");
    for(int i = 0; i < len; i++){
        if(letras[i]=='a'||letras[i]=='e'||letras[i]=='i'||letras[i]=='o'||letras[i]=='u')
        { 
           aux = 1;  
           vogais[i] = letras[i];
           printf("%c ", vogais[i]);
        }
    }
    
    if (aux == 0) {
        printf("OPS! Você não digitou vogais! ");
    }
    
    system("pause");
    return 0;
}

    