//
//  ViewController.m
//  桶排序-OC
//
//  Created by admin on 2018/1/24.
//  Copyright © 2018年 lihx. All rights reserved.
//
//问题：对一堆数进行从小到大排序
//简单桶排序思想：初始化一个数组，数组的每个值都为0，遍历所有的数，然后当数组的下标和数的值相同时，该下标的值+1；最后遍历数组，值为0不输出，大于0则输出该下标，值为多少个就输出多少次。

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self arithmetic];
}

- (void)arithmetic{
    NSArray *sourceArr = @[@10,@20,@30,@1,@10,@20,@50,@100,@30];
    NSMutableArray *targetArr = [[NSMutableArray alloc] init];
    for (NSUInteger i = 0; i < 101; i++) {
        [targetArr addObject:@0];
    }
    for (NSUInteger i = 0; i < sourceArr.count; i++) {
        NSInteger sValue = [sourceArr[i] integerValue];
        NSInteger tValue = [targetArr[sValue] integerValue];
        tValue++;
        targetArr[sValue] = [NSString stringWithFormat:@"%ld",(long)tValue];
    }
    for (NSInteger i = 0; i < targetArr.count; i++) {
        NSInteger value = [targetArr[i] integerValue];
        if (value > 0) {
            for (NSInteger j = 0; j < value; j++) {
                NSLog(@"%ld",(long)i);
            }
        }
    }
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
