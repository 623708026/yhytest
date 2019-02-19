/*************************************************************************
	> File Name: EP56.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年12月29日 星期六 19时48分02秒
 ************************************************************************/

#include<iostream>
using namespace std;


int get_num(int a, int b) {
    int ans = 0;
    int f[205] = {0};
    f[0] = f[1] = 1;
    for (int i = 2; i <= b; i++) {
        f[1] = i;
        for (int j = 2; j < 100; j++) {
            for (int k = 1; k <= f[0]; k++) {
                k *= i;
                if(f[k] > 10) {
                    f[k + 1] += f[k] / 10;
                    f[k] %= 10;
                    f[0] += (k == f[0]);
                    ans += f[k];
                }
            }
         
        }
    
    }
    return ans;
}



int main() {
    int sum = 0;
    int a,b;
    for (int a = 1; a < 100; a++) {
        for (int b = 1; b < 100; b++) {
            sum = (sum > get_num ? sum : get_num);

        }
    }
    cout << sum << endl;
    return 0;
}
