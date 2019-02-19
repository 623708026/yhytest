/*************************************************************************
	> File Name: EP50.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月14日 星期一 18时59分33秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int sum[MAX_N + 5] = {0};
int isPrime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            isPrime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 1; i <= prime[0]; i++) {
        sum[i] = sum[i - 1] + prime[i];
    }
    int ans = 953, num = 21;
    for (int i = 1; i <= prime[0]; i++) {
        for (int j = i + num; j <= prime[0]; j++) {
            if (sum[j] - sum[i] >= MAX_N) break;
            if (isPrime[sum[j] - sum[i]] == 0) {
                num = j - i;
                ans = sum[j] - sum[i];
            }
        }
    }
    printf("%d -> %d", ans, num);
    return 0;
}
