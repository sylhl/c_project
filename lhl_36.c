#include <stdio.h>

int main()
{   const int num = 10;
    int a[num];
    int input=0;
    int i;
    int cnt;

    for (cnt=0;cnt<num;cnt++)
    {
        a[cnt]=0;
    }
    while (input!=-1)
    {   printf("输入0~9的数字：（输入-1表示结束）");
        scanf("%d",&input);

        a[input]+=1;
    }
    
    
    for (i = 0; i < num; i++)
    {
        /* code */
        printf("%d出现了%d次\n",i,a[i]);
    }
    
    return 0;
}