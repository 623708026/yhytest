/*************************************************************************
	> File Name: xxs.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 15时23分50秒
 ************************************************************************/

#include<stdio.h>
#define max 1000000
int prime[max + 5] = {0};
void init() {
    for (int i = 2; i <= max; i++){
        if(!prime[i]) prime[++prime[0]]=i;
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if(i % prime[j] == 0) break;

        }
    }
    return ;
}
int main(){
    init();
    printf("%d\n",prime[10001]);

    return 0;
}
