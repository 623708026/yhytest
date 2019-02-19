/*************************************************************************
	> File Name: EP08.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 16时19分49秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<string.h>
#include"8.h"
int main(){
    int64_t p = 1, zero = 0, ans = 0;
    for(int64_t i = 0; i < strlen(num); i++) {
        if (num[i] == '0') {
            zero++;
        } else {
            p *= (num[i] - '0');
        }
        if (i >= 13) {
            if (num[i - 13] == '0') {
                zero--;
            }else{
                p /= (num[i - 13] - '0');
            }if(zero == 0 && p > ans) ans = p;
        }
    }
    printf("%"PRId64"\n",ans);
    return 0;
}
