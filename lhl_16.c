#include <stdio.h>

int main() {
    int type;
    printf("请输入数字(1-4): ");
    scanf("%d", &type);

    switch (type) {
        case 1:  puts("你好");      break; // 使用puts自动换行
        case 2:  puts("早上好");    break;
        case 3:  puts("晚上好");    break;
        case 4:  puts("再见");      break;
        default: puts("啊，什么啊?");      // 默认分支无需break
    }

    return 0;
}