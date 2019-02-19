/*************************************************************************
	> File Name: qsort.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月15日 星期六 18时43分59秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
    return(*(int*)a) - (*(int *)b);
}

int main(){
    int a[1000] = {0};
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n,sizeof(int), cmp);
    for (int i = 0; i < n; i++){
        printf("%d", a[i]);
    }
    return 0;
}
