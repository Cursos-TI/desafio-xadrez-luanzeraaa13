#include <stdio.h>

int main() {
    int rainha = 1, bispo = 1, torre = 1;
    int casasra, casasbis, casastor;

// Interface inicial do jogo

    printf("Seja bem vindo ao Xadrez em C \n");
    printf("Sua Primeira peça a mover é a rainha \n");
    printf("Digite quantas casas ela ira se mover \n");
    scanf("%d", &casasra);

// Movimento da Rainha

while (rainha <= casasra)
{
    printf("Esquerda \n");
    
    rainha++;
}

//Movimento da torre
printf("Agora é a vez de mover a torre \n");
printf("Digite quantas casas ela ira se mover \n");
scanf("%d", &casastor);

for (torre = 1; torre <= casastor; torre++)
{
    printf("Direita \n");
}

    //Movimento do bispo
printf("Agora é a vez do Bispo \n");
printf("Digite quantas casas ele ira se mover \n");
scanf("%d", &casasbis);

do
{
    printf("Cima \n");
    printf("Direita \n");
    bispo++;
} while (bispo <= casasbis);


    return 0;
}
