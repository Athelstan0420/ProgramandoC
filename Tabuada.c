#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    int num;
    int contador = 1;
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%i", &num);

    while (contador <= 10)
    {
        printf("%i x %i = %i \n", num, contador, (num*contador));
        
        contador++;
    }
    
    system("pause");    
    return 0;
}
