#include <stdio.h>



int main() {


    

    int j = 0, k = 1;

    int numero;

    // torre move para direita cinco vezes

    for (int i = 0; i < 5; i++)
    {
    printf("torre: Direita\n");
    }
    printf("\n");


    
    // bispo move cinco casas na diagonal para direita e cima
    
    while (j < 5)
    {
        printf("Bispo: Cima\n");
        printf("Bispo: Direita\n");
        j++;
    }
    printf("\n");

    //rainha move 8 casas para esquerda

    do
    {
        printf("Rainha: Esquerda \n");
        k++;
    } while (k <= 8);
    


    return 0;
}
