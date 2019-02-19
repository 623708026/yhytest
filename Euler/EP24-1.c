/*************************************************************************
	> File Name: EP24-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月26日 星期三 18时57分45秒
 ************************************************************************/

#include<stdio.h>

int jc(int n) {
    if (n == 1) return 1;
    return n * jc(n - 1);
}

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 999999;
    int n = 9;
    while (k != 0) {
        k %= jc(n);
        n--;
    }
    for (int i = 0; i < 10; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
