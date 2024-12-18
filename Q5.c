 
 /*Utilizando o for, crie um programa em C que leia as notas de 5 alunos e calcule a média das notas.*/
  #include <stdio.h>
  #include <stdlib.h>

  int main(int argc, char const *argv[])
  {

    int qtdalun = 5; int nota; int soma = 0; int media;

    for (int i = qtdalun; i >= 1; i--)
    {   
        printf("Digite sua nota: ");
        scanf("%i", &nota);
        soma += nota;
    }

    media = soma / qtdalun;
    
    printf("A media dos alunos eh: %i \n", media);
    system("pause");
    return 0;
  }
  