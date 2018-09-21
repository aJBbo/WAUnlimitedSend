//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAPopupActionMenuSupport-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, WABadgedLabel, WAProfilePictureThumbnailView;
@protocol WAContactCardItemTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WAContactCardItemTableViewCell : UITableViewCell <WAPopupActionMenuSupport>
{
    long long _cellStyle;
    NSArray *_customLayoutConstraints;
    UIButton *_videoCallButton;
    UIButton *_voiceCallButton;
    UIButton *_messageButton;
    _Bool _showActions;
    _Bool _showProfilePicture;
    _Bool _popupMenuDisabled;
    id <WAContactCardItemTableViewCellDelegate> _delegate;
    UILabel *_topTextLabel;
    UILabel *_bottomTextLabel;
    WABadgedLabel *_nameLabel;
    NSString *_valueForCopyAction;
    SEL _customCopySelector;
    NSString *_jid;
    double _pictureSize;
    WAProfilePictureThumbnailView *_profilePictureThumbnailView;
}

@property(readonly, nonatomic) WAProfilePictureThumbnailView *profilePictureThumbnailView; // @synthesize profilePictureThumbnailView=_profilePictureThumbnailView;
@property(nonatomic) _Bool popupMenuDisabled; // @synthesize popupMenuDisabled=_popupMenuDisabled;
@property(nonatomic) double pictureSize; // @synthesize pictureSize=_pictureSize;
@property(nonatomic) _Bool showProfilePicture; // @synthesize showProfilePicture=_showProfilePicture;
@property(nonatomic) _Bool showActions; // @synthesize showActions=_showActions;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(nonatomic) SEL customCopySelector; // @synthesize customCopySelector=_customCopySelector;
@property(copy, nonatomic) NSString *valueForCopyAction; // @synthesize valueForCopyAction=_valueForCopyAction;
@property(readonly, nonatomic) WABadgedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(readonly, nonatomic) UILabel *topTextLabel; // @synthesize topTextLabel=_topTextLabel;
@property(nonatomic) __weak id <WAContactCardItemTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callStateDidChange:(id)arg1;
- (void)updateEnabledStateOfCallButtons;
- (void)showOrHideActionButtonsAsNecessary;
- (void)voiceCallAction:(id)arg1;
- (void)videoCallAction:(id)arg1;
- (void)messageAction:(id)arg1;
- (void)updateConstraints;
- (id)customLayoutConstraints;
- (void)contactInfo_copyPhoneNumber:(id)arg1;
- (void)performAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)shouldShowPopupActionMenu;
- (void)layoutSubviews;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithCellStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
