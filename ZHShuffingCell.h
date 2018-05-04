//
//  ZHShuffingCell.h
//  Finance
//
//  Created by 杨洋洋 on 2018/5/4.
//  Copyright © 2018年 知合金服. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ClickedBlock)(void);

@interface ZHShuffingCell : UICollectionViewCell

@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) ClickedBlock clickedBlock;

@end
