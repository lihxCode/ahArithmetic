//
//  ViewController.m
//  快速排序-OC
//
//  Created by admin on 2018/1/24.
//  Copyright © 2018年 lihx. All rights reserved.

//  问题：对一堆数进行排序
//  快速排序思想：用一个数作为基准值，从右到左遍历找到右边比它小的，从左到右遍历找到左边比它大的，然后将两个数交互，然后继续查找继续交换直到两个游标都指向同一个数的，这个时候将基准值与这个数进行交换。然后把基准值的左边和右边分开再进行类似的操作，主要思想就是二分思想和递归思想

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, strong) NSMutableArray *resultArr;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSArray *arr = @[@10,@1,@4,@2,@5,@8,@6,@3,@3];
    NSInteger n = arr.count;
    self.resultArr = [NSMutableArray arrayWithArray:arr];
    [self quickSort:0 right:n-1];
    for (NSString *value in self.resultArr) {
        NSLog(@"%@",value);
    }
}

- (void)quickSort:(NSInteger)left right:(NSInteger)right{
    NSInteger i,j,tmp;
    i = left;
    j = right;
    if (left > right) {
        return;
    }
    tmp = [self.resultArr[left] integerValue];
    while (i != j) {
        while (tmp <= [self.resultArr[j] integerValue] && i < j) {//从右到左遍历，找到比基准值tmp小的,判断条件为当比基准值大则-1，直到找到比基准值小的用于交换
            j--;
        }
        while (tmp >= [self.resultArr[i] integerValue] && i < j) {//从右到左遍历，找到比基准值tmp大的，判断条件为当比基准值小则+1，直到找到比基准值大的用于交换
            i++;
        }
        if (i < j) {
            [self.resultArr exchangeObjectAtIndex:j withObjectAtIndex:i];//当找到比基准值小的和比基准值大的时候将这两个数交换
        }
    }
    [self.resultArr exchangeObjectAtIndex:left withObjectAtIndex:i];//i=j,将基准值和i调换
    [self quickSort:left right:i-1];
    [self quickSort:i+1 right:right];
}


@end
