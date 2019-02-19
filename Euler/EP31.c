/*************************************************************************
	> File Name: EP31.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月21日 星期五 18时43分54秒
 ************************************************************************/
#include<stdio.h>
 
int w(int k) {
    static int arr[8] = {
        1, 2, 5, 10, 20, 50, 100, 200
    };
    return arr[k - 1];
}

int f(int k, int n){
    if (k == 1) return 1;
    if (n == 0) return 1;
    if (n < 0) return 0;
    return f(k - 1 , n) + f(k, n - w(k));
}

int main(){
    printf("%d\n", f(8,200));
    return 0;
}
