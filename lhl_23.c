#include <stdio.h>
int main()
{
    int result=1;
    int i;
    int goal_num;

    printf("请输入一个正整数：");
    scanf("%d",&goal_num);
    
    for (i=1;i<=goal_num;i++){
        result*=i;
    }

    printf("阶乘的结果是%d",result);
    return 0;
}