//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface WABizHoursView : UIView
{
    double _labelSpacing;
    double _dayLabelWidthMultiplier;
    UILabel *_dayLabel;
    UILabel *_hoursLabel;
}

@property(readonly, nonatomic) UILabel *hoursLabel; // @synthesize hoursLabel=_hoursLabel;
@property(readonly, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

