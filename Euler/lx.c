/*************************************************************************
	> File Name: lx.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 14时16分38秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define max 10000
int prime[max+5]={0};
void init(){
    for(int i=2;i*i<=max;i++){
        if(!prime[i])
        for(int j=i;j<=max;j+=i){
            if(!prime[j])
            prime[j]=i;
        }
    }
    return ;
}
int main(){
    int n;
    init();
    while(scanf("%d",&n)!=EOF){
        printf("%d(%d)\n",n,prime[n]);
    }
    return 0;
}
