
//----------顺序表的存储结构----------
#define MZXSIZE 10 // 顺序表可能达到的最大长度
#define ElemType struct student   //ElenTye可以为整型，字符型，浮点型或者结构体类型

typedef struct
{
    ElemType *elem; // 存储空间的基地址
    int length;     // 当前的长度
} SqList;           // 顺序表的结构类型为SqList

struct student
{
    char name;
    int phone;
    char address;
};

// #include "stdio.h"
// int main()
// {
//     printf("%d\n", sizeof(ElemType)); // 16 ----- 对齐数
//     printf("%d\n", sizeof(int));      // 4
//     printf("%d\n", sizeof(char));     // 1
//     printf("%d\n", sizeof(SqList));   // 16
// } 