#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
   char senha[11];
   char confirmacao[11];
   
   printf("Digite uma senha: ");
   gets(senha);
   printf("Confirme sua senha: ");
   gets(confirmacao);
   
   int i = 0;
   char s;
   char c; 
   int v = 0;
   
   while(senha[i] != '\0' || confirmacao [i] != '\0'){
       s = senha[i];
       c = confirmacao[i];
       if(s != c) {
           v = 1;
       }
       i++;
   }
   
   if(v == 1){
       printf("Senha incorreta!");
   } 
   else printf("Senha correta!");
   
   system("pause");
   return 0;
   
}
    