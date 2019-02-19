/*************************************************************************
	> File Name: EP33.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 19时51分04秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int judge(int x, int y) {
    int x1 = x % 10, x2 = x / 10, y1 = y % 10, y2 = y / 10;
    if (x >= y) return 0;
    if (x1 == y1 && x * y2 == y * x2) return 1;
    if (x1 == y2 && x * y1 == y * x2) return 1;
    if (x2 == y1 && x * y2 == y * x1) return 1;
    if (x2 == y2 && x * y1 == y * x1) return 1;
    return 0;
}

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    int ans1 = 1, ans2 = 1;
    int ans;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            a = 10 * i + j;
            for (int x = 1; x <= 9; x++) {
                for(int y = 1; y <= 9; y++) {
                    b = 10 * x + y;
                    if (judge(a, b)){
                        ans1 *= a;
                        ans2 *= b;
                       // printf("%d / %d\n",a , b);
                    }
                }
            }
        }
    }
    ans = ans2 / gcd(ans1, ans2);
   // printf("%d\n",judge(22, 22));
    printf("%d\n", ans);
    return 0;
}
