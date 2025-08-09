#include <stdio.h>
int max(int a, int b)
{
    int result;
    if (a>=b)
    {
        result=a;
    }
    else
    {
        result=b;
    }

    return result;
}


int main()
{
    int a,b,c;
    a=100;
    b=234;
    c=max(12,56);
    printf("%d\n",c);
    c=max(a,b);
    printf("%d\n",c);
}
