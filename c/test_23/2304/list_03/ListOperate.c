#include "../list_02/list.c"
#include "stdio.h"
#include "stdbool.h"

//-----------˳����ʼ��---------
bool InitList(SqList *L)
{
    
    L->length=0;
}

int main()
{
    SqList L;
    InitList(&L);
    printf("%d",sizeof(L));
}
