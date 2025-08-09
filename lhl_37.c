#include <stdio.h>

int main() {
    const int maxNumber = 25;  // 筛选上限
    int isPrime[maxNumber];    // 素数标记数组
    
    // 初始化数组（假设所有数都是素数）
    for (int i = 0; i < maxNumber; i++) {
        isPrime[i] = 1;
    }

    // 筛法核心逻辑：标记非素数
    for (int x = 2; x < maxNumber; x++) {
        if (isPrime[x]) {  // 如果x是素数
            // 标记x的所有倍数为非素数
            for (int i = 2; i * x < maxNumber; i++) {
                isPrime[i * x] = 0;
            }
        }
    }

    // 输出结果
    printf("2~25之间的素数：\n");
    for (int i = 2; i < maxNumber; i++) {
        if (isPrime[i]) {
            printf("%d\t", i);  // 制表符分隔
        }
    }
    printf("\n");  // 换行结束

    return 0;
}