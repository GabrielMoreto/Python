#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS

int main() {
    printf("*********************************")
    printf("Bem vindo ao jogo de Adivinhação!")
    printf("*********************************")

    int chute;
    double pontos = 1000;

    int nivel;
    int totaldetentativas;

    int acertou;

    srand(time(0));
    int numerosecreto = rand() % 100;

    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");

    scanf("%d", &nivel);

    if(nivel == 1) {
        totaldetentativas = 20;
    } else if (nivel == 2) {
        totaldetentativas = 10;
    } else {
        totaldetentativas = 5;
    }

    for(int i =1; i <= totaldetentativas; i++)

    printf("Tentativa %d de %d\n", i, totaldetentativas);

    printf("Qual é o seu %do. chute? ", i);
    scanf("%d", &chute);

    if(chute < 0){
         printf("Você não pode chutar números");
         continue;
    }

}