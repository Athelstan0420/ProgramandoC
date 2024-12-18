#include <stdio.h>
#include <stdlib.h>
#include <time.h> //existem funções e tipos de dados para manipular informações de tempo e datas;


int main(int argc, char const *argv[])
{
    int num;
    int contador = 1;
    int qtdtentativas = 1;

    srand((unsigned)time(NULL)); //Através das horas sorteia numeros;
    int sortnum = rand() % 101;
    //printf("%i \n", sortnum); 

    do {
        printf("Digite um numero: ");
        scanf("%i", &num);
        if (num != sortnum){
            printf("Voce errou! Tente novamente! \n");
            if (num < sortnum)
            {
                printf("O numero que voce digitou eh menor que o numero sorteado \n");
            }
            else if (num > sortnum)
            {   
                printf("O numero que voce digitou eh maior que o numero sorteado \n");
            }
        }
        else if (num == sortnum){
            printf("Voce acertou! Parabens! \n");
            printf("Voce acertou em %i tentativas. \n", qtdtentativas);
            system("pause");
            return 0;
        }
        if (contador == 5)
        {
            printf("Voce chegou ao limite de tentativas! GAME OVER! \n");
        }
        contador++;
        qtdtentativas++;       
    }while(contador <= 5);

    system("pause");
    return 0;
}

