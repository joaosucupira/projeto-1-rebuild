/** Main functions **/
#include"types.h"
#include"functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_RECTS 3
int main()
{
    srand(time(NULL));
    int i;

    Rect retangulos[N_RECTS];
    Rect* ptr_ret;

    for(i = 0; i < N_RECTS; i++)
    {
        ptr_ret = &retangulos[i];
        fillRectUp(ptr_ret);
        printRect(retangulos[i]);
    }

//    ptr_ret = &retangulos[0];
//    fillRectUp(ptr_ret);
//    printRect(retangulos[0]);
//
//
//    ptr_ret = &retangulos[1];
//    fillRectUp(ptr_ret);
//    printRect(retangulos[1]);

    return 0;
}
