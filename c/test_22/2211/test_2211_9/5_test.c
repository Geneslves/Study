#include "stdio.h"
#include "string.h"
#include "assert.h"

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,5,4,3};

    int ret = memcmp(arr1,arr2,9);
    printf("%d\n",ret);

    return 0;
}
/*
int main(){
    char arr[10]="";
    memset(arr,'#',10);
    return 0;
}
*/