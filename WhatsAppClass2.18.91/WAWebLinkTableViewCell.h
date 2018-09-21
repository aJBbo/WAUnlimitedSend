//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UIColor, UIImageView, UILabel, UIView, WAMessageDataItem;
@protocol WAWebLinkTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WAWebLinkTableViewCell : UITableViewCell
{
    WAMessageDataItem *_currentItem;
    UIColor *_viewURLButtonColor;
    struct CGSize _prevSize;
    id <WAWebLinkTableViewCellDelegate> _delegate;
    UIButton *_viewURLButton;
    UIView *_containerView;
    UILabel *_contentLabel;
    UILabel *_webURLLabel;
    UIImageView *_thumbnailImageView;
    UILabel *_previewLabel;
    UIImageView *_chevronImageView;
    UIView *_suspiciousLinkContainerView;
    UILabel *_suspiciousLinkWarningLabel;
    NSLayoutConstraint *_topConstraint;
}

+ (double)preferredHeight;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UILabel *suspiciousLinkWarningLabel; // @synthesize suspiciousLinkWarningLabel=_suspiciousLinkWarningLabel;
@property(nonatomic) __weak UIView *suspiciousLinkContainerView; // @synthesize suspiciousLinkContainerView=_suspiciousLinkContainerView;
@property(nonatomic) __weak UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(nonatomic) __weak UILabel *previewLabel; // @synthesize previewLabel=_previewLabel;
@property(nonatomic) __weak UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) __weak UILabel *webURLLabel; // @synthesize webURLLabel=_webURLLabel;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIButton *viewURLButton; // @synthesize viewURLButton=_viewURLButton;
@property(nonatomic) __weak id <WAWebLinkTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (void)showChatRequested:(id)arg1;
- (void)viewURLButtonTapped:(id)arg1;
- (void)addHighlightForSearchTerm:(id)arg1 inMutableAttributedString:(id)arg2;
- (void)configureWithMessageDataItem:(id)arg1 searchTerm:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

