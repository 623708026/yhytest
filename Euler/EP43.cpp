/*************************************************************************
	> File Name: EP43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年01月15日 星期二 19时55分04秒
 ************************************************************************/

#include<stdio.h>
#include<algorithm>
#include<inttypes.h>
using namespace std;

int64_t IsInteresting(int64_t *a) {
    if (a[0] == 0) return 0;
    int64_t p[7] = {2, 3, 5, 7, 11, 13, 17}, j = 0;
    int64_t num = a[0], ret = a[0];
    for (int i = 1; i < 10; i++) {
        ret = ret * 10 + a[i];
        num = num * 10 + a[i];
        if (i < 3) continue;
        num -= 1000 * a[i - 3];
        if (num % p[j++]) return 0;
    }
    return ret;
}

int main() {
    int64_t a[10] = {0};
    for (int64_t i = 0; i < 10; i++) {
        a[i] = i;
    }
    int64_t sum = 0, temp;
    do {
        sum += IsInteresting(a);
    } while(next_permutation(a, a + 10));
    printf("%"PRId64"\n", sum);
    return 0;
}

