#include <stdio.h>
int main()
{
    //定义数值
    const int A = 100;
    const int B = 99;
    const int C = 100;
    int max = 0;

    //第一层
    if (A>=B)
    {
        /* code */
        if (A>=C )
        {
            /* code */
            max = A;
        }
        else{
            max = C;
        }
    }
    else{
        if (B>=C)
        {
            /* code */
            max = B;
        }
        else
        {
            max=C;
        }
        
    }
    
    printf("最大的是%d",max);
    

    return 0;
}