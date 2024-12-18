/*
    Crie um programa que pede para o usuário digitar um número inteiro e positivo e, em seguida,
    o programa mostra todos os números de 0 até esse número digitado.
    Utilize o comando de repetição mais apropriado para essa situação. 
*/

  #include <stdio.h>
  #include <stdlib.h>

  int main(int argc, char const *argv[])
  {

    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);

    while (num < 0)
    {
        printf("ERROR! Digite um numero inteiro positivo!\n");
        printf("Digite um numero inteiro positivo: ");
        scanf("%i", &num);
    }

    for (int i = 0; i <= num; i++)
    {
        printf("%i \n", i);
    }
    
    system("pause");
    return 0;
  }
  
  