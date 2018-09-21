//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WACallOverlayUserView;

__attribute__((visibility("hidden")))
@interface WACallOverlayCallView : UIView
{
    _Bool _largePreviewView;
    WACallOverlayUserView *_peerView;
    WACallOverlayUserView *_selfView;
    long long _callViewLayout;
}

+ (struct CGRect)finalVideoSubviewFrameForParentSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
@property(nonatomic) _Bool largePreviewView; // @synthesize largePreviewView=_largePreviewView;
@property(nonatomic) long long callViewLayout; // @synthesize callViewLayout=_callViewLayout;
@property(readonly, nonatomic) WACallOverlayUserView *selfView; // @synthesize selfView=_selfView;
@property(readonly, nonatomic) WACallOverlayUserView *peerView; // @synthesize peerView=_peerView;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setCallViewLayout:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)desiredSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

