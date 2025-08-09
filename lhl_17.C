#include <stdio.h>

int main() {
    // 提示输入成绩（原图注释被截断的部分推测为此功能）
    printf("请输入成绩(0-100): ");
    
    char grade_str;
    int grade;
    scanf("%d", &grade);  // 读取用户输入的成绩
    
    grade /= 10;  // 通过整除10将百分制成绩转换为10分档
    
    switch (grade) {
        case 10:  // 100分
        case 9:   // 90-99分
            grade_str='A';
            break;
        case 8:   // 80-89分
            grade_str='B';
            break;
        case 7:   // 70-79分
            grade_str='C';
            break;
        case 6:   // 60-69分
            grade_str='D';
            break;
        default:  // 60分以下及其他无效输入
            grade_str='E';
    }
    printf("%c",grade_str);
    return 0;
}