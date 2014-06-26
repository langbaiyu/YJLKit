//
//  YJLFlagView.m
//  testYJLUIKit
//
//  Created by 钟园园 on 14-5-30.
//  Copyright (c) 2014年 钟园园. All rights reserved.
//

#import "YJLFlagView.h"

@implementation YJLFlagView
@synthesize flag=_flag;
-(NSString*)flag
{
    if (!_flag) {
        return NSStringFromClass([self class]);
    }
    return _flag;
}
- (void)dealloc
{
    DEALLOC_PRINT;
    [_flag release];
    [super dealloc];
}

@end
