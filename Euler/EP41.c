/*************************************************************************
	> File Name: EP41.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 17时53分37秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 100000000

int prime[MAX_N + 5] = {0};
int isPrime[MAX_N + 5] = {0};

void init(){
    for (int i = 2; i < MAX_N; i++) {
        if(!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            isPrime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int judge(int x) {
    int arr[10] = {0};
    int m, n;
    int temp = x;
    if (isPrime[x] == 1) return 0; 
    while (x) {
        m = x % 10;
        if(arr[m] == 1) return 0;
        arr[m] = 1;
        x /= 10;
    }
    n = (int)floor(log10(temp)) + 1;
   // printf("%d\n", n);
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) return 0;
    }
    return 1;
}

int main() {
    int ans = 0, num;
    init();
    //printf("%d\n",judge(2143));
    for (int i = 2143; i < MAX_N; i++) {
        if (judge(i)) num = i;
        if (ans < num) ans = num;
    }
    printf("%d\n", ans);
    return 0;
}
