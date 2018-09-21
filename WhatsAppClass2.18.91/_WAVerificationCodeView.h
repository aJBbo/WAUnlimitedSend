//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WALinkLabel;

__attribute__((visibility("hidden")))
@interface _WAVerificationCodeView : UIView
{
    UILabel *_codeLabel;
    struct CGSize _boundsSize;
    _Bool _needsReloadText;
    WALinkLabel *_helperTextLabel;
    NSString *_formattedCode;
}

+ (id)helperTextFontOfSize:(double)arg1;
+ (id)verificationCodeFontOfSize:(double)arg1;
@property(copy, nonatomic) NSString *formattedCode; // @synthesize formattedCode=_formattedCode;
@property(readonly, nonatomic) WALinkLabel *helperTextLabel; // @synthesize helperTextLabel=_helperTextLabel;
- (void).cxx_destruct;
- (void)reloadTextIfNeeded;
- (void)setNeedsReloadText;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

