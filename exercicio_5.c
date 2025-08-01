# include <stdio.h>
# include <locale.h>
# include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char palavra1[100];
    char palavra2[100];

    

    printf("\nDigite a Primeira palavra: ");
    scanf("%s", palavra1);

    printf("\nDigite a Segunda palavra: ");
    scanf("%s", palavra2);
    
    strcat(palavra1, " ");
    strcat(palavra1,palavra2);

    printf("\nVariaves concatenadas: %s", palavra1);
    
    
  return 0;
}


