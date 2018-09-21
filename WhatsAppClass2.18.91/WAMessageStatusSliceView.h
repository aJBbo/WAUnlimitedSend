//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class NSOperationQueue, UIImageView, WAMessageStatusSlice;

__attribute__((visibility("hidden")))
@interface WAMessageStatusSliceView : WAMessageContainerSliceView
{
    long long _statusAnimationCount;
    long long _starAnimationCount;
    NSOperationQueue *_animationQueue;
    _Bool _lastStarred;
    unsigned long long _lastStatus;
    unsigned long long _animationID;
    UIImageView *_fromStatusView;
    UIImageView *_toStatusView;
    UIImageView *_starView;
    long long _index;
}

+ (_Bool)supportsPreviewing;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)createStarImage;
- (id)starImage;
- (id)createStatusImage:(unsigned long long)arg1;
- (id)statusImageForStatus:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)animateToStarredState:(_Bool)arg1;
- (void)animateFromStatus:(unsigned long long)arg1 toStatus:(unsigned long long)arg2;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageStatusSlice *slice; // @dynamic slice;

@end
