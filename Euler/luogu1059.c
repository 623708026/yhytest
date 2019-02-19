/*************************************************************************
	> File Name: luogu1059.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月15日 星期六 19时43分58秒
 ************************************************************************/

#include<stdio.h>

void quick_sort(int *num,int l, int r){
    if(r <= l) return;
    int x = l, y = r, z = num[l];
    while(x < y){
        while(x < y && num[y] >= z) --y;
        if(x < y){
            num[x++] = num[y];
        }
        while(x < y && num[x] <= z) ++x;
        if(x < y){
            num[y--] = num[x];
        }
    }
    num[x] = z;
    quick_sort(num, l, x - 1);
    quick_sort(num, x + 1, r);
    return;

}

int main(){
    int n;
    int i;
    int a[101] = {0};
    scanf("%d",&n);
    int temp[101] = {0};
    int m = n;
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    quick_sort(a, 0, n - 1);
    for(i = 1;i < n; i++) {
        if(a[i] == a[i - 1]){
        temp[i - 1] = 1;
        m--;
       }

    }
     printf("%d\n",m);
    for(i = 0; i < n; i++){

    if(temp[i] == 0)
    printf("%d ",a[i]);
    }

    return 0;
}
