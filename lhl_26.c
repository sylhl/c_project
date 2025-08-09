#include <stdio.h>
int main()
{
    // task:正序得到每一位数字
    int i=1;
    int input_num;
    scanf("%d",&input_num);
    int x=input_num;

    // 1.判断数字位数
    while (x>9)
    {   x/=10;
        i*=10;
    }
    // printf("i=%d",i);

    int top=0;
    // 2.使用/获取最高位数
    do
    {   top=input_num/i;
        printf("%d ",top);

        
    // 3.使用%保存剩余数字
        input_num=input_num%i;
        
    // 4.循环
        i/=10;
    } while (i>0);
    return 0;
}