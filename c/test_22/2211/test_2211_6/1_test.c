#include "stdio.h"
#include "assert.h"

int my_strlen(const char *str)
{
    int count = 0;
    assert(str != NULL);
    while (*str != '\0') // while(*str)
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    int len = my_strlen("abcdef");
    printf("%d\n", len);
    return 0;
}


/*
//·½·¨¶ş
int Strlen(const char *str)
{
    if (*str == '\0')
        return 0;
    else
        return 1 + Strlen(str + 1);
}
int main()
{
    char *p = "abcdef";
    int len = Strlen(p);
    printf("%d\n", len);
    return 0;
}
*/