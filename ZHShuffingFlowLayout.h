//
//  ZHShuffingFlowLayout.h
//  Finance
//
//  Created by 杨洋洋 on 2018/5/4.
//  Copyright © 2018年 知合金服. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZHShuffingFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, assign) CGFloat itemWidth; /**< Item 的宽度 */
@property (nonatomic, assign) CGFloat itemHeight; /**< Item 的高度 */
@property (nonatomic, assign) CGFloat maxWidth; /**< 缩放最大宽度 */
@property (nonatomic, assign) CGFloat maxHeight; /**< 缩放最大高度 */
@property (nonatomic, assign) CGFloat spacing;  /**< 间距 */

@end
