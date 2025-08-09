#include <stdio.h>
int main()
{
    int i=2;
    int x=2;

    for ( i = 2; i < 100; i++)
    {   int is_prime=1;
        /* 1.判断是不是素数 */
        for ( x = 2; x < i; x++)
        {if (i%x==0)
        {
            /* code */
            is_prime=0;
            break;
        }
        }   
        /* 2.打印出来 */
                    /* code */
            if (is_prime!=0)
            {
                printf("%d ",i);
            }


    }
    
    return 0;
}