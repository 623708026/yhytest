/*************************************************************************
	> File Name: lx2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 14时39分56秒
 ************************************************************************/

#include<stdio.h>
#define max 10000
int prime[max+5]={0};
void init(){
    for(int i=2;i*i<max;i++){
        if(prime[i])continue;
        for(int j=i;j<=max;j+=i)
        prime[j]=i;
    }
    return ;
}
int main(){
    int n;
    init();
    while(~scanf("%d",&n)){
        printf("%d(%d)\n",n,prime[n]);

    }
    return 0;
}
