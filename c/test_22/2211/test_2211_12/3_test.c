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

    // 20���ֽ����㲻��ʹ�ã�ϣ����40���ֽڵĿռ�
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