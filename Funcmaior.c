#include <stdio.h>
#include <stdlib.h>

int maior(int num1, int num2, int num3);

int main(int argc, char const *argv[])
{

    int v1,v2,v3;

    printf("Digite um valor: ");
    scanf("%i", &v1);
    printf("Digite um valor: ");
    scanf("%i", &v2);
    printf("Digite um valor: ");
    scanf("%i", &v3);

    printf("O maior numero eh: %i\n", maior(v1,v2,v3));

    system("pause");
    return 0;
}

int maior(int num1, int num2, int num3) {

    int m;
    if (num1 > num2 && num1 > num3)
    {
        m = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        m = num2;
    }
    else m = num3;

    return m;
    
}

