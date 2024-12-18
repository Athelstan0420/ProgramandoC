
#include <stdio.h>
#include <stdlib.h> 
// Crie uma função que recebe uma string e retorna o tamanho dessa string;

int tamanho_string(char vetor[100]) {

    int i = 0;
    int contador = 0;
    while (vetor[i] != '\0')
    {   
        contador++;
        i++;
    }
    return contador;
}

int main(int argc, char const *argv[])
{   

    char texto[100];
    printf("Digite um texto: ");
    gets(texto);
    int t = tamanho_string(texto);
    printf("O tamanho da string digitada foi: %i\n", t);
    system("pause");
    return 0;

}
