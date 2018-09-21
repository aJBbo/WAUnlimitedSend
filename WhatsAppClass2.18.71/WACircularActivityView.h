//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAShapeView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface WACircularActivityView : WAShapeView
{
    _Bool _animating;
    _Bool _hidesWhenStopped;
    UIColor *_color;
}

@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (_Bool)isAnimating;
@property(nonatomic) double barWidth;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)updateVisibility;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

