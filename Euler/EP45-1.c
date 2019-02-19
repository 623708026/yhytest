/*************************************************************************
	> File Name: EP45-1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月22日 星期六 11时18分17秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

typedef int64_t int1;

int1 triangle(int1 n) {
    return n * (n + 1) / 2;
}

int1 pentagonal(int1 n) {
    return n * (3 * n - 1) / 2;
}

int1 hexagonal(int1 n) {
    return n * (2 * n - 1);
}

int1 binarry_search(int1 (*num)(int1), int1 n, int1 x) {
    int1 head = 0, tail = n - 1, mid;
    while(head <= tail) {
        mid = (head + tail) >> 1;
        if (num(mid) == x) return mid;
        if (num(mid) < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

int main() {
    int1 n = 144;
    while (binarry_search(pentagonal, 2 * n, hexagonal(n)) == -1) n++;
    printf("%"PRId64"\n", hexagonal(n));

    return 0;
}
