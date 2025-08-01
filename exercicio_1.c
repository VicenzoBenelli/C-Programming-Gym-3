# include <stdio.h>
# include <locale.h>
struct Numeros
{
    int numeros;
};


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    struct Numeros numero[5];




    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o %d numero do array: ", i+1);
        scanf("%d", &numero[i].numeros);
        getchar();
    }
    

    printf("\nSequencia numerica invertida:\n");

    for (int i = 4; i >= 0; i--)
    {
        printf("%d, ", numero[i].numeros);
    }
    

  return 0;
}
