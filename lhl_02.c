#include <stdio.h>
int main()
{
    int price = 0;

    printf("请输入金额（元）");
    scanf("%d",&price);

    int change = 100 - price;

    printf("找%d元",change);

    return 0;
}