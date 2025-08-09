#include <stdio.h>

int main()
{
    int x;               // 原始数值
    int digit;           // 存储当前位的数字
    int ret = 0;         // 存储反转结果
    
    // 初始化（图片中硬编码的测试值）
    // x = 12345;
    // 实际使用时可以取消下面这行注释替换为手动输入：
     printf("请输入整数："); 
     scanf("%d", &x);

    // 反转过程
    while (x > 0) {
        digit = x % 10;          // 获取最后一位数字
        ret = ret * 10 + digit;  // 将数字添加到反转结果中
        printf("x=%d, digit=%d, ret=%d\n", x, digit, ret); // 调试输出
        x /= 10;                 // 移除最后一位
    }

    // 输出最终结果
    printf("反转结果：%d\n", ret);
    
    return 0;
}