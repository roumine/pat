//从键盘上输入10个整数，存储在一个长度为10的整型数组中，要求将输入的10个数逆序输出。

#include <stdio.h>

int main() {
    int a[10]={};
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 9; i >= 0; --i) {
        printf("%d ",a[i]);
    }
}
