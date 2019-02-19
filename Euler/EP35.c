/*************************************************************************
	> File Name: EP35.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 14时06分31秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<inttypes.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int isprime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            isprime[prime[j] * i] = 1;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_prime(int x) {
    int num = floor(log10(x)), max = pow(10, floor(log10(x)));
    if (isprime[x] != 0)
        return 0;
    for (int i = 1; i <= num; i++) {
        x = x / 10 + (x % 10) * max;
        if (isprime[x] == 1) return 0;
    }
    return 1;
 }


int main() {
    init();
    int cnt = 0;

    //for (int i = 1; i <= prime[0]; i++) {
      //  printf("%d\n", prime[i]);
   // }
   // printf("%d\n", is_prime(17));
    for (int i = 1; i <= prime[0]; i++) {
       if (is_prime(prime[i])) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
