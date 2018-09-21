//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WAShapeView;

__attribute__((visibility("hidden")))
@interface _WAChatSessionCellIndicatorsView : UIView
{
    UIImageView *_muteIndicator;
    UIImageView *_pinIndicator;
    double _pinIndicatorHeight;
    UILabel *_unreadLabel;
    WAShapeView *_unreadLabelBackground;
    UILabel *_archivedLabel;
    WAShapeView *_archivedLabelBackground;
    _Bool _shouldAnimatePinIndicator;
    _Bool _isAnimatingPinIndicator;
    _Bool _highlighted;
    _Bool _showPinIcon;
    _Bool _showMuteIcon;
    _Bool _showArchivedLabel;
    long long _unreadCount;
}

+ (id)pinIndicatorImage;
+ (id)muteIndicatorImage;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool showArchivedLabel; // @synthesize showArchivedLabel=_showArchivedLabel;
@property(nonatomic) _Bool showMuteIcon; // @synthesize showMuteIcon=_showMuteIcon;
@property(nonatomic) _Bool showPinIcon; // @synthesize showPinIcon=_showPinIcon;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)setShowPinIcon:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadColorOfUnreadIndicator;
- (void)startPinAnimation;
- (void)reloadFonts;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)pinIndicatorHeight;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

