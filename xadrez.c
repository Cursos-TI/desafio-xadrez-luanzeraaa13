#include <stdio.h>

//Recursividade da Rainha
void rainhamove (int r){
    if (r > 0);
    printf("Esquerda \n");
    rainhamove(r - 1);
}
//Recursividade da torre
void torremove (int t){
    if(t > 0);
    printf("Direita \n");
    torremove(t - 1);
}

int main() {
    int rainha = 1, bispo = 1, torre = 1;
    int casasra, casasbis, casastor, movcav;

// Interface inicial do jogo

    printf("Seja bem vindo ao Xadrez em C \n");
    printf("Sua Primeira peça a mover é a rainha \n");
    printf("Digite quantas casas ela ira se mover \n");
    scanf("%d", &casasra);

// Movimento da Rainha

rainhamove(casasra);

)

//Movimento da torre
printf("Agora é a vez de mover a torre \n");
printf("Digite quantas casas ela ira se mover \n");
scanf("%d", &casastor);

torremove(casastor);

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

getchar();

//movimento do cavalo

printf("Agora é a vez de mover o cavalo \n");
printf("Digite com letra maiuscula H para horizontal ou V para Vertical \n");
scanf("%c", &movcav);

//switch de definição de direção

switch (movcav)
{

//Movimentação Horizontal

case 'H' :
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("Direita \n");
        }
        printf("Cima \n");
    }

    break;

//Movimentação Vertical

case 'V':
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("Baixo \n");
        }
        printf("Esquerda \n");
    }

    break;

default:
    printf("Movimento incorreto \n");
    break;
}

    return 0;
}
