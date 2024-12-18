#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int num;
    int fat = 1 ;

    printf("Digite o valor que deseja ter o fatorial: ");
    scanf("%d", &num);

    while (num >= 1)
    {
        printf("%i \n", num);  
        fat = fat * num;
        num--;
    }
    printf("\nO fatorial do numero eh %i \n" ,fat);
    system("\npause");
    return 0;
}

