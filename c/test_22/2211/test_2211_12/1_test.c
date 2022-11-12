#include "stdio.h"
#include "errno.h"
#include "string.h"
#include "stdlib.h"

int main()
{
    //向内存申请10个整型空间
    int *p = (int *) malloc (10 * sizeof(int));
    if (p == NULL)
    {
        //打印错误信息
        printf("%s\n", strerror(errno));
    }
    else
    {
        //正常使用空间
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            *(p + i) = i;
        }
        for (i = 0; i < 10; i++)
        {
            printf("%d ", *(p + i));
        }
    }

    free(p);
    p = NULL;//释放后p值仍存在

    return 0;
}