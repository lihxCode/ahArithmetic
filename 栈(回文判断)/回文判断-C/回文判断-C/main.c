//
//  main.c
//  回文判断-C
//
//  Created by FD on 2018/1/25.
//  Copyright © 2018年 FD. All rights reserved.
//  问题：判断字符串是否为回文
//  思想：判断这种回文主要使用栈，中间分开，然后把左半部分入栈，在出栈时与右半部分比较，判断是否相等，相等则为回文，否则不是回文

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char a[100], s[100];
    gets(a);
    int mid,next = 0,len;
    len = strlen(a);
    mid = len/2 - 1;
    int stop = 0;
    for (int i = 0; i <= mid; i++) {
        s[i] = a[i];
        stop = i;
    }
    if (len % 2 == 0) {
        next = mid+1;
    }
    if (len %2 != 0) {
        next = mid+2;
    }
    for (int i = next; i < len; i++) {
        if (a[i] != s[stop]) {
            break;
        }
        stop--;
    }
    if (stop == -1) {
        printf("该字符串是回文");
    }else{
        printf("该字符串不是回文");
    }
    return 0;
}
