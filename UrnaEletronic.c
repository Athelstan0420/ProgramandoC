#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int qtdVotos = 1;
    int voto;
    int a = 0;
    int b = 0;
    int n = 0;
    
    while (qtdVotos <= 10)
    {
        printf("1-Candidato A, 2-Candidato B, 3-Nulo: ");
        scanf("%i", &voto);
        if (voto == 1)
        {
            a++;
        }
        else if (voto == 2)
        {
            b++;
        }
        else if (voto == 3)
        {
            n++;
        }
        else printf("Ivalido \n");
        qtdVotos++;
    }
    printf("O candidato A teve: %i votos. \n", a);
    printf("O candidato B teve: %i votos. \n", b);
    printf("Tiveram %i votos nulos. \n", n);
    system("pause");
    return 0;
}
