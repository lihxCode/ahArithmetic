//
//  main.c
//  冒泡排序-C
//
//  Created by admin on 2018/1/24.
//  Copyright © 2018年 lihx. All rights reserved.

//  问题：对一堆数进行从大到小排序：10，23，3，5，100，20，7，42
//  冒泡排序思想：每次比较相邻的两个元素，如果顺序错误则把它们都调换过来

#include <stdio.h>
void arithmetic(){
    int sourceArr[] = {10,23,3,5,100,20,7,42};
    int s_size = sizeof(sourceArr)/ sizeof(sourceArr[0]);
    for (int i = 0; i < s_size-1; i++) {//外层循环表示要比较多少次
        for (int j = 0; j < s_size-i-1; j++) {//内部循环表示确定每个数的位置，一次确定一个数的位置,这里需要-1防止越界
            if (sourceArr[j] < sourceArr[j+1]) {
                int tmp = sourceArr[j];
                sourceArr[j] = sourceArr[j+1];
                sourceArr[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < s_size; i++) {
        printf("%d ",sourceArr[i]);
    }
}

int main(int argc, const char * argv[]) {
    arithmetic();
    return 0;
}
