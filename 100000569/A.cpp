//顺序插入

#include<cstdio>
int main() {
    int a[10],n;
    for (int i = 0; i < 9; ++i) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for (int i = 8; i >= 0; --i) {
        if(a[i] > n){
            a[i+1] = a[i];
        } else{
            a[i+1] = n;
            break;
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d\n",a[i]);
    }
    return 0;
}