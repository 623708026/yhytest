/*************************************************************************
	> File Name: EP39.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 16时08分07秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int arr[1005] = {0};
int main() {
    int temp = 0;
    for (int a = 5; a < 1000; a++) {
        for (int b = 4; b < a; b++) {
            for (int c = 3; c < b; c++) {
                if (a + b + c > 1000) continue;
                if (a * a == b * b + c * c)
                arr[a + b + c] += 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 1000; i++) {
        if(arr[i] > ans) {
            ans = arr[i];
            temp = i;
        }
    }
    printf("%d %d", ans, temp);
    return 0;
}
