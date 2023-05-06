/*
 #include "stdio.h"
#include "stdlib.h"
#define Book struct book

struct book
{
    int id;
    char name[50];
    int price;
};

typedef struct
{
    Book elem;
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
    test(head);
    printf("%d",head->elem->id);
}
*/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define Book struct book

struct book
{
    int id;
    char name[50];
    int price;
};

typedef struct
{
    Book elem;
    int length;
} SqList;

SqList *test(SqList *head)
{
    head->elem.id = 1;
    strcpy(head->elem.name, "Book Name"); // �������name��ֵ
    return head;
}

int main()
{
    SqList *head = (SqList *)malloc(sizeof(SqList));
    test(head);
    printf("%d\n", head->elem.id);
    printf("%s\n", head->elem.name); // �������ӡname
    free(head);                      // �ͷŶ�̬������ڴ�
    return 0;
}

/*
�ǵģ������д���һЩ����

���ȣ���`test`�����У�`head->elem->id`��һ���Ǵ���ġ�`head`��һ��ָ��`SqList`�ṹ���ָ�룬��`elem`��`SqList`�ṹ���е�һ����Ա������Ҫʹ�ü�ͷ��������`->`�������ʡ�Ӧ�ý�`head->elem->id`�޸�Ϊ`head->elem.id`��

��Σ���`main`�����У�`head->elem->id`��һ��Ҳ���ڴ���`head->elem`��һ��`Book`�ṹ�壬������ָ�룬���ͬ������Ҫʹ�ü�ͷ���������������Ա��Ӧ�ý�`head->elem->id`�޸�Ϊ`head->elem.id`��

�������޸ĺ�Ĵ��룺

```c
#include "stdio.h"
#include "stdlib.h"

#define Book struct book

struct book
{
    int id;
    char name[50];
    int price;
};

typedef struct
{
    Book elem;
    int length;
} SqList;

SqList* test(SqList *head)
{
    head->elem.id = 1;
    return head;
}

int main()
{
    SqList *head = (SqList *)malloc(sizeof(SqList));
    test(head);
    printf("%d", head->elem.id);
    return 0;
}
```

�޸ĺ�Ĵ���Ӧ���ܹ����������ִ�У������ `1`����ע�⣬��ʹ���궯̬������ڴ��Ӧ��ʹ�� `free` �������ͷ���������������У��� `main` ��������󣬿��Լ��� `free(head)` ���ͷŶ�̬������ڴ档
*/

/*
Ҫ��`name`���и�ֵ������ʹ���ַ�����صĺ���������`strcpy`�������������޸ĺ�Ĵ���ʾ����

```c
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define Book struct book

struct book
{
    int id;
    char name[50];
    int price;
};

typedef struct
{
    Book elem;
    int length;
} SqList;

SqList* test(SqList *head)
{
    head->elem.id = 1;
    strcpy(head->elem.name, "Book Name"); // ʹ��strcpy������name��ֵ
    return head;
}

int main()
{
    SqList *head = (SqList *)malloc(sizeof(SqList));
    test(head);
    printf("%d\n", head->elem.id);
    printf("%s\n", head->elem.name); // ��ӡname
    free(head); // �ͷŶ�̬������ڴ�
    return 0;
}
```

��`test`�����У�ʹ��`strcpy`�������ַ��� `"Book Name"` ���Ƶ� `head->elem.name` �У�ʵ�ֶ� `name` �ĸ�ֵ����`main`�����У�ͨ�� `printf` ������ӡ `name` ��ֵ����ע�⣬Ϊ��ʹ�� `strcpy` ��������Ҫ����ͷ�ļ� `string.h`��

������Ӧ��Ϊ��

```
1
Book Name
```

ע�⣺��ʹ�� `strcpy` ����ʱ��Ҫȷ��Ŀ������ `name` �㹻��������Ҫ���Ƶ��ַ�����������ɻ����������
*/