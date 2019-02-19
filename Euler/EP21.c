/*************************************************************************
	> File Name: EP21.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月02日 星期三 18时12分34秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 28231
int prime[MAX_N + 5] = {0};
int mnum[MAX_N + 5] = {0};
int dnum[MAX_N + 5] = {0};
int snum[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if(!prime[i]){
            prime[++prime[0]] = i;
            dnum[i] = 2;
            snum[i] = i + 1;
            mnum[i] = 1;

        }
        for (int j = 1; j <= prime[0]; j++) {
            if(prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) {
                mnum[prime[j] * i] = mnum[i] + 1;
                dnum[prime[j] * i] = dnum[i] / (mnum[i] + 1) * (mnum[i] + 2);
                snum[prime[j] * i] = snum[i] / (pow(prime[j], mnum[i] + 1) - 1) * (pow(prime[j], mnum[i] + 2) - 1);
                break;
            } else {
                dnum[prime[j] * i] = dnum[prime[j]] * dnum[i];
                snum[prime[j] * i] = snum[prime[j]] * snum[i];
                mnum[prime[j] * i] = 1;
            }
        }
    }
    for (int i = 1; i <= prime[0]; i++) {
        //printf("%d ", prime[i]);
    }
} 



int main() {
    int sum1, sum2, ans = 0;
    init_prime();
    for(int i = 2; i < MAX_N; i++) {
        for (int j = i + 1; j <=MAX_N; j++ ) {
            sum1 = snum[i] - i;
            sum2 = snum[j] - j;
            if (sum1 == j && sum2 == i) ans += (i + j);
            }
    }
    printf("%d\n", ans);
    return 0;
}
