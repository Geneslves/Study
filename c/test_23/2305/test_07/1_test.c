#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"

#define MaxSize 10

typedef struct
{
    char data[MaxSize];
    int top;
} SqStack;

// ��ʼ��ջ
void InitStack(SqStack *s)
{
    s->top = -1;
}

// �ж�ջ�Ƿ�Ϊ��
bool StackEmpty(SqStack *s)
{
    return s->top == -1;
}

// ��Ԫ����ջ
bool Push(SqStack *s, char x)
{
    if (s->top == MaxSize - 1)
    {
        return false; // ջ������ջʧ��
    }

    s->data[++s->top] = x;
    return true; // ��ջ�ɹ�
}

// ջ��Ԫ�س�ջ
bool Pop(SqStack *s, char *x)
{
    if (s->top == -1)
    {
        return false; // ջ�գ���ջʧ��
    }

    *x = s->data[s->top--];
    return true; // ��ջ�ɹ�
}

bool bracketCheck(char str[], int length)
{
    SqStack S;
    InitStack(&S);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            Push(&S, str[i]);
        }
        else
        {
            if (StackEmpty(&S))
                return false;

            char topElem;
            Pop(&S, &topElem);
            if (str[i] == ')' && topElem != '(')
                return false;
            if (str[i] == ']' && topElem != '[')
                return false;
            if (str[i] == '}' && topElem != '{')
                return false;
        }
    }
    return StackEmpty(&S);
}

int main()
{
    char str[11];
    int length;

    strcpy(str, "[{()([])}][");
    length = strlen(str);

    bool result = bracketCheck(str, length);

    if (result)
    {
        printf("Brackets are balanced\n");
    }
    else
    {
        printf("Brackets are not balanced\n");
    }

    return 0;
}
