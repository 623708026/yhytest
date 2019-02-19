/*************************************************************************
	> File Name: EP06.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 19时05分04秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>



int main() {
    int n = 100,ans = 0;
    n = (2 * pow(n, 3) + 3 * pow(n, 2) + n) / 6;
    ans = pow(5050, 2) - n;
    printf("%d\n", ans);
    return 0;
}

