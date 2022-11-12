#include "stdio.h"
#include "errno.h"
#include "string.h"
#include "stdlib.h"

int main()
{
    int *p = (int *)malloc(20);
    if (NULL == p)
    {
        printf("%s\n", strerror(errno));
    }
    else
    {
        int i = 0;
        for (i = 0; i < 5; i++)
        {
            *(p + i) = i;
        }
    }

    // 20个字节满足不了使用，希望有40个字节的空间
    int *ptr = realloc(p, 40);
    if (NULL != ptr)
    {
        p = ptr;
        int i = 0;
        for (i = 5; i < 10; i++)
        {
            *(p + i) = i;
        }

        for (i = 0; i < 10; i++)
        {
            printf("%d ", *(p + i));
        }
    }

    free(p);
    p = NULL;

    return 0;
}