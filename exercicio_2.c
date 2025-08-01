# include <stdio.h>
# include <locale.h>
struct Numeros
{
    int numeros;
};


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int soma = 0;

    struct Numeros numero[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numero[i].numeros);
        soma += numero[i].numeros;
    }

    printf("A soma dos valores é: %d", soma);
    
  return 0;
}
