//杨辉三角

#include <stdio.h>
    int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j == 0 || j == i){
                a[i][j] = 1;
            } else{
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i >= j)
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}