/*************************************************************************
	> File Name: define.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月09日 星期三 20时47分10秒
 ************************************************************************/

#include<stdio.h>
#define DEBUG
#ifdef DEBUG
#define P(a) {\
    printf("%s : %d\n",#a, a);\
}
#else
#define P(a) {}
#endif

#define swap(a, b) {\
    __typeof(a) __temp = a\
    a = b; b = __temp;\
}
#define MAX(a, b) ({\
    __typeof(a) __a = a;\
    __typeof(b) __b = b;\
    (__a) > (__b) ? (__a) : (__b);\
})
#define LINK(a, b) a##b


int main() {
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    int a = 7;
    P(MAX(a++, 6));
    P(a);
    int helloworld= 18;
    P(LINK(hello, world));
    return 0;
}
