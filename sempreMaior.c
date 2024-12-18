#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int len = 3;
    int num[len];
    
    printf("Digite o primeiro número: ");
    scanf("%i", &num[0]);
    
    for(int i = 1; i < len; i++){
        printf("Digite mais um número: ");
        scanf("%i", &num[i]);
        while(num[i] < num[i-1]) {
            printf("ops.. número menor que o anterior \n");
            printf("Digite novamente mais um número: ");
            scanf("%i", &num[i]);
        }
    }
     
    for(int i = 0; i < len; i++){
        printf("%i ", num[i]);
    }
    
    system("pause");
    return 0;
}
    