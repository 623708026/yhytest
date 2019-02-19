/*************************************************************************
	> File Name: EP23.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月02日 星期三 19时15分33秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 28123

int ynum[MAX_N + 5] = {0};
int pnum[MAX_N + 5] = {0};

void init() {
    for (int i = 12; i <= MAX_N; i++) {
        int cnt = 0;
        for (int j = 1; 2 * j <= i; j++) {
            if (i % j == 0) {
                cnt += j;
            }
        }
        if (cnt > i) ynum[i] = 1;
    }
    printf("%d\n",ynum[12]);
}

int main() {
    init();
    int ans = 0;
    for (int i = 1; i <= MAX_N; i++) {
        for (int j = 1; j <= MAX_N; j++) {
            if(ynum[i] == 1 && ynum[j] == 1 && i + j <= MAX_N) pnum[i + j] = 1;
else continue;
        }
    }
    for (int i = 1; i <= MAX_N; i++) {
        if (pnum[i] == 1) continue;
        ans += i;
    }
    printf("%d\n", ans);
    return 0;
}


