//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAImageToImagePanPopGestureRecognizer.h"

@class UIViewController;
@protocol WAImageToImagePanGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WAImageToImagePanGestureRecognizer : WAImageToImagePanPopGestureRecognizer
{
    UIViewController *_parentViewController;
    long long _transitionState;
    long long _panGestureType;
    double _lastOffsetYInPanUp;
}

- (void).cxx_destruct;
- (void)gestureRecognizerDidFinish:(id)arg1;
- (void)gestureRecognizerDidChange:(id)arg1 inViewController:(id)arg2;
- (void)gestureRecognizerDidBegan:(id)arg1 inViewController:(id)arg2;
- (void)handleGestureRecognizer:(id)arg1;
- (id)initWithParentViewController:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WAImageToImagePanGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

