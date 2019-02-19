/*************************************************************************
	> File Name: di2zhang.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 10时12分06秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>


int main() {
    printf("23 & 17 = %d\n", 23 & 17);
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a = %d | b = %d\n", a, b);
    a ^= b, b ^= a, a^= b;
    printf("a = %d | b = %d\n", a, b);
    double x;
    scanf("%lf", &x);
    printf("%lf\n", pow(x, 1.0 / 3.0));
    printf("%lf", log (8) / log (2));
    return 0;
}
