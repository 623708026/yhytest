/*************************************************************************
	> File Name: function.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月05日 星期六 16时17分41秒
 ************************************************************************/

#include<stdio.h>
#define P(func) {\
     printf("%s = %d\n", #func, func);\           
}
int is_prime(int x);
int max_int (int n, ...);

int main() {
    for (int i = 2; i <= 100; i++) {
        if(is_prime(i)) {
            printf("%d\n", i);
        }
    }


    P(max_int(3, 1, 2, 5));
    P(max_int(4, 1, 2, 4, 8));
    return 0;
}
