#include <stdio.h>

int main() {
    // 定义常量
    const double RATE = 8.25;    // 标准时薪
    const int STANDARD = 40;     // 标准工作时间
    
    // 声明变量
    double pay = 0.0;           // 应付工资
    int hours;                  // 工作小时数
    
    // 获取用户输入
    printf("请输入工作的小时数：");
    scanf("%d", &hours);
    printf("\n");
    
    // 计算工资
    if (hours > STANDARD) {
        // 加班计算：标准时间部分按正常时薪，超出部分按1.5倍
        pay = STANDARD * RATE
        + (hours - STANDARD) * (RATE * 1.5);
    } else {
        // 正常工作时间计算
        pay = hours * RATE;
    }
    
    // 输出结果
    printf("应付工资：%f\n", pay);
    
    return 0;
}