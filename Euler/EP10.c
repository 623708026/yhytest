/*************************************************************************
	> File Name: EP10.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 11时21分18秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int prime(int x){
    for(int i=2;i*i<x;i++){
        if(x%i==0)return 0;
        
    }
    return 1;
}
int main(){
    int64_t sum=0;
    for(int i=2;i<2000000;i++){
        if(!prime)continue;
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("%"PRId64"\n",sum);
    
     return 0;
}
