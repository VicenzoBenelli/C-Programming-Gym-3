# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[30];
    int soma = 0;

    printf("\nDigite o nome: ");
    scanf("%s", nome);
    getchar();

    for (int i = 0; i < nome[i]; i++)
    {
        soma++;
    }
    
    printf("\nNome: ");

    for (int i = 0; i < soma; i++)
    {
        printf("%c ", nome[i]);
    }

    printf("\nNome Invertido: ");
    for (int i = soma - 1; i >= 0; i--)
    {
        printf("%c ", nome[i]);
    }
    
    
  return 0;
}
