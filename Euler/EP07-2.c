/*************************************************************************
	> File Name: EP07-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 10时27分09秒
 ************************************************************************/

#include<stdio.h>

#define max 200000
int prime[max+5]={0};

void init(){
    for(int i=2;i*i<=max;i++){
        if(prime[i])continue;
        for(int j = i*i;j<=max;j+=i){
            prime[j]=1;
        }
    }
    for(int i=2;i<=max;i++){
        if(prime[i])continue;
        prime[++prime[0]]=i;//***//
       // prime[0]+=1;
       // prime[prime[0]]=i;
    }
    return ;
}
int main(){
    init();
    printf("%d\n",prime[0]);


    return 0;
}
