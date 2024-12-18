#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
   char palavra[21];
   printf("Digite uma palavra: ");
   gets(palavra);
    
   int i = 0;
   while(palavra[i] != '\0'){
       i++;
   }
   printf("%c\n", palavra[0]);
   printf("%c", palavra[i-1]);
   
   system("pause");
   return 0;
   
}
    