/** Main function **/
#include"types.h"
#include"functions.h"
#include<stdio.h>

int main()
{
    Rect ret;
    Rect* ptr_ret;
    ptr_ret = &ret;

    ret.xID = 1;
    ret.yID = 1;
    ret.xSE = 2;
    ret.ySE = 2;

    printRect(ret);

    triple(ptr_ret);

    printRect(ret);

    return 0;
}
