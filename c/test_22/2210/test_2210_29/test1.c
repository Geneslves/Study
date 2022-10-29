#include <stdio.h>
//将低序字节存储在起始地址，这称为小端(little-endian)字节序；小端是高字节存放到内存的高地址
//将高序字节存储在起始地址，这称为大端(big-endian)字节序;大端是高字节存放到内存的低地址
int check_sys()
{
    int i = 1;
    return (*(char *)&i);
}
int main()
{
    int ret = check_sys();
    if(ret == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
}