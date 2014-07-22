//
//  YJLADControl.h
//  testYJLUIKit
//
//  Created by 流云_陌陌 on 14-7-20.
//  Copyright (c) 2014年 钟园园. All rights reserved.
//

#import "YJLFlagView.h"
@protocol YJLADControlDelegate;
@interface YJLADControl : YJLFlagView
@property(nonatomic,assign)NSUInteger itemCount;
@property(nonatomic,assign)YJLDirection scrollDirection;
@property(nonatomic,assign)BOOL autoScroll;
@property(nonatomic,assign)int currentIndex;
@property(nonatomic,assign)NSTimeInterval showTime;
@property(nonatomic,assign)NSTimeInterval transitionTime;
@property(nonatomic,assign)id<YJLADControlDelegate> delegate;
@end

@protocol YJLADControlDelegate <NSObject>
@optional
-(void)ADControl:(YJLADControl*)control willShowView:(YJLFlagView *)view atIndex:(int)index;
-(void)ADControl:(YJLADControl*)control showView:(YJLFlagView *)view atIndex:(int)index;
@end