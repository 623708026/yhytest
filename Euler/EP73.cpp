/*************************************************************************
	> File Name: EP73.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 16时23分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 12000

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}


int main() {
    int cnt = 0;
    for (int i = 2; i <= MAX_N; i++) {
        for (int j = i / 3 + 1; 2 * j < i; j++) {
            cnt += (gcd(i, j) == 1);
        }
        
    }
    cout << cnt << endl;
    return 0;
}
