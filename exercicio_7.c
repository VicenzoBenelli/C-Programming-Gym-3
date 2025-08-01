# include <stdio.h>
# include <locale.h>
# include <string.h>
int ArrayInteiros(int numeros[]);

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int numeros [10];
    int tamanho = 10;
    
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        getchar();
    }
    
   int soma =  ArrayInteiros(numeros);



    printf("\nSoma dos Numeros: %d", soma);
    printf("\nTamanho do conjunto: %d", tamanho);


  return 0;
}

int ArrayInteiros(int numeros[]){

    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma += numeros[i];
    }
    


  return soma;

}


