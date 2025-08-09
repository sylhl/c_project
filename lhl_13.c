#include <stdio.h>
int main()
{
    int score = 0;
    const int pass_score = 60;

    printf("请输入您的成绩：");
    scanf("%d",&score);
    
    printf("您的成绩是%d分\n",score);
    if (score>=pass_score)
    {
        printf("恭喜你通过考试\n");
        /* code */
    }
    else {printf("很遗憾您没有通过考试\n");

    }

    printf("感谢使用");

    
    return 0;
}