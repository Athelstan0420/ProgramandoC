#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%i", &num);
    int cont = 1;
    int aux = num;
    int soma = 0;

    while (aux >= cont)
    {
        //printf("%i \n", aux);
        if (num % aux == 0)
        {   
            soma = soma + aux;
            //printf("%i \n", aux);
        } 
        aux--;
    }

    if (soma-num == num)
    {
        printf("O numero %i eh um numero perfeito, pois a soma dos seus divisores menos ele mesmo eh igual a ele mesmo. \n", num);
    }
    else if (soma-num != num)
    {
        printf("O numero %i nao eh perfeito, pois a soma dos seus divisores menos ele mesmo nao eh igual a ele mesmo. \n", num);
    }
    
    //printf("%i\n", soma-num);
    system("pause");
    return 0;
}
