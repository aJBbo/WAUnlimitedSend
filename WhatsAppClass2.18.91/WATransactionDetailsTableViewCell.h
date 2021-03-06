//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView, WALinkLabel;
@protocol WATransactionDetailsTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WATransactionDetailsTableViewCell : UITableViewCell
{
    UIView *_textContainer;
    UILabel *_titleLabel;
    WALinkLabel *_mainLabel;
    UILabel *_secondaryLabel;
    UIImageView *_iconView;
    UILabel *_tertiaryLabel;
    _Bool _isLoading;
    id <WATransactionDetailsTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WATransactionDetailsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)updateForLoadingState;
- (void)updateForStatusWithTransaction:(id)arg1 isLoading:(_Bool)arg2;
- (void)updateForAccountWithTransaction:(id)arg1 bankIcon:(id)arg2 bankDisplayName:(id)arg3 isLoading:(_Bool)arg4;
- (void)updateForParticipantWithTransaction:(id)arg1 isLoading:(_Bool)arg2;
- (void)layoutSubviews;
- (void)addConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

