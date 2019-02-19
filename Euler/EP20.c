/*************************************************************************
	> File Name: EP20.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 14时06分16秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int num[300] = {0};

int main() {
    int ans = 0;
    num[0] = num[1] = 1;
    for (int i = 1; i <= 100; i++) {
        for(int j = 1; j <= num[0]; j++) {
            num[j] *= i;
        }
        for (int i = 1; i <= num[0]; i++) {
            if(num[i] < 10) continue;
            num[i + 1] += num[i] / 10;
            num[i] %= 10;
            if (i == num[0]) num[0]++;
        }
    }
    for (int i = num[0]; i >= 1; i--) {
        ans += num[i];
    }
    printf("%d\n", ans);
    return 0;
}
