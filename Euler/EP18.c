/*************************************************************************
	> File Name: EP18.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 19时31分58秒
 ************************************************************************/
#include<stdio.h>
#define max_n 15

int map[max_n + 5][max_n + 5] = {0};
int keep[max_n + 5][max_n + 5] = {0};

int solve(int i, int j) {
    if (i == max_n) return 0;
    if (keep[i][j]) return keep[i][j];
    int lnum = solve(i + 1, j), rnum = solve(i + 1, j + 1);
    keep[i][j] = (lnum > rnum ? lnum : rnum) + map[i][j];
    return keep[i][j];
}

int main() {
    for (int i = 0; i < max_n; i++) {
        for (int j = 0; j <= i; j++){
            scanf("%d", map[i] + j);
        }
    }
    printf("%d\n", solve(0, 0));
    return 0;
} 
