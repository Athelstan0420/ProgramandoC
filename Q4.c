  
/*
    Crie um programa em C que solicite ao usuário que insira uma senha e verifique se a senha digitada está correta.
    A senha correta deve ser 1234. O programa deve permitir que o usuário tente acertar a senha até 3 vezes.
    Quando o usuário acertar, o programa exibe uma mensagem de sucesso e encerra.
    Se o usuário não acertar nenhuma das 3 vezes, o programa exibe uma mensagem informando que o limite excedeu e encerra.

*/
  
  #include <stdio.h>
  #include <stdlib.h>

  int main(int argc, char const *argv[])
  {

    int pin;
    int senha = 1234;
    int tentativas = 1;

    while (tentativas <= 3)
    {
        printf("Digite a senha: ");
        scanf("%i", &pin);

        if (pin == senha)
        {
            printf("Parabens, a sua senha esta correta! \n");
            return 0;
        }

        else if (tentativas < 3)
        {
            printf("Tente mais uma vez... \n");
        }
        else if (tentativas == 3)
        {
            printf("O numero de tentativas esgotou!!! \n");
        }  
        tentativas++;        
    }
    
    system("pause");
    return 0;
  }
  