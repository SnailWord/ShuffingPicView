# ZHShuffingPicView

根据项目需要做的一个轮播图，实现出现放大效果。没有太多封装，但可简单调用。

调用方式

self.shuffingPicView = [ZHShuffingPicView shuffingPicViewWithFrame:CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width, 183) dataSource:resultArr];
self.shuffingPicView.time = 2;
self.shuffingPicView.imageArr = resultArr;
self.shuffingPicView.delegate = self;
self.tableView.tableHeaderView = _shuffingPicView;

如需获取轮播图的点击事件，请遵守代理实现方法：
- (void)shuffingPicView:(ZHShuffingPicView *)shuffingPicView didSelectedAtIndex:(NSInteger)index;

有意见请提出，会及时更改。


@gitname  :  programKnight



