/** Main functions **/
#include"types.h"
#include"functions.h"
#include <stdio.h>

#define N_RECTS 3
int main()
{
    int i;

    Rect retangulos[N_RECTS];
    Rect* ptr_ret;
//
//    ptr_ret = &retangulos[0];
//    fillRectUp(ptr_ret);
//    printRect(retangulos[0]);

    for(i = 0; i < N_RECTS; i++)
    { //Por que os valores aleatorios nao mudam?
        ptr_ret = &retangulos[i];
        fillRectUp(ptr_ret);
        printRect(retangulos[i]);
    }
    return 0;
}
