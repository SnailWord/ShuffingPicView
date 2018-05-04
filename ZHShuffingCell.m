//
//  ZHShuffingCell.m
//  Finance
//
//  Created by 杨洋洋 on 2018/5/4.
//  Copyright © 2018年 知合金服. All rights reserved.
//

#import "ZHShuffingCell.h"

@interface ZHShuffingCell ()

@property (nonatomic, weak) UIImageView *imageView; /**< 图片 */
@property (nonatomic, weak) UIImageView *newsTitleBackgroundImageView; /**< 新闻标题背景图片 */
@property (nonatomic, weak) UILabel *newsTitleLabel; /**< 新闻标题 */

@end

@implementation ZHShuffingCell

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        [self setupUI];
    }
    return self;
}

- (void)setupUI {
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:self.bounds];
    imageView.userInteractionEnabled = YES;
    imageView.contentMode = UIViewContentModeScaleAspectFill;
    imageView.clipsToBounds = YES;
    [self.contentView addSubview:imageView];
    self.imageView = imageView;
    imageView.layer.masksToBounds = YES;
    imageView.layer.cornerRadius = 4;
}

- (void)setImageName:(NSString *)imageName {
    
    _imageName = imageName;
    [self.imageView sd_setImageWithURL:[NSURL URLWithString:imageName]];
    
}


@end
