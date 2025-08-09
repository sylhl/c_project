#include <stdio.h>
void ident(int a[],int length,int *max,int *min );
int main()
{   int max,min;
    int list[6]={30,67,3,124,5,69};
    ident(list,sizeof(list)/sizeof(list[0]),&max,&min);
    printf("max=%d,min=%d\n",max,min);
    return 0;
}
void ident(int a[],int length,int *max,int *min )
{
    int i;
    *min = *max = a[0];
    for ( i = 0; i < length; i++)
    {
        if (a[i]<*min)
        {
            *min=a[i];
        }
        if (a[i]>*max)
        {
            *max=a[i];
        }
        
        
    }
    
}