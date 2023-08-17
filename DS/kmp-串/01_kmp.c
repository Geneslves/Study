#include "stdio.h"

#define MAXLEN 100
typedef struct // �����ַ�������
{
    char ch[MAXLEN];
    int length;
} SString;

typedef struct snode // �����ַ�������
{
    char data;
    struct snode *next;
} SString1;

void get_next(SString T, int next[]) // ��next����
{
    int i = 1, j = 0;
    next[1] = 0;
    while (i < T.length)
    {
        if (j == 0 || T.ch[i] == T.ch[j])
        {
            ++i;
            ++j;
            next[i] = j;
        }
        else
        {
            j = next[j];
        }
    }
}
void get_nextval(SString T, int nextval[]) // ��next�����Ż�nextval����
{
    int i = 1, j = 0;
    nextval[1] = 0;
    while (i < T.length)
    {
        if (j == 0 || T.ch[i] == T.ch[j])
        {
            ++i;
            ++j;
            if (T.ch[i] != T.ch[j])
            {
                nextval[i] = j;
            }
            else
            {
                nextval[i] = nextval[j];
            }
        }
        else
        {
            j = nextval[j];
        }
    }
}

int Index_KMP(SString S, SString T, int next[]) // KMP�㷨
{
    int i = 1, j = 1;
    while (i <= S.length && j <= T.length)
    {
        if (j == 0 || S.ch[i] == S.ch[j])
        {
            ++i;
            ++j;
        }
        else
        {
            j = next[j];
        }
    }
    if (j > T.length)
    {
        return i - T.length;
    }
    else
    {
        return 0;
    }
}

int main()
{
}