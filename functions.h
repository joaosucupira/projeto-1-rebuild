/** Function definitions **/
#include<stdio.h>

void triple(Rect* ret)
{
    ret->xSE *= 3;
    ret->ySE *= 3;
    ret->xID *= 3;
    ret->yID *= 3;
}

#define N_HIFENS 20
void printRect(Rect ret)
{
    int i = 0;
    while(i < N_HIFENS){
        printf("-");
        i++;
    }
    printf("\n");

    printf("SE Point = (%d, %d)\n",ret.xSE,ret.ySE);
    printf("ID Point = (%d, %d)\n",ret.xID,ret.yID);

    i = 0;
    while(i < N_HIFENS){
        printf("-");
        i++;
    }
    printf("\n");

}
