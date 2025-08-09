#include <stdio.h>

int main() {
    int target = 2;          // 默认目标金额（元）
    int one, two, five;      // 硬币计数器
    
    // 可取消注释启用用户输入
    // printf("请输入目标金额（元）: ");
    // scanf("%d", &target);

    printf("凑%d元的方案：\n", target);
    
    for (one = 1; one < target * 10; one++) {
        for (two = 1; two < target * 10 / 2; two++) {
            for (five = 1; five < target * 10 / 5; five++) {
                if (one + two * 2 + five * 5 == target * 10) {
                    printf("➊ %d个1角 ➋ %d个2角 ➌ %d个5角\n", 
                          one, two, five);
                }
            }
        }
    }

    return 0;
}