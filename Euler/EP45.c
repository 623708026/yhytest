/*************************************************************************
	> File Name: EP45.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 11时01分22秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int64_t pentagonal(int64_t(x)) {
    return x * (3 * x - 1) / 2;
}

int64_t hexagonal(int64_t(x)) {
    return x * (2 * x - 1);
}
int64_t is_pentagonal(int64_t(x)) {
    int64_t head = 1, tail = 5000000000, mid;
    while(head <= tail) {
        mid = (head + tail) >> 1;
        if(pentagonal(mid) == x) return 1;
        if(pentagonal(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return 0;
}

int main() {
    int64_t ans;
    for(int i = 144; i < INT64_MAX; i++){
        if(is_pentagonal(hexagonal(i))){
        ans = hexagonal(i);
        break;
        }  
    }
    printf("%"PRId64"\n", ans);
    return 0;
}
