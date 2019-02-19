/*************************************************************************
	> File Name: EP58.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 20时35分27秒
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define MAX_N 10000000

int prime[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i < MAX_N; i++) {
        if(!prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    init_prime();
    int cnt_prime = 8;
    int cnt = 13;
    int n;
    for (n = 4; 10 * cnt_prime >= cnt; n++) {
        if (prime[(int64_t)pow(2 * n + 1, 2) - 2 * n] == 0) cnt_prime++;
        if (prime[(int)pow(2 * n + 1, 2) - 4 * n] == 0) cnt_prime++;
        if (prime[(int)pow(2 * n + 1, 2) - 6 * n] == 0) cnt_prime++;
        cnt += 4;
    }
    cout << 2 * n + 1 << endl;
    return 0;
}
