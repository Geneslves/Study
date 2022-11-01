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
    printf(" :Xor              0:退出\n");
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
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = Add(x, y);
            printf("ret = %d\n", ret);
            break;
        case 2:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = Sub(x, y);
            printf("ret = %d\n", ret);
            break;
        case 3:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = Mul(x, y);
            printf("ret = %d\n", ret);
            break;
        case 4:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = Div(x, y);
            printf("ret = %d\n", ret);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    return 0;
}
*/

/*函数指针数组*/
/*
int main(){
    int input = 0;
    int x = 0;
    int y = 0;
    // pfArr 是一个函数指针数组 - 转移表
    int (*pfAdd[])(int,int) = {0,Add,Sub,Mul,Div};
    do{
        menu();
        printf("请选择：");
        scanf("%d", &input);
        if(input >=1 && input <=5)
        {   printf("输入操作数：");
            scanf("%d %d", &x, &y);
            int ret = pfAdd[input](x,y);
            printf("%d\n",ret);
        }
        else if (input == 0){
            printf("退出\n");
        }
        else
        {
            printf("选择错误\n");
        }
        
    }while (input);
}
*/
//回调函数
void Calc(int (*pf)(int,int)){
    int x = 0;
    int y = 0;
    printf("输入操作数：");
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
        printf("请选择：");
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
            printf("退出程序\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    return 0;
}