#include <stdio.h>
int main()
{
    int sum;
    int i;
    for (sum=0,i=0; i <= 10; i++)
    {   
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}