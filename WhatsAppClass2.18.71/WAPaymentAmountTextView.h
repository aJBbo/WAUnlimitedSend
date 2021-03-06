//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSCharacterSet, NSString, WAPaymentAmountPrecisionValidator, WAPaymentMoneyTextFormatter;
@protocol WAPaymentAmountTextViewDelegate;

__attribute__((visibility("hidden")))
@interface WAPaymentAmountTextView : UITextView <UITextViewDelegate>
{
    long long _amount_1000;
    NSString *_currency;
    NSString *_amountString;
    NSCharacterSet *_digitsSet;
    WAPaymentMoneyTextFormatter *_amountFormatter;
    WAPaymentAmountPrecisionValidator *_amountPrecisionValidator;
    id <WAPaymentAmountTextViewDelegate> _amountDelegate;
}

@property(nonatomic) __weak id <WAPaymentAmountTextViewDelegate> amountDelegate; // @synthesize amountDelegate=_amountDelegate;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)setUpWithAmount_1000:(long long)arg1 currency:(id)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

