#include <stdio.h>
int main()
{

    int whole=0;
    printf("请输入一个四位数字（第一位可以用0）：");
    scanf("%d",&whole);

    int hour1=whole/100;
    int min1=whole%100;

    int add_min=0;
    printf("下个时间比上个时间快多少分钟:");
    scanf("%d",&add_min);
    int total_min=hour1*60+min1;
    int later_min=total_min+add_min;

    printf("时间为%d时%d分"
        ,later_min/60,later_min%60);
    return 0;
}