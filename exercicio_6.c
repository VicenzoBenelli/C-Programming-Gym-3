# include <stdio.h>
# include <locale.h>
# include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char palavra[100];
    char letra;
    int soma = 0;

    printf("Digite uma Frase: ");
    scanf("%s", palavra);

    getchar();

   
    printf("Digite uma Letra: ");
    scanf("%c", &letra);

    for (int i = 0; palavra[i]; i++)
    {
        if (palavra[i] == letra)
        {
            soma ++;
        }
        
    }

    printf("A letra %c apareceu %d vezes na frase %s", letra, soma, palavra);
    
    
  return 0;
}


