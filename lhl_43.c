#include <stdio.h>
#include <stdlib.h>
int main()
{   int i;
    int a;
    int *p;
    scanf("%d\n",&a);
    // int b[a];
    p = malloc(a*sizeof(int));
    
    for (i=0;i<a;i++)
    {
        scanf("%d",&p[i]);
    }
    for (i=a-1;i>=0;i--)
    {
        printf("%d ",p[i]);
    }
    return 0;
}