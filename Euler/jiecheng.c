/*************************************************************************
	> File Name: jiecheng.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 14时33分58秒
 ************************************************************************/

#include<stdio.h>

int jc(int x) {
    if (x == 1) return 1;
    return x * jc(x - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", jc(n));
    return 0;
}
