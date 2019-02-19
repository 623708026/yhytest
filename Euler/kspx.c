/*************************************************************************
	> File Name: kspx.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月15日 星期六 16时04分58秒
 ************************************************************************/

#include<stdio.h>
#define max 100

void quick_sort(int *num, int l,int r){
    if(r <= l) return;
    int x = l, y = r, z = num[l];
    while (x < y){
        while (x < y && num[y] >= z) --y;
        if (x < y) num[x++] = num[y];
        while(x < y && num[x] <= z) ++x;
        if (x < y) num[y--] = num[x];
    }
    num[x] = z;
    quick_sort(num, l,x - 1);
    quick_sort(num,x + 1, r);
    return;
}

void output(int *a,int n){
    printf("quick_sort:[");
    for(int i = 0;i < n; i++){
        printf("%d ",a[i]);
    }
    printf("]\n");
}

int main(){
    int n;
    while (scanf("%d",&n) != EOF){
        int a[max + 5] = {0};
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
            quick_sort(a,0,n - 1);
            output(a,n);
        
    }

    return 0;
}
