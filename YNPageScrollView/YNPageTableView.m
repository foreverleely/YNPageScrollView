//
//  YNPageTableView.m
//  
//
//  Created by liyangly on 12/10/19.
//  Copyright © 2019 liyang. All rights reserved.
//

#import "YNPageTableView.h"

@implementation YNPageTableView

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer {
    if ([self.gestureDelegate respondsToSelector:@selector(pageTableView:gestureRecognizerShouldBegin:)]) {
        return [self.gestureDelegate pageTableView:self gestureRecognizerShouldBegin:gestureRecognizer];
    }
    
    return YES;
}

// 允许多个手势
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if ([self.gestureDelegate respondsToSelector:@selector(pageTableView:gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:)]) {
        return [self.gestureDelegate pageTableView:self gestureRecognizer:gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:otherGestureRecognizer];
    }
    
    return [gestureRecognizer.view isKindOfClass:[UIScrollView class]] && [otherGestureRecognizer.view isKindOfClass:[UIScrollView class]];
}

@end
