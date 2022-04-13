//数组元素逆置

#include <stdio.h>
    int main(){
    int a[10],m;
    for (int i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; ++i) {
        m = a[i];
        a[i] = a[10 - i - 1];
        a[10- i - 1] = m;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",a[i]);
    }
}