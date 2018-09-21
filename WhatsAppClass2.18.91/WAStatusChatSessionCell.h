//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView, WABadgedLabel, WAChatSession, WAStatusThumbnailView;

__attribute__((visibility("hidden")))
@interface WAStatusChatSessionCell : UITableViewCell
{
    UIView *_textContainerView;
    WAStatusThumbnailView *_thumbnail;
    WABadgedLabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_subtitleInsetConstraint;
    double _currentFontSize;
    WAChatSession *_chatSession;
}

+ (double)preferredHeight;
+ (id)cellWithReuseIdentifier:(id)arg1;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void).cxx_destruct;
- (void)updateSeparatorInset;
- (_Bool)isMuted;
- (id)textForSubtitle;
- (void)updateSubtitleLabel;
- (void)updateTitleLabel;
- (void)update;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) WAStatusThumbnailView *thumbnail;
- (id)currentSubtitleFont;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

