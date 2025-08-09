#include <stdio.h>
int main()
{
    //  初始化
    int price = 0;
    int bill = 0;

    printf("请输入价格：");
    scanf("%d",&price);
    printf("请输入票面：");
    scanf("%d",&bill);

    if (bill>=price) {
        printf("找您 %d 元",bill-price);
    } else {
        printf("您的钱不够，还差 %d 元",price-bill);
    }

    return 0;
}