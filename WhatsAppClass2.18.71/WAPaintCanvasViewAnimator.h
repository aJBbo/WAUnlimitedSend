//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WAPaintCanvasView, WAPaintCanvasViewAnimatorCurve, WAWeakTimer;

__attribute__((visibility("hidden")))
@interface WAPaintCanvasViewAnimator : NSObject
{
    double _duration;
    double _startTime;
    WAPaintCanvasView *_view;
    WAWeakTimer *_animationTimer;
    NSMutableArray *_animations;
    WAPaintCanvasViewAnimatorCurve *_curve;
    CDUnknownBlockType _completion;
    int _frames;
}

+ (id)currentAnimator;
+ (id)animatorStack;
@property(retain, nonatomic) WAPaintCanvasViewAnimatorCurve *curve; // @synthesize curve=_curve;
- (void).cxx_destruct;
- (void)updateWithFraction:(float)arg1;
- (void)addAnimatableObject:(id)arg1;
- (void)cancelCurrentAnimations;
- (void)updateAnimations:(id)arg1;
- (void)performAnimations:(CDUnknownBlockType)arg1;
- (id)initWithCanvasView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end

