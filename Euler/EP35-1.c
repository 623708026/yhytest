/*************************************************************************
	> File Name: EP35-1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 15时37分47秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
 
#define max 1000000
 
int prime[max + 5] = {0};//存放线性筛结果；
int isprime[max + 5] = {0};//素数为0，合数为1，circle函数容易进行判断；
 
void Prime(){
	for(int i = 2; i <= max; i++){
		if(!prime[i]) prime[++prime[0]] = i;
		for(int j = 1; j <= prime[0]; j++){
			if(i * prime[j] > max) break;
			prime[i * prime[j]] = 1;
			isprime[i * prime[j]] = 1;//合数置1；
			if(i % prime[j] == 0) break;
		}
	}
}
 
int circle(int x){
	if(isprime[x] != 0) return 0;//如果本数本来就不是素数，就不用进行循环判断了；
	int dh = pow(10,floor(log10(x)));
	for(int i = 0; i < floor(log10(x)) + 1; i++){
		x = x / 10 + (x % 10) * dh;
		if(isprime[x] != 0) return 0;
	}
	return 1;
} 
 
int main(){
	Prime();
	int count = 0;
    printf("%d\n", isprime[4]);
	for(int i = 1; i <= prime[0]; i++){
		if(prime[i] > max) break;
		if(circle(prime[i])) count++;//prime[i]中存放第i个素数；
	}
	printf("%d\n",count);
 
	return 0;
}

