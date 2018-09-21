//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class NSLayoutConstraint, UIBarButtonItem, UILabel, UIView, WAPaymentCardView, WAPaymentUPIBankAccount;

__attribute__((visibility("hidden")))
@interface WAPaymentUPIDebitCardViewController : WAViewController
{
    double _initialBottomMargin;
    UIView *_overlayView;
    CDUnknownBlockType _completion;
    WAPaymentUPIBankAccount *_account;
    UILabel *_helperTextLabel;
    WAPaymentCardView *_paymentCardView;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_cardTrailingMargin;
    NSLayoutConstraint *_cardLeadingMargin;
    UIBarButtonItem *_buttonVerify;
}

+ (id)controllerForPaymentAccount:(id)arg1;
@property(nonatomic) __weak UIBarButtonItem *buttonVerify; // @synthesize buttonVerify=_buttonVerify;
@property(nonatomic) __weak NSLayoutConstraint *cardLeadingMargin; // @synthesize cardLeadingMargin=_cardLeadingMargin;
@property(nonatomic) __weak NSLayoutConstraint *cardTrailingMargin; // @synthesize cardTrailingMargin=_cardTrailingMargin;
@property(nonatomic) __weak NSLayoutConstraint *bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) __weak WAPaymentCardView *paymentCardView; // @synthesize paymentCardView=_paymentCardView;
@property(nonatomic) __weak UILabel *helperTextLabel; // @synthesize helperTextLabel=_helperTextLabel;
@property(retain, nonatomic) WAPaymentUPIBankAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)verifyAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)activateTextFieldRequiringUserInput;
- (void)cardViewDidUpdateWithCardView:(id)arg1;
- (void)setupFonts;
- (void)dealloc;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)wa_prefersMinimalBackButton;

@end

