/*************************************************************************
	> File Name: qiuyinzihe.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月28日 星期五 20时36分26秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define max 10000

int prime[max + 5] = {0};
int dnum[max + 5] = {0};
int Snum[max + 5] = {0};
int mnum[max + 5] = {0};

void init() {
    for (int i = 2; i <= max; i++) {
        if(!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = 2;
            Snum[i] = 1 + i;
            mnum[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) {
                mnum[prime[j] * i] = mnum[i] + 1;
                Snum[prime[j] * i] = Snum[i] / (pow(prime[j], mnum[i] + 1) - 1) * (pow(prime[j], mnum[i] + 2) - 1); 
                break;
            } else {
                dnum[prime[j] * i] = dnum[prime[j]] * dnum[i];
                Snum[prime[j] * i] = Snum[prime[j]] * Snum[i];
                mnum[prime[j] * i] = 1;
            }
        }
    }
    return;
}

int main() {
    return 0;
}
