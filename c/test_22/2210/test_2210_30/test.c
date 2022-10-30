#include "stdio.h"
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    int* p =arr;
    for(i = 0;i<10;i++)
    {
        printf("%d ",p[i]);
        printf("%d ",*(p+i));
        printf("%d ",*(arr+i));
        printf("%d ",arr[i]);     //arr[i] == *(arr+i) == *(p+i) == p[i] 等价   [] 变址符(改变地址)
    }
    return 0;
}