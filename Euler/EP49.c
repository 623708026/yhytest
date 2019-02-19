/*************************************************************************
	> File Name: EP49.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 18时40分44秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[0]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    init();
    return 0;
}
