//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, UIColor, WACircleView;

__attribute__((visibility("hidden")))
@interface WAInputBarRoundButton : UIButton
{
    WACircleView *_circleView;
    WACircleView *_strokeCircleView;
    NSMutableDictionary *_circleColors;
}

+ (id)button;
- (void).cxx_destruct;
- (void)updateCircleColor;
- (void)setCircleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(retain, nonatomic) UIColor *outerStrokeColor;
- (void)layoutSubviews;
@property(nonatomic) double circleDiameter;
- (id)initWithFrame:(struct CGRect)arg1;

@end
