/*************************************************************************
	> File Name: EP28.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 17时25分46秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main() {
    int ans = 1;
    for (int n = 2; n <= 501; n++) {
        ans = ans + pow(2 * n - 1, 2) + pow(2 * n - 1, 2) - 6 * (n - 1) + pow(2 * n - 1, 2) - 4 * (n - 1) + pow(2 * n - 1, 2) - 2 * (n - 1);
    }
    printf("%d\n", ans);
}