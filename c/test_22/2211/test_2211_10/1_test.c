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
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    //int a = 0x11223344;
    //低地址----------------------------------->高地址
    //......[][][][][][][11][22][33][44][][][]......  大端字节序存储模式
    //......[][][][][][][44][33][22][11][][][]......  小端字节序存储模式
    return 0;
}