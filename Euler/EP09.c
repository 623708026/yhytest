/*************************************************************************
	> File Name: EP09.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 13时42分49秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    double c;
    int ans;
    for (a = 1; a <= 333; a++) {
        for (b = a + 1; b <= 499; b++){
            c = pow(a, 2) + pow(b, 2);
            c = sqrt(c);
            if (a + b + c == 1000) {
                ans = (int) (a * b * c);
                printf("%d\n",ans);
                break;

            }
        }
    }
    return 0;
}
