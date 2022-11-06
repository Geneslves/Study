#include "stdio.h"
#include "string.h"
#include "assert.h"

char *my_strcpy(char *dest, const char *src)
{
    assert(dest != NULL);
    assert(src != NULL);
    char *ret = dest;

    /*    
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        
        //以上三句简化
        //*dest++ = *src++;
    }
    *dest = *src; //'\0'
    */
    // 10-18代码精简
    while (*dest++ = *src++)
    {
    }

    return ret;
}

int main()
{
    char arr1[] = "abcdefgi";
    char arr2[] = "bit";

    // strcpy(arr1,arr2);
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}