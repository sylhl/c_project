#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int set_num = rand()%100+1;
    int count = 0;
    int guess_num = 0;
    do
    {   printf("请输入1~100的数：");
        scanf("%d",&guess_num);
        count++;
        /*1.大了情况
        2.小了情况
        3.计数器*/
        if (guess_num>set_num)
        {
            /* code */
            printf("你输入的数字大了\n");
        } else if (guess_num<set_num)
        {
            /* code */
            printf("你输入的数字小了\n");
        }
        
    } while (guess_num!=set_num);
    printf("你猜了%d次",count);
    return 0;
}