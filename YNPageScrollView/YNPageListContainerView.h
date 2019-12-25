

#import <UIKit/UIKit.h>
#import "YNPageTableView.h"
#import "YNPageListContainerCollectionView.h"


NS_ASSUME_NONNULL_BEGIN

@class YNPageListContainerView;

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
