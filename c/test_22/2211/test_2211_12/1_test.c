#include "stdio.h"
#include "errno.h"
#include "string.h"
#include "stdlib.h"

int main()
{
    //���ڴ�����10�����Ϳռ�
    int *p = (int *) malloc (10 * sizeof(int));
    if (p == NULL)
    {
        //��ӡ������Ϣ
        printf("%s\n", strerror(errno));
    }
    else
    {
        //����ʹ�ÿռ�
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
    p = NULL;//�ͷź�pֵ�Դ���

    return 0;
}