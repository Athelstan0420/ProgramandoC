#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{    
    
    float a , b;
    
    printf("Digite o cateto (a): ");
    scanf("%f", &a);
    printf("Digite o cateto (b): ");
    scanf("%f", &b);
    
    //Função "pow" para calcular potência;
    float qa = pow(a,2);
    float qb = pow(b,2);
    float somaq = qa + qb;
    // Função "sqrt" para calcular raiz; 
    float raiz_c = sqrt(somaq); // hipotenusa;
    
    printf("A soma do quadrado dos catetos (a) e (b) é: %.0f\n", somaq);
    printf("O comprimento da hipotenusa (c) é igual a: %.0f\n", raiz_c);
    
    system("pause");
    return 0;
   
}
    