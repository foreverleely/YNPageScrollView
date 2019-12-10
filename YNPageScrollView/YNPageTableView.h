//
//  YNPageTableView.h
//  
//
//  Created by liyangly on 12/10/19.
//  Copyright © 2019 liyang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YNPageTableView;

@protocol YNPageTableViewGestureDelegate <NSObject>

@optional

- (BOOL)pageTableView:(YNPageTableView *)tableView gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;

- (BOOL)pageTableView:(YNPageTableView *)tableView gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;

@end

@interface YNPageTableView : UITableView<UIGestureRecognizerDelegate>

@property (nonatomic, weak) id<YNPageTableViewGestureDelegate> gestureDelegate;

@end

NS_ASSUME_NONNULL_END
