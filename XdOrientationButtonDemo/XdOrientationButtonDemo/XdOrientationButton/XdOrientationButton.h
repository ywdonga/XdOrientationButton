//
//  XdOrientationButton.h
//  XdButton
//
//  Created by Xd on 2018/6/1.
//  Copyright © 2018年 Xd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, XdOrientationStyle) {
    XdOrientationStyleImageLeft,
    XdOrientationStyleImageRight,
    XdOrientationStyleImageTop,
    XdOrientationStyleImageBottom
};

IB_DESIGNABLE
@interface XdOrientationButton : UIButton

#if TARGET_INTERFACE_BUILDER
@property (nonatomic) IBInspectable NSUInteger edgeInsetsStyle;
#else
@property (nonatomic) XdOrientationStyle edgeInsetsStyle;
#endif
@property (nonatomic) IBInspectable CGFloat imageTitleSpace;

@end

@interface UIButton (EdgeInsets)

- (void)layoutButtonWithEdgeInsetsStyle:(XdOrientationStyle)style imageTitlespace:(CGFloat)space;

@end
