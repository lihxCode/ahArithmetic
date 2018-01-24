//
//  main.c
//  快速排序-C
//
//  Created by admin on 2018/1/24.
//  Copyright © 2018年 lihx. All rights reserved.
//  问题：对一堆数进行排序
//  快速排序思想：用一个数作为基准值，从右到左遍历找到右边比它小的，从左到右遍历找到左边比它大的，然后将两个数交互，然后继续查找继续交换直到两个游标都指向同一个数的，这个时候将基准值与这个数进行交换。然后把基准值的左边和右边分开再进行类似的操作，主要思想就是二分思想和递归思想

#include <stdio.h>
int a[10],n;
void quickSort(int left,int right){
    int i,j,t,tmp;
    if (left > right) {
        return;
    }
    i = left;
    j = right;
    tmp = a[left];
    while (i != j) {
        while (a[j] >= tmp && i < j) {
            j--;
        }
        while (a[i] <= tmp && i < j) {
            i++;
        }
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = tmp;
    quickSort(left, i-1);
    quickSort(i+1, right);
}

int main(int argc, const char * argv[]) {
    n = 10;
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    quickSort(0, n-1);
    for (int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
