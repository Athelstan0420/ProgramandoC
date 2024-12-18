#include <stdio.h>

int numero[2];
int i = 0;


int funcao(int num1, int num2){
    
    if (num1 > num2){
       int resultado = num1;
    }
    else{
        int resultado = num2;
    }
    
}

int main(){
    
    int resultado = 0;
    
    for(i = 0; i < 2; i++){
        printf("Digite o %d° número inteiro: ", i + 1);
        scanf("%d", &numero[i]);
    }    
  
    resultado =  funcao(numero[0], numero[1]);
    
    printf("O número maior é %d", resultado);
    
    
    return 0;
}