

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@class YNPageListContainerCollectionView;

@protocol YNPageListContainerCollectionViewGestureDelegate <NSObject>

- (BOOL)pageListContainerCollectionView:(YNPageListContainerCollectionView *)collectionView gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;
- (BOOL)pageListContainerCollectionView:(YNPageListContainerCollectionView *)collectionView gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;

@end

@interface YNPageListContainerCollectionView : UICollectionView<UIGestureRecognizerDelegate>

@property (nonatomic, assign) BOOL isNestEnabled;
@property (nonatomic, weak) id<YNPageListContainerCollectionViewGestureDelegate> gestureDelegate;

@end

NS_ASSUME_NONNULL_END
