#include <stdio.h>


int main(){


    //declarando as variaveis
    int torre = 1;
    int bispo = 1;
    int cavalob = 1, cavaloe = 1;



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

    printf("\nMovimentos do Cavalo\n");

    for(cavaloe; cavaloe <= 1; cavaloe++){

        while(cavalob <= 2){

            printf("baixo\n");

        
            cavalob++;
        }

        printf("esquerda\n");
    }
}  