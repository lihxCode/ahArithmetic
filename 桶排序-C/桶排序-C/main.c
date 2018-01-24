//
//  main.c
//  桶排序-C
//
//  Created by admin on 2018/1/24.
//  Copyright © 2018年 lihx. All rights reserved.

//问题：对一堆数进行从小到大排序
//简单桶排序思想：初始化一个数组，数组的每个值都为0，遍历所有的数，然后当数组的下标和数的值相同时，该下标的值+1；最后遍历数组，值为0不输出，大于0则输出该下标，值为多少个就输出多少次。

#include <stdio.h>
void arithmetic(){
    int sourceArr[10] = {10,20,10,10,20,40,1,15,100,50};
    int targetArr[101] = {0};
    int s_Size = sizeof(sourceArr) / sizeof(sourceArr[0]);
    int t_Size = sizeof(targetArr) / sizeof(targetArr[0]);
    for (int i = 0; i < s_Size; i++) {
        int value = sourceArr[i];
        targetArr[value]++;
    }
    for (int i = 0; i < t_Size; i++) {
        int value = targetArr[i];
        if (value > 0) {
            for (int j = 0; j < value; j++) {
                printf("%d \n",i);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    arithmetic();
    return 0;
}
