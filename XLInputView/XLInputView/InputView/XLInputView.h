//
//  XLInputView.h
//  XLInputView
//
//  Created by Mac-Qke on 2019/1/15.
//  Copyright © 2019 Mac-Qke. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XLInputView : UITextView
/**
 *   textView最大行数
 */
@property (nonatomic, assign) NSUInteger maxNumberOfLines;

/**
 *  文字高度改变block → 文字高度改变会自动调用
 *  block参数(text) → 文字内容
 *  block参数(textHeight) → 文字高度
 */
@property (nonatomic, strong) void (^xl_textHeightChangeBlock)(NSString *text, CGFloat textheight);
/**
 *  设置圆角
 */
@property (nonatomic, assign) NSUInteger cornerRadius;
/**
 *  占位文字
 */
@property (nonatomic, strong) NSString *placeholder;
/**
 *  占位文字颜色
 */
@property (nonatomic, strong) UIColor *placeholderColor;
@end

NS_ASSUME_NONNULL_END
