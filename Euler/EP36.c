/*************************************************************************
	> File Name: EP36.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 18时08分17秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int judge(int x, int num) {
    int sum = 0;
    while (x) {
        sum = sum * num + x % num;
        x /= num;
    }
    return sum;
}

int main(){
    int ans = 0, x10, x2;
    for (int i = 1; i < MAX_N; i++) {
        x10 = judge(i, 10);
        x2 = judge(i, 2);
        if (x10 == x2 && x2 == i) ans += i;
    }
    printf("%d\n", ans);

    return 0;
}
