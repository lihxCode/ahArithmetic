//
//  main.c
//  队列(解密QQ号)-C
//
//  Created by FD on 2018/1/25.
//  Copyright © 2018年 FD. All rights reserved.
//  问题：解密qq号，删除第一位，把第二位放到最后面，删除第三位，把第四位放最后面，如此类推，直到只剩一个数字，把这个数字也删除，最后把所有的结果都连在一起就是最终结果
//  思想：使用队列的思想，删除队头元素和添加元素到队尾，直到队列为空

#include <stdio.h>
struct queue {
    int data[100];
    int head;
    int tail;
};

int main(int argc, const char * argv[]) {
    struct queue q = {{6,3,1,7,5,8,9,2,4},0,9};
    while (q.head < q.tail) {
        printf("%d ",q.data[q.head]);
        q.head++;
        q.data[q.tail] = q.data[q.head];
        q.tail++;
        q.head++;
    }
    return 0;
}
