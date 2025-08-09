#include <stdio.h>
void f(int *p);
int main()
{
    int i=0;
    printf("%p\n",&i);
    printf("i=%d\n",i);
    f(&i);
    printf("i=%d\n",i);
    return 0;
}

void f(int *p)
{
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);
    *p=1;

}