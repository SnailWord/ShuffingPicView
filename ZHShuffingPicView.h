//
//  ZHShuffingPicView.h
//  Finance
//
//  Created by 杨洋洋 on 2018/5/4.
//  Copyright © 2018年 知合金服. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZHShuffingPicView;

@protocol ZHShuffingPicViewDelegate <NSObject>

@optional

- (void)shuffingPicView:(ZHShuffingPicView *)shuffingPicView didSelectedAtIndex:(NSInteger)index;

@end

@interface ZHShuffingPicView : UIView


/**
 创建 BannerView
 */
+ (instancetype)shuffingPicViewWithFrame:(CGRect)frame dataSource:(NSArray *)dataSource;

/**
 定时器开启
 */
- (void)timerStart;

/**
 关闭定时器
 */
- (void)invalidateTimer;

@property (nonatomic, strong) NSArray *dataSource; /**< 数据源 */
@property (nonatomic, assign) NSInteger time; /**< 定时间隔 */
@property (nonatomic, assign) CGFloat widthHeightScale; /**< 宽高的比例 */
@property (nonatomic, assign) CGFloat maxWidth; /**< 放大后的最大宽度 */
@property (nonatomic, assign) CGFloat designHeight; /**< 设计稿真实高度 */
@property (nonatomic, assign) CGFloat designWidth; /**< 设计稿真实宽度 */
@property (nonatomic, weak) id <ZHShuffingPicViewDelegate> delegate;

@property (strong,nonatomic) NSArray    *imageArr;
@end
