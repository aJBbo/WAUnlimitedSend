//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface WADatabaseUsageDetailCell : UITableViewCell
{
    UILabel *_countTextLabel;
    double _fixedSizeLabelWidth;
}

@property(nonatomic) double fixedSizeLabelWidth; // @synthesize fixedSizeLabelWidth=_fixedSizeLabelWidth;
- (void).cxx_destruct;
@property(readonly, nonatomic) double optimalSizeLabelWidth;
- (void)updateWithRow:(id)arg1;
- (void)updateFonts;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

