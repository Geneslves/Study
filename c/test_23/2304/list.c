
//----------˳���Ĵ洢�ṹ----------
#define MZXSIZE 10 // ˳�����ܴﵽ����󳤶�
#define ElemType struct student   //ElenTye����Ϊ���ͣ��ַ��ͣ������ͻ��߽ṹ������

typedef struct
{
    ElemType *elem; // �洢�ռ�Ļ���ַ
    int length;     // ��ǰ�ĳ���
} SqList;           // ˳���Ľṹ����ΪSqList

struct student
{
    char name;
    int phone;
    char address;
};

// #include "stdio.h"
// int main()
// {
//     printf("%d\n", sizeof(ElemType)); // 16 ----- ������
//     printf("%d\n", sizeof(int));      // 4
//     printf("%d\n", sizeof(char));     // 1
//     printf("%d\n", sizeof(SqList));   // 16
// } 