//字符串求最大值
#include <stdio.h>

int main() {
    char a[100]={},b[100]={},c[100]={};
    gets(a);
    gets(b);
    gets(c);
    int i = 0;
    while (a[i] != '/0' && b[i] != '/0'&& c[i] != '/0'){
        if(a[i] > b[i]){
            if(a[i] > c[i]){
                puts(a);break;
            } else if(a[i] < c[i]){
                puts(c);break;
            } else continue;
        } else if(a[i] < b[i]){
            if(b[i] > c[i]){
                puts(b);break;
            } else if(b[i] < c[i]){
                puts(c);break;
            } else continue;
            break;
        } else if(b[i] < c[i]){
            puts(c);break;
        }
        else continue;
        i++;
    }
}

