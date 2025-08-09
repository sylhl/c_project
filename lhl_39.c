#include <stdio.h>
int main()
{
    int i;
    int p=(int)&i;
    printf("%x\n",&i);
    printf("%p\n",&i);
    printf("%p\n",p);
    return 0;
}