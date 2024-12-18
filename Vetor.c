#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    // TIPO NOME [QUANTIDADE];

    float array[4];
    float media = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &array[i]);
        media += array[i];
        //printf("%.0f \n", array[i]);
    }

    media / 4;

    for (int i = 0; i < 4; i++)
    {
        printf("%i", array[i]);
    }

    printf("%i", media);
    system("pause");
    return 0;
}
