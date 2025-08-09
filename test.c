#include <stdio.h>
int main()
{   int a[3]={1,2,3};
    int *b=*a;
    printf("%d",b[0]);

    return 0;
}