//冒泡排序

#include <stdio.h>

int main() {
    int a[10],m;
    for (int i = 0; i < 10; ++i) {
        scanf("%d",a+i);
    }
    for (int i = 1; i < 10; ++i) {
        for (int j = 0; j <10-i; ++j) {
            if(a[j] > a[j+1]){
                m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",a[i]);
    }
}


//int main() {
//    int a[10],m;
//    for (int i = 0; i < 10; ++i) {
//        scanf("%d",a+i);
//    }
//    for (int i = 0;i < 10;i++) {
//        for (int j = 0;j < 10-i;j++) {
//            if(a[j] > a[j+1]){
//                m = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = m;
//            }
//        }
//    }
//    for (int i = 0; i < 10; ++i) {
//        printf("%d\n",a[i]);
//    }
//}


