/*************************************************************************
	> File Name: EP40.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月12日 星期六 17时06分44秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>


int main() {
    int i, j;
    int sum = 9, n = 1;
    int nextNum = 10;
    int num = 9;
    int k = 1;
    int mul = 1;
    while (k <= 1000000) {
        if (sum >= k) {
            i = sum - k;
            j = i % n;
            printf("%d\n",j);
            i = nextNum - i / n - 1;
            while (j) {
                j--;
                i /= 10;
            }
            mul *= i % 10;
            k *= 10;
        } else {
            nextNum *= 10;
            num *= 10;
            n++;
            sum += n * num;
        }
    }
    printf("%d\n", mul);
    return 0;
}
