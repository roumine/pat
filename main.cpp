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

//比较两个字符串s1和s2的大小，如果s1>s2，则输出一个正数；若s1=s2，则输出0；若s1<s2，则输出一个负数。
//    char a[100]={},b[100]={};
//    gets(a);
//    gets(b);
//    int m = 0,i = 0;
//    while (a[i] != '/0' && b[i] != '/0'){
//        if(a[i] != b[i]){
//        m = a[i] - b[i];
//        break;
//        }
//        i++;
//    }
//    printf("%d", m);
//}

//有一行电文，已按如下规律译成密码：
//A-->Z        a-->z
//B-->Y        b-->y
//C-->X        c-->x
//......
//即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，非字母字符不变。
//要求根据密码译回原文，并输出。
//    char a[50]={},b[50]={};
//    gets(a);
//    int i = 0;
//    while (a[i] != '\0'){
//        if(a[i] >= 'A' && a[i] <= 'Z'){b[i] ='A' + 'Z' - a[i];}
//        else if(a[i] >= 'a' && a[i] <= 'z'){b[i] ='a' + 'z' - a[i];}
//        else b[i] = a[i];
//        i++;
//    }
//    puts(b);
//}

//杨辉三角
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if(j == 0 || j == i){
//                a[i][j] = 1;
//            } else{
//                a[i][j] = a[i-1][j] + a[i-1][j-1];
//            }
//        }
//    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if(i >= j)
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//}

//数组元素逆置
//    int a[10],m;
//    for (int i = 0; i < 10; i++) {
//        scanf("%d",&a[i]);
//    }
//    for (int i = 0; i < 5; ++i) {
//        m = a[i];
//        a[i] = a[10 - i - 1];
//        a[10- i - 1] = m;
//    }
//    for (int i = 0; i < 10; ++i) {
//        printf("%d\n",a[i]);
//    }
//}

