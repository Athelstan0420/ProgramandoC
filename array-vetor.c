#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int len = 3;
    float array[len];
    float media = 0;
    
    for(int i = 0; i <= len; i++){
    
        printf("Digite o valor %i: ", (i) );
        scanf("%f", &array[i]);
        media =+ array[i];
    }
    
    media / len;
    
    for(int i = 0; i<= len; i++) {
        printf("%.0f", array[i]);
        if (i < len) {
            printf(" + ");
        }
        else if (i == len) {
            printf(" = ");
        
        }
    }
    
    printf("%.0f \n", media);
    system("pause");
    return 0;
}



    