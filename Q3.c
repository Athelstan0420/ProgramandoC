/*
    Crie um programa que peça ao usuário para digitar números inteiros positivos e some esses números.
    O programa deve terminar quando o usuário digitar um número negativo. No final, 
    o programa deve exibir a soma dos números positivos digitados.
*/
  
  
  
  #include <stdio.h>
  #include <stdlib.h>

  int main(int argc, char const *argv[])
  {

    int num1, num2;
    int soma = 0;

    printf("Digite o primeiro valor positivo: ");
    scanf("%i", &num1);
    if (num1 < 0)
    {
        printf("OPS!!");
        return 0;
    }
    printf("Digite o segundo valor positivo: ");
    scanf("%i", &num2); 
    if (num2 < 0)
    {   
        printf("OPS!!");
        return 0;
    }

    soma = num1 + num2;
    printf("%i + %i = %i \n", num1, num2, soma);    

    system("pause");
    return 0;
  }
  