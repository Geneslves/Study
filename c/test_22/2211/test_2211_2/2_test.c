#include "stdio.h"
#include "string.h"

void Swap(char *buf1, char *buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}

void bubble_sort(void *base, int sz, int width, int (*cmp)(void *e1, void *e2))
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        for (j = 0; i < sz - 1 - i; j++)
        {
            if (cmp((char *)base + j * width, (char *)base + (j + 1) * width) > 0)
            {
                Swap((char *)base + j * width, (char *)base + (j + 1) * width, width);
            }
        }
    }
}

int cmp_int(const void *e1, const void *e2)
{
    return *(int *)e1 - *(int *)e2;
}

struct Stu
{
    char name[20];
    int age;
};

int cmp_stu_by_age(const void *e1, const void *e2)
{
    return ((struct Stu *)e1)->age - ((struct Stu *)e2)->age;
}

int cmp_stu_by_name(const void *e1, const void *e2)
{
    return strcmp(((struct Stu *)e1)->name, ((struct Stu *)e2)->name);
}

void test1()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    struct Stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(arr[0]), cmp_int);
}

void test2()
{
    struct Stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

int main()
{
   // test1();
    test2();
    return 0;
}