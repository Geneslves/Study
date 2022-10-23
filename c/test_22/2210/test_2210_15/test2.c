//函数递归 求n阶乘
#include"stdio.h"
int Fac(int n){
    if (n>1)
    return n*Fac(n-1);
    else
    return 1;
}

int main(){
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret =Fac(n);
    printf("%d",ret);
    return 0;
}