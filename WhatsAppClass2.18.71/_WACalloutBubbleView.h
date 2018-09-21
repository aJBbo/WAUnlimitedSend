//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WAShapeView;

__attribute__((visibility("hidden")))
@interface _WACalloutBubbleView : UIView
{
    UIView *_shadowCastingView;
    UIView *_effectView;
    WAShapeView *_maskView;
    struct CGSize _lastUpdateSize;
    _Bool _needsUpdateMask;
    _Bool _pointsDown;
}

@property(nonatomic) _Bool pointsDown; // @synthesize pointsDown=_pointsDown;
- (void).cxx_destruct;
- (id)calloutShapeInRect:(struct CGRect)arg1 pointingDown:(_Bool)arg2;
- (void)updateMaskIfNeeded;
- (void)setNeedsUpdateMask;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

