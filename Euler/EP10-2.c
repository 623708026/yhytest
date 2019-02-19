/*************************************************************************
	> File Name: EP10-2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 11时37分24秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define max 2000000
int prime[max+5]={0};
void init(){
    for(int i=2;i*i<=max;i+=1){
        if(prime[i])continue;
        for(int j=i*i;j<=max;j+=i){
            prime[j]=1;
        }
    }
    for(int i=2;i<max;i++){
        if(prime[i])continue;
        prime[++prime[0]]=i;
    }
    return ;
}

int main(){
    init();
    int64_t sum=0;
    for(int i=1;i<=prime[0];i++){
        sum+=prime[i];
    }
    printf("%s\n",PRId64);
    printf("%"PRId64"\n",sum);
    return 0;
}
