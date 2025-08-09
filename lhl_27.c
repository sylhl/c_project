#include <stdio.h>
int main()
{
    int a=12;
    int b=18;
    int t;

    while (b!=0){
        t=a%b;
        a=b;
        b=t;
    }
    printf("%d",a);
    return 0;
}