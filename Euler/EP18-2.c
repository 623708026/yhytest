/*************************************************************************
	> File Name: EP18-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 20时52分25秒
 ************************************************************************/

#include<stdio.h>
#define max_n 15
#define max(a, b) ((a) > (b) ? (a) : (b))

int keep[max_n + 5][max_n + 5] = {0};

int main() {
    printf("%d\n", keep[-1][-5]);
    for (int i = 0; i < max_n; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", keep[i] + j);
        }
    }
    for (int i = 1; i < max_n; i++) {
        for (int j = 0; j <= i; j++) {
            int max_num = 0;
            if (j < i) {
                max_num = keep[i - 1][j];
            }
            if (j > 0) {
                max_num = max(keep[i - 1][j - 1], keep[i - 1][j]);
            }
            keep[i][j] += max_num;
        }
    }
    int ans = 0;
    for (int i = 0; i < max_n; i++) {
        ans = max(keep[max_n - 1][i], ans);
    }
    printf("%d\n", ans);
    return 0;
}
