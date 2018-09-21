//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentsThemeProtocol-Protocol.h"

@class NSNumber, UIColor, UIFont;
@protocol WAPaymentsBubbleReplyThemeProtocol;

@protocol WAPaymentsBubbleThemeProtocol <WAPaymentsThemeProtocol>
@property(readonly, nonatomic) id <WAPaymentsBubbleReplyThemeProtocol> reply;
@property(readonly, nonatomic) UIFont *statusLabelFont;
@property(readonly, nonatomic) UIFont *detailsHeaderNameFont;
@property(readonly, nonatomic) UIFont *detailsHeaderFontItalic;
@property(readonly, nonatomic) UIFont *detailsHeaderFont;
@property(readonly, nonatomic) UIColor *detailsHeaderColor;
@property(readonly, nonatomic) NSNumber *currencyKern;
@property(readonly, nonatomic) NSNumber *currencyBaselineOffset;
@property(readonly, nonatomic) UIFont *currencyFont;
@property(readonly, nonatomic) NSNumber *amountMinorBaselineOffset;
@property(readonly, nonatomic) UIFont *amountMinorFont;
@property(readonly, nonatomic) UIFont *amountFont;
@property(readonly, nonatomic) UIColor *amountColor;
@property(readonly, nonatomic) UIColor *acceptButtonColor;
@end

