//
//  QMLStatusImageView.h
//  testYJLUIKit
//
//  Created by user on 14-10-5.
//  Copyright (c) 2014年 钟园园. All rights reserved.
//

#import "YJLImageView.h"

@interface QMLStatusImageView : YJLImageView
@property(nonatomic,retain)UIImage *defaultImg;
@property(nonatomic,retain)UIImage *selectImg;
@property(nonatomic,assign)BOOL    selected;
@end
