/*************************************************************************
	> File Name: EP16.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 18时33分19秒
 ************************************************************************/

#include<stdio.h>

int main() { 
    int ans[1000000] = {0};
    ans[0] = ans[1] = 1;
    for (int i = 0; i < 1000; i++){
        for (int j = 1; j <= ans[0]; j++) {
            ans[j] *= 2;
            printf("%d\n",ans[j]);
        }
        for (int j = 1; j <= ans[0]; j++){
            if (ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            if (j == ans[0]) ans[0]++;
        }
    }

    printf("%d\n", ans[0]);
    int sum = 0;
    for (int i = 1; i <= ans[0]; i++) sum += ans[i];
    printf("%d\n", sum);
    return 0;
}
