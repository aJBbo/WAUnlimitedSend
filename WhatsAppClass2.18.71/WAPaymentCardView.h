//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WAPaymentCardViewDelegate;

__attribute__((visibility("hidden")))
@interface WAPaymentCardView : UIView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: digitsInfoTextLabel
    // Error parsing type: , name: cardNumberView
    // Error parsing type: , name: expirationDateInfoLabel
    // Error parsing type: , name: expirationDateView
    // Error parsing type: , name: mmView
    // Error parsing type: , name: expirationDateSeparatorLabel
    // Error parsing type: , name: yyView
    // Error parsing type: , name: labelTextColor
    // Error parsing type: , name: defaultDigitsLabelText
    // Error parsing type: , name: errorTextLabel
}

- (CDUnknownBlockType).cxx_destruct;
- (void)updateFonts;
- (void)makeFirstResponder;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) id <WAPaymentCardViewDelegate> delegate; // @synthesize delegate;

@end

