//
//  main.c
//  去重&排序-C
//
//  Created by FD on 2018/1/25.
//  Copyright © 2018年 FD. All rights reserved.
//  问题：对输入的数进行去重排序
//  思想：先去重然后排序或者先排序然后去重，使用桶排序或者冒泡或者快速排序都是可以的

#include <stdio.h>
int n = 5;
int a[10];
//快速排序

void quickSort(int left,int right){
    int i , j , t, tmp;
    i = left;
    j = right;
    if (left > right) {
        return;
    }
    tmp = a[left];
    while (i != j) {
        while (tmp <= a[j] && i < j) {
            j--;
        }
        while (tmp >= a[i] && i < j) {
            i++;
        }
        if (i < j) {
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
    }
    a[left] = a[i];
    a[i] = tmp;
    quickSort(left, i - 1);
    quickSort(i+1, right);
}

int main(int argc, const char * argv[]) {
    printf("输入五个需要排序的数:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    quickSort(0, n-1);
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i-1]) {
            printf("%d ",a[i-1]);
            if (i == n-1) {
                printf("%d ",a[i]);
            }
        }
    }
    
    //桶排序,假设需要排序的数字最大为100
//    int s[101] = {0};
//    for (int i = 0; i < n; i++) {
//        s[a[i]]++;
//    }
//    for (int i = 0; i < 101 ; i++) {
//        if (s[i] > 0) {
//            printf("%d ",i);
//        }
//    }
//
    //冒泡法
//    for (int i = 0 ; i < n-1; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            if (a[j] > a[j+1]) {
//                int t = a[j];
//                a[j] = a[j+1];
//                a[j+1] = t;
//            }
//        }
//    }
//    for (int i = 1; i < n ; i++) {
//        if (a[i] != a[i-1]) {
//            printf("%d ",a[i-1]);
//            if (i == n -1) {
//                printf("%d ",a[i]);
//            }
//        }
//
//    }
    
    
    
    
    return 0;
}
