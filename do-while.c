#include <stdio.h>
#include <stdlib.h>
#include <time.h> //existem funções e tipos de dados para manipular informações de tempo e datas;


int main(int argc, char const *argv[])

{   
    int num;
    
    do {
        
        printf("Digite um numero: ");
        scanf("%i", &num);
        
    }while(num <= 0);


    system("pause");
    return 0;
}
