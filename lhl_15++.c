#include <stdio.h>

int main() 
{
    int x;
    puts2("请输入x值：");
    scanf("%d", &x);

    // 直接返回结果，避免中间变量
    if (x < 0) {
        printf("-1\n");
    } 
    else if (x == 0) {  // 使用else-if替代嵌套结构
        printf("0\n");
    } 
    else {
        printf("%d\n", 2 * x);  // 即时计算输出
    }

    return 0;
}