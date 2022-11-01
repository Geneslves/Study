#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

int Sub(int a, int b)
{
    return a - b;
}

int Mul(int a, int b)
{
    return a * b;
}

int Div(int a, int b)
{
    return a / b;
}

int Xor(int a, int b)
{
    return a / b;
}

void menu(){
    printf("*************************\n");
    printf(" 1:Add             2:Sub \n");
    printf(" 3:Mul             4:Div \n");
    printf(" :Xor              0:�˳�\n");
    printf("*************************\n");
}

/*
int main()
{
    int x, y;
    int input = 1;
    int ret = 0;
    do
    {
        menu();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = Add(x, y);
            printf("ret = %d\n", ret);
            break;
        case 2:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = Sub(x, y);
            printf("ret = %d\n", ret);
            break;
        case 3:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = Mul(x, y);
            printf("ret = %d\n", ret);
            break;
        case 4:
            printf("�����������");
            scanf("%d %d", &x, &y);
            ret = Div(x, y);
            printf("ret = %d\n", ret);
            break;
        case 0:
            printf("�˳�����\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);
    return 0;
}
*/

/*����ָ������*/
/*
int main(){
    int input = 0;
    int x = 0;
    int y = 0;
    // pfArr ��һ������ָ������ - ת�Ʊ�
    int (*pfAdd[])(int,int) = {0,Add,Sub,Mul,Div};
    do{
        menu();
        printf("��ѡ��");
        scanf("%d", &input);
        if(input >=1 && input <=5)
        {   printf("�����������");
            scanf("%d %d", &x, &y);
            int ret = pfAdd[input](x,y);
            printf("%d\n",ret);
        }
        else if (input == 0){
            printf("�˳�\n");
        }
        else
        {
            printf("ѡ�����\n");
        }
        
    }while (input);
}
*/
//�ص�����
void Calc(int (*pf)(int,int)){
    int x = 0;
    int y = 0;
    printf("�����������");
    scanf("%d %d", &x, &y); 
    printf("%d\n",pf(x,y));
}

int main()
{
    int x, y;
    int input = 1;
    int ret = 0;
    do
    {
        menu();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            Calc(Add);
            break;
        case 2:
            Calc(Sub);
            break;
        case 3:
            Calc(Mul);
            break;
        case 4:
            Calc(Div);
            break;
        case 0:
            printf("�˳�����\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);
    return 0;
}