/*************************************************************************
	> File Name: random.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 09时22分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100000

int prime[MAX_N + 5] = {0};
static int my_seed = 37;
int my_srand(int x) {
    my_seed = x;

}

int my_rand() {
    #define i my_seed
    i = i * 3 % 101;
    return i;
    #undef i
}

int quick_mod(int a, int b, int c) {
    int ans = 1, temp = a % c;
    while (b) {
        if (b & 1) ans *= temp;
        temp *= temp;
        temp %= c;
        ans %= c;
        b >>= 1;
    }
    return ans;
}

int get_len(int a, int b) {
    for (int i = 1; i < b - 1; i++) {
        if ((b - 1) % i) continue;
        if(quick_mod(a, i, b) == 1) return i;
    }
    return b - 1;
}

int main() {
    int a, b;
    for (int i = 2; i < MAX_N; i++) {
        if(!prime[i]) {
            prime[++prime[0]] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    for (int i = 2; i <= prime[0]; i++) {
        b = prime[i];
        if (b > 10000) break;
    }
        for (int i = 2; i < a; i++) {
            if (get_len(i, b) != b - 1) continue;
            a = i;
            break;
        }
    

    my_srand(time(0));
    cout << my_rand() << endl;
    return 0;
}
