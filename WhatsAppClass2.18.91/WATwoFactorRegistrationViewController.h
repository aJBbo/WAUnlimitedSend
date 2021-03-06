//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATwoFactorCodeBaseViewController.h"

@class NSString, UIImageView, UILabel, UIProgressView, UIView, WATwoFactorWipeToken, WAWeakTimer;
@protocol WATwoFactorRegistrationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WATwoFactorRegistrationViewController : WATwoFactorCodeBaseViewController
{
    NSString *_countryCode;
    NSString *_phoneNumber;
    WATwoFactorWipeToken *_wipeToken;
    int _codeInputBlockState;
    WAWeakTimer *_codeInputBlockProgressUpdateTimer;
    WAWeakTimer *_emailCodeExistCheckTimer;
    double _emailCodeExistCheckMinPoll;
    NSString *_smsVerificationCodeUsed;
    id <WATwoFactorRegistrationViewControllerDelegate> _delegate;
    UIView *_viewUIBlocked;
    UILabel *_labelUIBlocked;
    UIProgressView *_progressViewBlock;
    UIImageView *_lockIcon;
}

+ (id)localizedRoughTimeStringForInterval:(double)arg1;
@property(retain, nonatomic) UIImageView *lockIcon; // @synthesize lockIcon=_lockIcon;
@property(retain, nonatomic) UIProgressView *progressViewBlock; // @synthesize progressViewBlock=_progressViewBlock;
@property(retain, nonatomic) UILabel *labelUIBlocked; // @synthesize labelUIBlocked=_labelUIBlocked;
@property(retain, nonatomic) UIView *viewUIBlocked; // @synthesize viewUIBlocked=_viewUIBlocked;
@property(nonatomic) __weak id <WATwoFactorRegistrationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *smsVerificationCodeUsed; // @synthesize smsVerificationCodeUsed=_smsVerificationCodeUsed;
- (void).cxx_destruct;
- (void)createAndStartEmailExistCheckPollTimer;
- (void)pollForEmailResetIfNecessary;
- (void)handleLeftNavigationButtonTapped;
- (void)handleCodeEntered:(id)arg1;
- (void)handleOpenURL:(id)arg1;
- (void)presentForgotPasscodeActionSheet;
- (void)presentSupportEmailComposerWithReason:(id)arg1 normalizedPhoneNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContactSupportAlertWithTitle:(id)arg1 message:(id)arg2 reason:(id)arg3 normalizedPhoneNumber:(id)arg4;
- (void)presentGenericAlertWithTitle:(id)arg1 message:(id)arg2 recoverable:(_Bool)arg3;
- (void)handleStandardRegistrationResponses:(id)arg1;
- (void)handleWipeRequest;
- (void)handleRecoveryEmailRequest;
- (void)handleCodeCheckRequest:(id)arg1;
- (void)updateCodeInputBlockProgress;
- (void)startCodeInputBlockProgressUpdateTimer;
- (void)setCodeInputBlockState:(int)arg1;
- (void)validateCodeInputBlockState;
- (void)wa_fontSizeDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initCountryCode:(id)arg1 phoneNumber:(id)arg2 wipeToken:(id)arg3 changeNumberMode:(_Bool)arg4 delegate:(id)arg5;

@end

