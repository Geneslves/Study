#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

void menu(){
    printf("*************************\n");
    printf(" 1:add             2:sub \n");
    printf(" 3:mul             4:div \n");
    printf("         0:退出          \n");
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
            ret = add(x, y);
            printf("ret = %d\n", ret);
            break;
        case 2:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = sub(x, y);
            printf("ret = %d\n", ret);
            break;
        case 3:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = mul(x, y);
            printf("ret = %d\n", ret);
            break;
        case 4:
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = div(x, y);
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
int main(){
    int input = 0;
    int x = 0;
    int y = 0;
    // pfArr 是一个函数指针数组 - 转移表
    int (*pfAdd[5])(int,int) = {0,add,sub,mul,div};
    do{
        menu();
        printf("请选择：");
        scanf("%d", &input);
        if(input >=1 && input <=4)
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
