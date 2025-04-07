#include <stdio.h>


int main(){


    //declarando as variaveis
    int torre = 1;
    int bispo = 1;



    // fazendo os movimentos
    printf("Movimentos da Torre\n");


    while(torre <= 5){
        
        printf("Direita\n");

        torre++;
    }

    printf("\nMovimentos do Bispo\n");

    do{

        printf("Cima,Direita\n");

        bispo++;

    }while(bispo <= 5);

    printf("\nMovimentos da Rainha\n");

    for(int rainha = 1; rainha <= 8; rainha++ ){

    printf("Esquerda\n");
    }

    return 0;
}
