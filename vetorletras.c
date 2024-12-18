#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int len = 5;
    char letras [len];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite uma letra: ");
        scanf("%s", &letras[i]);
    }

    printf("As letras digitadas foram: ");

    for (int i = 0; i < len; i++)
    {
        printf("%c ", letras[i]);
    }

    printf("\n");
    printf("ORDEM INVERSA: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%c ", letras[i]);
    }
    printf("\n");

    printf("A primeira letra eh: %c \n", letras[0]);
    printf("A ultima letra eh: %c \n", letras[4]);

    system("pause");
    return 0;
    
}
