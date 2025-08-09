#include <stdio.h>

int main()
{
    int x;                // 定义整型变量x
    scanf("%d", &x);      // 获取用户输入的x值
    
    int f = 0;            // 初始化结果变量f
    if (x < 0) {          // 第一层判断：x是否小于0
        f = -1;
    } else {              // else分支嵌套第二层判断
        if (x == 0) {     // 判断x是否等于0
            f = 0;
        } else {          // 剩余情况即x>0
            f = 2 * x;
        }
    }
    
    printf("%d\n", f);    // 输出计算结果
    return 0;
}