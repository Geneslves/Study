//函数递归 循环 斐波那契数列
#include"stdio.h"
// int Fib(int n){
//     if(n>2){
//         return Fib(n-2)+Fib(n-1);
//     }
//     else return 1;
// }

int Fib(int n)
{
    int a=1;
    int b=1;
    int c=1;

    while (n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}

int main(){
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret =Fib(n);
    printf("%d",ret);
    return 0;
}