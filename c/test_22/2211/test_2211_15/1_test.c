#include <stdio.h>
#include <stdlib.h> //  exit() ����
int main()
{
    char c[1000];
    FILE *fptr;
 
    if ((fptr = fopen("runoob.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // �ļ�ָ�뷵�� NULL ���˳�
        exit(1);         
    }
 
    // ��ȡ�ı���ֱ�������µ�һ�п�ʼ
    fscanf(fptr,"%[^\n]", c);
 
    printf("��ȡ����:\n%s", c);
    fclose(fptr);
    
    return 0;
}