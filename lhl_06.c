#include <stdio.h>
int main()
{

    int hour1,min1;
    int hour2,min2;

    printf("输入地区1的小时和分钟");
    scanf("%d %d",&hour1,&min1);

    printf("输入地区2的小时和分钟");
    scanf("%d %d",&hour2,&min2);

    int gap_time = hour1 * 60 + min1
    -hour2 * 60 - min2;
    printf("两个地区差了%dh%dmin"
        ,gap_time/60,gap_time%60);
    return 0;
}