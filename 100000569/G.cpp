//Fibonacci数列的特点：第1,2个数为1,1。从第3个数开始，概述是前面两个数之和。即：
//要求输出Fibonacci数列的前20个数。

#include <stdio.h>
#include <math.h>

int main() {
    int a[20]={1,1};
    for (int i = 2; i < 20; ++i) {
        a[i] = a[i-1] + a[i-2];
    }
    for (int i = 0; i < 20; ++i) {
        printf("%d ",a[i]);
       // a[i] = pow(((1 + sqrt(5))/2),i)/sqrt(5) +0.5;
    }

}