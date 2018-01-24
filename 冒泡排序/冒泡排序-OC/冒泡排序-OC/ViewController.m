//
//  ViewController.m
//  冒泡排序-OC
//
//  Created by admin on 2018/1/24.
//  Copyright © 2018年 lihx. All rights reserved.

//  问题：对一堆数进行从大到小排序：10，23，3，5，100，20，7，42
//  冒泡排序思想：每次比较相邻的两个元素，如果顺序错误则把它们都调换过来

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSArray *arr = @[@10,@23,@3,@5,@100,@20,@7,@42];
    NSMutableArray *sourceArr = [NSMutableArray arrayWithArray:arr];
    for (NSInteger i = 0; i < sourceArr.count-1; i++) {
        for (NSInteger j = 0; j < sourceArr.count - i -1; j++) {
            NSInteger value1 = [sourceArr[j] integerValue];
            NSInteger value2 = [sourceArr[j+1] integerValue];
            if (value1 < value2) {
                [sourceArr exchangeObjectAtIndex:j withObjectAtIndex:j+1];
            }
        }
        
    }
    for (int i = 0; i < sourceArr.count; i++) {
        NSLog(@"%ld",(long)[sourceArr[i] integerValue]);
    }
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
