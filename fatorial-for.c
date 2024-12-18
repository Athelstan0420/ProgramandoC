#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int fat = 1;
    int v;
    printf("Digite o numero que deseja obter o fatorial: ");
    scanf("%i", &v);
    for (v; v >= 1; v--)
    {
        fat *= v;
    }
    printf("%i \n", fat);
    system("pause");
    return 0;
}
