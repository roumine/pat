//比较两个字符串s1和s2的大小，如果s1>s2，则输出一个正数；若s1=s2，则输出0；若s1<s2，则输出一个负数。

#include <stdio.h>
int main() {
    char a[100]={},b[100]={};
    gets(a);
    gets(b);
    int m = 0,i = 0;
    while (a[i] != '/0' && b[i] != '/0'){
        if(a[i] != b[i]){
        m = a[i] - b[i];
        break;
        }
        i++;
    }
    printf("%d", m);
}