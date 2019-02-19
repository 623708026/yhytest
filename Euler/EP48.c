/*************************************************************************
	> File Name: EP48.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 18时33分23秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#define MOD_NUM 10000000000
#define D 100000


int64_t multiMod(int64_t n, int64_t m) {
    int64_t a, b, c, d, ans = 0;
    a = n / D; b = n % D;
    c = m / D; d = m % D;
    ans = (((a * D) % MOD_NUM) * d) % MOD_NUM;
    ans = (ans + (((b * D) % MOD_NUM) * c))% MOD_NUM;
    ans = (ans + b * d % MOD_NUM);
    return ans;
}


int64_t quickMod(int64_t n, int64_t m) {
    int64_t ans = 1, temp = n;
    while (m) {
        if (m % 2 == 1) ans = multiMod(ans, temp) ;
        temp = multiMod(temp, temp);
        m /= 2;
    }
    return ans;
}
 

int main() {
    int64_t sum = 0, temp;
    for (int64_t i = 1; i <= 1000; i++) {
        temp = quickMod(i, i);
       // printf("%"PRId64"\n", temp);
        sum += temp;
    }
    printf("%"PRId64"\n", sum % MOD_NUM);
    return 0;
}
