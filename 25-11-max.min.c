#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int len = 5;
    int array[len];
    int max;
    int min;

    for (int i = 0; i < len; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &array[i]);
    }

    for (int i = 0; i < len; i++)
    {   
        max = array[i];
        min = array[i];
        for (int i = 0; i < len; i ++)
        {
            if (array[i] > max)
            {
                max = array[i];
            }
        }
        for (int i = 0; i < len; i ++)
        {
            if (array[i] < min)
            {
                min = array[i];
            }
        }
    }

    printf("Maximo: %i \n", max);
    printf("Minimo: %i \n", min);

    system("pause");
    return 0;
}

