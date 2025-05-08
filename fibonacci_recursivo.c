#include <stdio.h>
#include <stdlib.h>



int fibonacci(int posicao) {

    if (posicao == 1) {
        return 0;

    }

    if (posicao == 2)
    {
        return 1;
    }
    
    return fibonacci(posicao - 2) + fibonacci(posicao - 1);

}


int main(int argc, char const *argv[])
{
    
    int valor, aux;

    printf("Digite um numero: ");
    scanf("%i", &valor);

    
    aux = fibonacci(valor);
    


    system("pause");
    return 0;
}


