#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{             
    int num1, num2;
    int opc;
    printf("num1: ");
    scanf("%i", &num1);
    printf("num2: ");
    scanf("%i", &num2);
    printf("1-[+], 2-[-], 3-[*], 4-[/]: ");
    scanf("%i", &opc);
    if (opc == 1)
    {
        int soma = num1 + num2;
        printf("%i + %i = %i \n", num1, num2, soma);
    }
    else if (opc == 2)
    {
        int sub = num1 - num2;
        printf("%i - %i = %i \n", num1, num2, sub);
    }
    else if (opc == 3)
    {
        int mult = num1 * num2;
        printf("%i * %i = %i \n", num1, num2, mult);
    }
    else if (opc == 4)
    {
        int div = num1 / num2;
        printf("%i / %i = %i \n", num1, num2, div);
    }
    system("pause");
    return 0;
}


