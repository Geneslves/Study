#include "stdio.h"
#include "string.h"
#include "assert.h"

void *my_memcpy(void *dest, const void *src, size_t num)
{
    void *ret = dest;
    assert(dest != NULL);
    assert(src != NULL);
    while (num--)
    {
        *(char *)dest = *(char *)src;
        dest = (char *)dest + 1;
        src = (char *)src + 1;
        //++(char *)dest
        //++(char *)src
    }
    return ret;
}

void *my_memmove(void *dest, const void *src, size_t count)
{
    void *ret = dest;
    assert(dest != NULL);
    assert(src != NULL);
    if (dest < src)
    {
        //前->后
        while (count--)
        {
            *(char *)dest = *(char *)src;
            dest = (char *)dest + 1;
            src = (char *)src + 1;
            //++(char *)dest
            //++(char *)src
        }
    }
    else  {
        //后->前
        while (count--)
        {
            *((char*)dest+count)=*((char*)src+count);
        }
        
    }

    return ret;
}

int main()
{

    // int arr1[] = {1, 2, 3, 4, 5};
    // int arr2[5] = {0};
    // memcpy(arr2, arr1, sizeof(arr1));

    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // my_memcpy不能胜任重叠拷贝
    // my_memcpy(arr3+2, arr3, 20);

    // memmove可以胜任重叠拷贝
    // memmove(arr3+2, arr3, 20);

    my_memmove(arr3 + 2, arr3, 20);

    return 0;
}
// C语言标准
// memcpy 只要处理 不重叠的内存拷贝就可以,当下VS2013环境可以重叠拷贝
// memmove 处理重叠内存的拷贝