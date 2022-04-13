//有一行电文，已按如下规律译成密码：
//A-->Z        a-->z
//B-->Y        b-->y
//C-->X        c-->x
//......
//即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，非字母字符不变。
//要求根据密码译回原文，并输出。

#include <stdio.h>
int main() {
    char a[50]={},b[50]={};
    gets(a);
    int i = 0;
    while (a[i] != '\0'){
        if(a[i] >= 'A' && a[i] <= 'Z'){b[i] ='A' + 'Z' - a[i];}
        else if(a[i] >= 'a' && a[i] <= 'z'){b[i] ='a' + 'z' - a[i];}
        else b[i] = a[i];
        i++;
    }
    puts(b);
}