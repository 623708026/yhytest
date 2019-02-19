/*************************************************************************
	> File Name: EP27.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 14时59分39秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_N 10000000

int prime[MAX_N + 5] = {0}; 
int num[MAX_N + 5] = {0};
int sprime[1000] = {0}

int get_num(int n,int a, int b) {
    return n * n + a * n + b;
}

void init() {
    for (int i = 2; i < MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            num[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    init();
    int ans = 0;
    int now = 0;:
    for (int i = 2; i <= 1000; i++){
        if (!num[i]) sprime[++sprime[0]] = i; 
    }
    for (int n = 0; n <= 1000; n++) {
        for (int a = -1000; a < 1000; a++) {
            for (int b = - 1000; b < 1000; b++) {
                if (!num[get_num(n, a, b)]) {
                now += 1;
                } else {
                    if (ans < now){
                        ans = now;
                        printf("%d %d %d %d", n , a, b, ans);
                    }
                    now = 0;
                }
            }
        }
    }
    return 0;
}
