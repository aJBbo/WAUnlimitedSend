//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class UIViewController;
@protocol WAImageToImagePanPopGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WAImageToImagePanPopGestureRecognizer : UIPanGestureRecognizer
{
    UIViewController *_parentViewController;
    long long _transitionState;
}

- (void).cxx_destruct;
- (void)gestureRecognizerDidFinish;
- (void)gestureRecognizerDidChange:(id)arg1 inViewController:(id)arg2;
- (void)gestureRecognizerDidBegan:(id)arg1 inViewController:(id)arg2;
- (void)handleGestureRecognizer:(id)arg1;
- (id)initWithParentViewController:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WAImageToImagePanPopGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

