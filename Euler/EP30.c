/*************************************************************************
	> File Name: EP30.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月17日 星期六 19时56分17秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2540160
int judge(int x){
    int sum = x * x * x * x * x; 
    return sum;
}

int is_valid(int x){
    int sum=0,temp =x;
    while(x){
      sum += judge(x%10);
        x/=10;
       
    
    }
    return temp==sum;
}
int main(){
    int sum=0;
    for(int i=3;i<+MAX_N;i++){
        if(!is_valid(i))continue;
        printf("%d\n",i);
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
