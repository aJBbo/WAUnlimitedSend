//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPaymentTextFormatters-Protocol.h"

@class NSNumberFormatter, NSString, WAPaymentCurrencySettings;
@protocol WAPaymentsAmountTextViewThemeProtocol;

__attribute__((visibility("hidden")))
@interface WAPaymentMoneyTextFormatter : NSObject <WAPaymentTextFormatters>
{
    NSNumberFormatter *_moneyFormatter;
    WAPaymentCurrencySettings *_currencySettings;
    id <WAPaymentsAmountTextViewThemeProtocol> _amountTextViewTheme;
}

- (void).cxx_destruct;
- (id)attributedFormattedStringFromNumberStringByAddingCurrencySymbol:(id)arg1;
- (id)attributedFormattedStringFromNumberString:(id)arg1;
- (id)attributedFormatedStringForNumber:(id)arg1;
- (id)numberForFormattedString:(id)arg1;
- (id)formattedStringForInputNumberString:(id)arg1;
- (id)formattedStringForNumber:(id)arg1;
- (id)stringValueForFormattedString:(id)arg1;
- (id)stringForStringValue:(id)arg1 trimSystemCharacters:(_Bool)arg2;
- (_Bool)isValidStringForFormatting:(id)arg1;
- (id)initWithCurrencySettings:(id)arg1 amountTextViewTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

