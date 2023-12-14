/** Main functions **/
#include"types.h"
#include"functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_RECTS 10
int main()
{

    srand(time(NULL));
    int i;
    unsigned int resultado;

    Rect retangulos[N_RECTS];
    Rect* ptr_ret;

    for(i = 0; i < N_RECTS; i++){
        ptr_ret = &retangulos[i];
        fillRectUp(ptr_ret);
//        printRect(retangulos[i]);
//
    }
    for(i = 0; i < N_RECTS; i++)
        printRect(retangulos[i]);

    return 0;
}
