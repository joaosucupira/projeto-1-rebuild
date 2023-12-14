/** Function definitions **/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Função que mostra as coordenadas no prompt: */
#define N_HIFENS 20
void printRect(Rect ret)
{
    int i = 0;
    while(i < N_HIFENS){
        printf("-");
        i++;
    }
    printf("\n");

    printf("SE Point = (%d, %d)\n", ret.xSE, ret.ySE);
    printf("ID Point = (%d, %d)\n", ret.xID, ret.yID);

    i = 0;
    while(i < N_HIFENS){
        printf("-");
        i++;
    }
    printf("\n");

}

/* Função que preenche valores aleatorios menores que 100 para os pontos*/
void fillRectUp(Rect* ret)
{

    ret->xID = rand() % 100;
    ret->xSE = rand() % 100;
    ret->yID = rand() % 100;
    ret->ySE = rand() % 100;

}

int pegaX_SE()


/** FUNCAO 1: CALCULA INTERSECCAO **/
//int calculaInterseccao(int n_retangulos){
//    int inter_xSE,inter_xID,inter_ySE,inter_yID;
//    int i, j, inter_area;
//
//
//
//
//}

/** FUNCAO 2: ENCONTRA PAR MAIS PROXIMO **/
//int encontraParMaixProximo(int n_retangulos);
