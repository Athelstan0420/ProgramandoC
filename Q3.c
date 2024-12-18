#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    int temp;
    printf("Informe a temperatura: ");
    scanf("%i", &temp);
    if (temp <= 0)
    {
        printf("A agua na temperatura %i esta no estado solido \n", temp);
    }
    else if (temp > 0 && temp < 100)
    {
        printf("A agua na temperatura %i esta no estado liquido \n", temp);
    }
    else  printf("A agua na temperatura %i esta no estado gasoso \n", temp);
    system("pause");
    return 0;
}
