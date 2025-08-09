#include <stdio.h>
void swap(int *q,int *w);
int main()
{
    int a,b;
    a=0;
    b=1;
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);

    return 0;
}
void swap(int *q,int *w)
{
    int t;
    t=*w;
    *w=*q;
    *q=t; 
}