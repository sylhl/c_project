#include <stdio.h>

void sum(int begin,int end)
{
    int sum=0;
    int i;
    for (i=begin; i <= end; i++)
    {   
        sum+=i;
    }
    printf("%d\n",sum);
}

int main()
{
    sum(10,11);
}