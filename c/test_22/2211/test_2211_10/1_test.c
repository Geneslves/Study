#include "stdio.h"

int check_sys1(){
    int a=1;
    return *(char*)&a;
}

int check_sys2(){
    union Un
    {
        char c;
        int i;
    }u;

    u.i=1;
    return u.c;
}

int main()
{
    int a=1;
    int ret =check_sys2();

    if(1==ret){
        printf("С��\n");
    }
    else
    {
        printf("���\n");
    }
    //int a = 0x11223344;
    //�͵�ַ----------------------------------->�ߵ�ַ
    //......[][][][][][][11][22][33][44][][][]......  ����ֽ���洢ģʽ
    //......[][][][][][][44][33][22][11][][][]......  С���ֽ���洢ģʽ
    return 0;
}