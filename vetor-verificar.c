#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int len = 5;
    int num[len];
    
    for(int i = 0; i < len; i++){
    
        printf("Digite um valor %i: ", (i));
        scanf("%i",&num[i]);
    
    }
    
    int aux = printf("Digite mais um valor: "); scanf("%i", &aux);
   
    printf("Vetor: "); 
    for(int i = 0; i < len; i++){
        printf("%i", num[i]);
    }
  
    printf("\n");
   
    int cont = 0;
    for(int i = 0; i < len; i++){
        cont = num[i];
        if (cont == aux) {
        
            printf("O número %i está contido no vetor! ",aux);
            return 0;
        } 
        else printf("O número %i não está contido no vetor", aux);
        return 0; 
    }
    
    system("pause");
    return 0;
}



    