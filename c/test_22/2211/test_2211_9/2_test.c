#include "stdio.h"
#include "string.h"
#include "errno.h"

int main()
{
    //������   ������Ϣ
    // 0   --   No error
    // 1   --   Operation not permitted
    // char *str = strerror(1);

    // errno ��һ��ȫ�ֵĴ��������
    //��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
    //  char *str = strerror(errno);
    //  printf("%s\n", str);
    FILE *pf = fopen("test.txt", "r");

    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
    }
    else
    {
        printf("open fie sucess\n");
    }

    return 0;
}