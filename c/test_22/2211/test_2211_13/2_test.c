#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// code1
typedef struct st_type
{
    int i;
    int a[0]; //柔性数组成员
} type_a;

int main()
{
    printf("%d\n", sizeof(type_a)); //输出的是4
    //代码1
    int i = 0;
    type_a *p = (type_a *)malloc(sizeof(type_a) + 100 * sizeof(int));
    //业务处理
    p->i = 100;
    for (i = 0; i < 100; i++)
    {
        p->a[i] = i;
    }
    free(p);
    
}