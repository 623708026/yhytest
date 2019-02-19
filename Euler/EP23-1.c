/*************************************************************************
	> File Name: EP23-1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月04日 星期五 18时09分42秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 28123

int prime[MAX_N + 5] = {0};
int mnum[MAX_N + 5] = {0};
int snum[MAX_N + 5] = {0};
int ynum[MAX_N + 5] = {0};
int anum[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            mnum[i] = 1;
            snum[i] = i + 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                mnum[prime[j] * i] = mnum[i] + 1;
                snum[prime[j] * i] = snum[i] / (pow(prime[j], mnum[i] + 1) - 1) * (pow(prime[j], mnum[i] + 2) - 1);
                break;
            } else {
                mnum[prime[j] * i] = 1;
                snum[prime[j] * i] = snum[prime[j]] * snum[i];
            }
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (snum[i] - i > i) ynum[++ynum[0]] = i;
    }
    for (int i = 1; i <= ynum[0]; i++) {
        for (int j = i; j <= ynum[0]; j++) {
            if (ynum[i] + ynum[j] <= MAX_N) anum[ynum[i] + ynum[j]] = 1; 
        }
    }
    return ;
}


int main() {
    init();
    int ans = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (!anum[i]) ans += i;
    }
    printf("%d\n", ans);
    return 0;
}
