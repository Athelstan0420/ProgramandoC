#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int media;
    int nivel;
    printf("Digite a media do aluno: ");
    scanf("%d", &media);
    printf("nivel: 1-Medio | 2-Superior: ");
    scanf("%d", &nivel);
    if (nivel == 1)
    {
        if (media >= 6)
        {
            printf("ALUNO APROVADO! \n");
        }
        else if (media > 2 && media < 6)
        {
            printf("ALUNO EM FINAL! \n");
        }
        else printf("ALUNO REPROVADO! \n");
    }
    else if (nivel == 2)
    {
        if (media >= 7)
        {
            printf("ALUNO APROVADO! \n");
        }
        else if (media < 7 && media > 4)
        {
            printf("ALUNO EM FINAL! \n");
        }
        else printf("ALUNO REPROVADO! \n");
    }
    system("pause");
    return 0;
}


