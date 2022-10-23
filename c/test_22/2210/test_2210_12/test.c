#include "stdio.h"

/*
#include "add.h"
#include "add.c"   在add.h中进行引用add.c函数也可以

int main()
{
    int a=50;
    int b=20;
    int sum=Add(a,b);
    int ca=Ad(a,b);
    printf("%d\n",sum);
    printf("%d\n",ca);
    return 0;
}
*/
/*递归
void print(int n){
    if(n>9){
        print(n/10);
    }
    printf("%d ",n%10);
}

int main(){
    unsigned int num=0;
    scanf("%d",&num);
    //递归
    print(num);
}
*/
int main(){
    int a,b;
    scanf("%d",&a);
    b=2*a;
    printf("%d ",b);
    printf("%d ",a);
}
