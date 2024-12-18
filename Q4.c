#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float hd = 2048;
    float restante = 600;
    printf("Foram utilizados %.0f GB na instalacao do windows e dos demais programas necessarios. \n", hd - restante);
    system("pause");
    return 0;
}
