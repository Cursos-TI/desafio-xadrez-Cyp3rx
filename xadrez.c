#include <stdio.h>


void torres(int torred){

    if (torred <= 5){

        printf("Direita\n");

        torres(torred + 1);
    }
}


void bispos(int bispod){

    if (bispod <= 5){

        printf("Cima\n");

        for(int bispodir = 1; bispodir <= 1; bispodir++){

            printf("Direita\n");
        }

        bispos(bispod + 1);
    }
}


void rainhas(int rainhad){

    if (rainhad <= 8){

        printf("Esquerda\n");

        rainhas(rainhad + 1);
    }
}


int main(){


    //declarando as variaveis
    int torre = 1;
    int bispo = 1;
    int rainha = 1;



    // fazendo os movimentos
    printf("Movimentos da Torre\n");

    torres(torre);
    

    printf("\nMovimentos do Bispo\n");

    bispos(bispo);


    printf("\nMovimentos da Rainha\n");

    rainhas(rainha);



    printf("\nMovimentos do Cavalo\n");

    for(int c = 4, d = 0; c > d; c--, d++){


        if(c >= 0){

            printf("Cima\n");

        } if(d >= 1){

            printf("Direita\n");
        }
    }

        printf("esquerda\n");
    
}  