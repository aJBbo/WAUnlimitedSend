//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@protocol WAPercentDrivenInteractiveTransitioning <UIViewControllerInteractiveTransitioning>
@property(copy, nonatomic) CDUnknownBlockType updateHandler;
@property(nonatomic) double completionSpeed;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double duration;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
@end

