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
        //ǰ->��
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
        //��->ǰ
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
    // my_memcpy����ʤ���ص�����
    // my_memcpy(arr3+2, arr3, 20);

    // memmove����ʤ���ص�����
    // memmove(arr3+2, arr3, 20);

    my_memmove(arr3 + 2, arr3, 20);

    return 0;
}
// C���Ա�׼
// memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���,����VS2013���������ص�����
// memmove �����ص��ڴ�Ŀ���