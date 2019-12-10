//
//  YNPageListContainerView.h
//  
//
//  Created by liyangly on 12/10/19.
//  Copyright © 2019 liyang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YNPageTableView, YNPageListContainerView, YNPageListContainerCollectionView;

@protocol YNPageListContainerCollectionViewGestureDelegate <NSObject>

- (BOOL)pageListContainerCollectionView:(YNPageListContainerCollectionView *)collectionView gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;
- (BOOL)pageListContainerCollectionView:(YNPageListContainerCollectionView *)collectionView gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;

@end

@interface YNPageListContainerCollectionView : UICollectionView<UIGestureRecognizerDelegate>

@property (nonatomic, assign) BOOL isNestEnabled;
@property (nonatomic, weak) id<YNPageListContainerCollectionViewGestureDelegate> gestureDelegate;

@end

@protocol YNPageListContainerViewDelegate <NSObject>

- (NSInteger)numberOfRowsInListContainerView:(YNPageListContainerView *)listContainerView;

- (UIView *)listContainerView:(YNPageListContainerView *)listContainerView listViewInRow:(NSInteger)row;

@end

@interface YNPageListContainerView : UIView

@property (nonatomic, strong, readonly) YNPageListContainerCollectionView  *collectionView;

@property (nonatomic, weak) id<YNPageListContainerViewDelegate> delegate;

@property (nonatomic, weak) YNPageTableView *mainTableView;

- (instancetype)initWithDelegate:(id<YNPageListContainerViewDelegate>)delegate NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

- (void)reloadData;

@end

NS_ASSUME_NONNULL_END
