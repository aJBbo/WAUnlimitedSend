//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface WAPaintCanvasToolTipView : UIView
{
    UILabel *_label;
    double _initialWidth;
}

@property(readonly, nonatomic) double initialWidth; // @synthesize initialWidth=_initialWidth;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint labelCenterOffset;
@property(readonly, nonatomic) double contentHeight;
- (id)initWithScale:(double)arg1 initialWidth:(double)arg2;

@end

