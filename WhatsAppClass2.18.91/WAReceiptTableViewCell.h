//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseReceiptTableViewCell.h"

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface WAReceiptTableViewCell : WABaseReceiptTableViewCell
{
    UILabel *_messageStatusLabel;
    UILabel *_messageStatusIcon;
    NSLayoutConstraint *_statusIconCenterX;
    NSLayoutConstraint *_statusTextLeading;
}

+ (void)initialize;
@property(retain, nonatomic) NSLayoutConstraint *statusTextLeading; // @synthesize statusTextLeading=_statusTextLeading;
@property(retain, nonatomic) NSLayoutConstraint *statusIconCenterX; // @synthesize statusIconCenterX=_statusIconCenterX;
@property(retain, nonatomic) UILabel *messageStatusIcon; // @synthesize messageStatusIcon=_messageStatusIcon;
@property(readonly, nonatomic) UILabel *messageStatusLabel; // @synthesize messageStatusLabel=_messageStatusLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setReceiptType:(long long)arg1 isMediaMessage:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

