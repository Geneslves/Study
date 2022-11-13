#include "stdio.h"
#include "stdlib.h"

int main()
{
    // int *p = (int *)malloc(40);
    // if (p == NULL)
    // {
    //     return 0;
    // }
    // int *p2 = realloc(p, 80);
    // if (p2 != NULL)
    // {
    //     p = p2;
    // }
    int *p = realloc(NULL, 80);
    return 0;
}