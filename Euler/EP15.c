/*************************************************************************
	> File Name: EP15.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 18时09分22秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int main() {
    int64_t sum = 1;
    int64_t m = 20;
    for (int64_t i = 40; i >= 21; i--){
        sum *= i;
        while(sum % m == 0 && m != 1){
            sum /= m;
            m--;
        }
    }
    printf("%"PRId64"\n", sum);
    return 0;
}
