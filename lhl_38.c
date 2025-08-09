#include <stdio.h>

int main()
{
    const int size=9;
    int i,j;
    int square[9][9];

    for ( i = 1; i < 10; i++)
    {
        for ( j = 1; j < 10; j++)
        {
            square[i][j] = i*j;
            printf("%d ",square[i][j]);

        }
        printf("\n");
    }
    

    return 0;
}