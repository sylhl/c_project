#include <stdio.h>
int main()
{
    int amount = 100;
    int price = 0;

    printf("请输入钱：");
    scanf("%d",&price);

    printf("总付了：");
    scanf("%d",&amount);

    int return_money = amount - price;
    printf("要找回 %d 元",return_money);

    return 0;
}