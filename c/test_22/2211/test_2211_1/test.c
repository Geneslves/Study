#include "stdio.h"
int Add(int x,int y)
{
    int z = 0;
    z = x + y;
    return z;
}

int main(){
    int a = 10;
    int b = 20;
    int (*pa)(int ,int ) = Add;
    printf("%d\n",pa(2,3));
    printf("%d\n",Add(2,3));
    printf("%d\n",(*pa)(2,3));  //* 加不加都行，加*必须用（）

    return 0;
}