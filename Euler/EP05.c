/*************************************************************************
	> File Name: EP05.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月24日 星期六 09时47分55秒
 ************************************************************************/

#include<stdio.h>
int gcd(int a,int b){
    if (!b) return a;
    return gcd(b, a % b);
}
int main(){
    int ans = 1;
    for(int i = 1; i <= 20; i++){
        if(ans % i == 0) continue;
        ans = i * ans / gcd(ans, i);
    }
    printf("%d\n",ans);



    return 0;
}
