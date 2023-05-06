// #include "stdio.h"
// #include "stdlib.h"
// #define Book struct book

// struct book
// {
//     int id;
//     char name[50];
//     int price;
// };

// typedef struct
// {
//     Book *elem;
//     int length;
// } SqList;

// SqList* test(SqList *head)
// {
//     head->elem->id = 1;
//     return head;
// }

// int main()
// {
//     SqList *head = (SqList *)malloc(sizeof(SqList));
//     test(head);
//     printf("%d",head->elem->id);
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct book
{
    int id;
    char name[MAX_NAME_LENGTH];
    int price;
};

typedef struct
{
    struct book *elem;
    int length;
} SqList;

SqList *test(SqList *head)
{
    head->elem->id = 1;
    return head;
}

int main()
{
    SqList *head = (SqList *)malloc(sizeof(SqList));
    head->elem = (struct book *)malloc(sizeof(struct book)); // Ϊbook�ṹ������ڴ�
    test(head);
    printf("%d", head->elem->id);

    free(head->elem); // �ͷŷ�����ڴ�
    free(head);
    return 0;
}
/*
���ṩ�Ĵ��붨����һ����Ϊ`book`�Ľṹ���һ����Ϊ`SqList`�Ľṹ�����������`book`�ṹ�����һ�����͵�`id`��һ������Ϊ50���ַ�����`name`��һ�����͵�`price`��`SqList`�ṹ�����һ��ָ��`Book`��ָ���һ�����͵�`length`��

�����л�������һ����Ϊ`test`�ĺ�����������һ��ָ��`SqList`��ָ����Ϊ������������һ��ָ��`SqList`��ָ�롣��`test`�����У��㽫`head->elem->id`��ֵ��Ϊ1��������`head`ָ�롣

��`main`�����У���ʹ��`malloc`Ϊ`SqList`�ṹ��������ڴ棬����ָ�븳ֵ��`head`��Ȼ�����`test`��������`head`��Ϊ�������ݽ�ȥ����`printf`����У����ӡ��`head->elem->id`��ֵ��

Ȼ�����������һ�����⡣��Ϊ`SqList`�ṹ��������ڴ棬��û��Ϊ`elem`ָ���`Book`�ṹ������ڴ档�⽫�����ڷ���`head->elem->id`ʱ����δ������Ϊ������ҪΪ`Book`�ṹ������ڴ档

����������������Ĵ���汾��

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

struct book
{
    int id;
    char name[MAX_NAME_LENGTH];
    int price;
};

typedef struct
{
    struct book *elem;
    int length;
} SqList;

SqList* test(SqList *head)
{
    head->elem->id = 1;
    return head;
}

int main()
{
    SqList *head = (SqList *)malloc(sizeof(SqList));
    head->elem = (struct book *)malloc(sizeof(struct book));  // Ϊbook�ṹ������ڴ�
    test(head);
    printf("%d", head->elem->id);

    free(head->elem);  // �ͷŷ�����ڴ�
    free(head);
    return 0;
}
```

��������µİ汾�У���������˶�`Book`�ṹ����ڴ���䲿�֣�ʹ��`malloc`Ϊ��������ڴ档��ʹ���������ڴ�����ǻ�����˱�Ҫ��`free`���ã��ͷŷ�����ڴ棬�����ڴ�й©��

*/