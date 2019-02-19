/*************************************************************************
	> File Name: luogu1177.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月15日 星期六 19时09分56秒
 ************************************************************************/

#include<stdio.h>

void quick_sort(int *num, int l, int r){
    if(r <= l) return;
    int x = l, y = r, z = num[l];
    while(x < y){
        if(x < y && num[y] >= z ) --y;
        if(x < y){
            num[x] = num[y];
            x++;
        }
        if(x < y && num[x] <= z) ++x;
        if(x < y){
            num[y] = num[x];
            y--;
        }

    }
    num[x] = z;
    quick_sort(num, l, x - 1);
    quick_sort(num,x + 1, r);
    return;
}

int main(){
    int n;
    int a[1000001] = {0};
    int i;
    scanf("%d",&n);
    for(i = 0; i < n;i++){
        scanf("%d",&a[i]);
    }
    quick_sort(a, 0, n - 1);
    for(i = 0;i < n; i++){
        if(i < n - 1)
        printf("%d ",a[i]);
        else
        printf("%d\n",a[i]);
    }

    return 0;
}
