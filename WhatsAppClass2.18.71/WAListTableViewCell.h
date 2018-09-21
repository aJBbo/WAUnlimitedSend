//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WAListTableViewCell : UITableViewCell
{
    UIView *_containerView;
    UILabel *_nameLabel;
    UILabel *_participantsLabel;
}

+ (double)preferredHeight;
+ (id)cellWithReuseIdentifier:(id)arg1;
@property(readonly, nonatomic) UILabel *participantsLabel; // @synthesize participantsLabel=_participantsLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addAutolayoutConstraints;
- (void)configureWithList:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

