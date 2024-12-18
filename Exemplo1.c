#include <stdio.h>
#include <stdlib.h>




void analisaString(char string[]){

    int i = 0;

    while(string[i] != '\n') {

        if (isalpha(string[i]) != 0)
        {
            printf("O texto digitado digitado so contem letras!");
            return 0;
        }
        i++;
    }

}

int main(int argc, char const *argv[])
{
    char texto[100];
    printf("Digite uma string qualquer: ");
    gets(texto);
    analisaString(texto);
    system("pause");
    return 0;
}
