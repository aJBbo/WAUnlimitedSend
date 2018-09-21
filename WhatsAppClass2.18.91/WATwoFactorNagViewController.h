//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "WAHelperScreenPresenting-Protocol.h"
#import "WAPasscodeViewDelegate-Protocol.h"

@class NSString, UILabel, UIView, UIWindow, WALinkLabel, WAPasscodeView;

__attribute__((visibility("hidden")))
@interface WATwoFactorNagViewController : WAViewController <WAPasscodeViewDelegate, WAHelperScreenPresenting>
{
    UIView *_containerCardView;
    UILabel *_titleLabel;
    WAPasscodeView *_passcodeView;
    WALinkLabel *_descriptionLabel;
    UIWindow *_applicationWindow;
    _Bool _animateSlideIn;
    _Bool _wasDismissed;
    double _keyboardHeight;
}

- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)passcodeViewDidEnterPasscode:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)applicationDidDismissCallScreen:(id)arg1;
- (void)wa_applicationDidBecomeActive;
- (void)dismissCardAndPopController;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
