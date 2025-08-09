#include <stdio.h>

int main() {
    int number;         // 当前输入值
    int sum = 0;       // 累加和初始化
    int count = 0; 
    int num[100];    // 计数器初始化

    printf("请输入整数序列（以-1结束）:\n");
    
    // 首次读取（保证至少执行一次循环）
    scanf("%d", &number);
    
    while (number != -1) {
        num[count]=number;
        sum += number;
        count++;
        scanf("%d", &number);  // 继续读取下一个输入
    }

    // 处理零输入的特殊情况
    if (count > 0) {
        printf("平均值: %.2f\n", (double)sum / count);
    } else {
        printf("未输入有效数据\n");
    }

    int i;
    for (i=0;i<count;i++)
    {
        if ((double)sum / count<num[i])
        {
            printf("%d\n",num[i]);
        }
        
    }

    return 0;
}