//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WANavigationBarTitleViewFillsAvailableSpace-Protocol.h"

@class NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface WANavigationBarTitleView : UIView <WANavigationBarTitleViewFillsAvailableSpace>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_activityLabel;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _animating;
    _Bool _compactHeight;
    NSString *_accessibilitySubtitle;
}

@property(nonatomic) _Bool compactHeight; // @synthesize compactHeight=_compactHeight;
@property(copy, nonatomic) NSString *accessibilitySubtitle; // @synthesize accessibilitySubtitle=_accessibilitySubtitle;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (void)stopAnimating;
- (void)startAnimating;
@property(copy, nonatomic) NSString *activityText;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setBounds:(struct CGRect)arg1;
- (void)configureFonts;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

