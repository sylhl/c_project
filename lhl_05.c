#include <stdio.h>
int main()
{

    printf("请输入身高是几尺几寸:");

    float inch;
    float foot;

    scanf("%f %f",&foot,&inch);

    float height = (foot +inch/12.0) * 0.3048;
    printf("美国人的身高是%.3f",height);

    return 0;
}