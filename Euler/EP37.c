/*************************************************************************
	> File Name: EP37.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月09日 星期三 19时18分15秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<inttypes.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
int is_prime[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            is_prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    is_prime[0] = is_prime[1] = 1;
    return ;
}

int judge(int64_t x) {
    int64_t temp = x;
    while(temp) {
        if (is_prime[temp] == 1) return 0;
        temp /= 10;
    }
    int64_t num = (int64_t)pow(10, floor(log10(x)));
    temp = x;
    while (temp) {
        if(is_prime[temp] == 1) return 0;
        temp -= (temp / num) * num;
        num /= 10;
    }
    return 1;
}

int main() {
    int64_t sum = 0, flag = 11;
    init_prime();
   /* for (int i = 1; i <= prime[0]; i++) {
        printf("%d  ", prime[i]);
    }
    printf("%d\n", judge(11));*/
    for (int64_t i = 1; i <= prime[0]; i++) {
        if (prime[i] < 10) continue;
        if (judge(prime[i]) == 1) {
            sum += prime[i];
            flag--;
           // printf("%d\n", prime[i]);
        }
            if (flag == 0) break;
        
    }
    printf("%" PRId64 "\n", sum);
    return 0;
}
