#include "stdio.h"
int arr(int x,int y)
{
 return x+y;
}

int main()
{
    int arr[10] = {0};
    int (*p)[10] = &arr;    //ȡ������ĵ�ַ

    int  (*pfArr[4])(int ,int);//pfArr��һ������-����ָ�������
    int  (*(*ppfArr)[4])(int ,int) = &pfArr;
    //ָ����ָ�������ָ��
    //ppfArr ������ָ�룬ָ��ָ����������ĸ�Ԫ�� 
    //ָ��������ÿ��Ԫ�ص�������һ������ָ��  int(*)(int,int)
    return 0;
}
