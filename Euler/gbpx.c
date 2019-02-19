/*************************************************************************
	> File Name: gbpx.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月15日 星期六 14时40分38秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
#define swap(a,b){\
    __typeof(a) __temp = a;\
    a = b; b = __temp;\
}

void merge_sort(int *num,int l, int r){
    if(r - l <= 1)  {
        if(r - l == 1 && num[l] >num[r]){
            swap(num[l],num[r]);
        }
        return;
    }
    int mid = (l + r) >> 1;
    merge_sort(num, l ,mid);
    merge_sort(num, mid + 1, r);
    int *temp = (int *)malloc(sizeof(int) * (r - l + 1));
    int p1 = l,p2 = mid + 1, k = 0;
    while (p1 <= mid || p2 <= r){
        if(p2 > r || (p1 <= mid && num[p1] <= num[p2])){
            temp[k++] = num[p1++];
        }else{
            temp[k++] = num[p2++]; 
        }
    }
    memcpy(num + l, temp, sizeof(int) * (r - l + 1));
    free(temp);
    return;
}
void output(int *a,int n){
    printf("[");
    printf("%d ",a[0]);
    for( int i = 1; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("]\n");
}

int main(){
    int n;
    while(scanf("%d",&n) != EOF ){
        int a[max + 5] ={0};
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        merge_sort(a, 0, n - 1);
        output(a, n);
    }
    
    return 0;
}
