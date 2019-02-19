/*************************************************************************
	> File Name: EP46.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 19时04分53秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};
int isPrime[MAX_N + 5] = {0};
int num[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]){
            prime[++prime[0]] = i;
            num[i] = 1;
        }
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
    for (int64_t i = 1; i <= prime[0]; i++) {
        for(int64_t j = 1; ; j++) {
            if (prime[i] + 2 * j * j > MAX_N) break;
            if (isPrime[prime[i] + 2 * j * j] == 1)
            num[prime[i] + 2 * j * j] = 1;
        }
    }
    int64_t ans = 0;
    //printf("%d\n", judge((15)));
    for (int64_t i = 9; i <= MAX_N; i += 2) {
        if (num[i] == 0) {
            ans = i;
            break;
        }
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
