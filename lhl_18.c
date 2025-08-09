#include <stdio.h>
int main()
{
    int x;
    int n=0;

    printf("请输入一个整数：");
    scanf("%d",&x);

    n++;
    x/=10;

    while (x>0)
    {
        /* code */
        n++;
        x/=10;
    }

    printf("您输入了一个%d位数",n);


    return 0;
}