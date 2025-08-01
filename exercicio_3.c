# include <stdio.h>
# include <locale.h>
struct Numeros
{
    float numeros;
};


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    struct Numeros numero[5];
    float maior, menor;

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor do %d numero: ", i+1);
        scanf("%f", &numero[i].numeros);
    }

    menor = numero[0].numeros;
    menor = numero[0].numeros;

    for (int i = 0; i < 5; i++)
    {
        if (numero[i].numeros > maior)
        {
           maior = numero[i].numeros;
        }
        if (numero[i].numeros < menor)
        {
            menor = numero[i].numeros;
        }
        
    }

    printf("\nMaior numero: %.1f", maior);
    printf("\nMenor numero: %.1f", menor);
    
    

    
  return 0;
}
