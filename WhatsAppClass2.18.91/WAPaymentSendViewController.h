//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UITextViewDelegate-Protocol.h"
#import "WACaptionBarDelegate-Protocol.h"
#import "WAMentionsSelectorViewDelegate-Protocol.h"
#import "WAPaymentAmountTextViewDelegate-Protocol.h"
#import "WAPaymentLoadingViewControllerType-Protocol.h"
#import "WAPaymentSendInfoViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSNumberFormatter, NSString, UIBarButtonItem, UIButton, WACaptionBar, WAMentionsSelectorView, WAPaymentAmountTextView, WAPaymentConfiguration, WAPaymentManager, WAPaymentSendInfoView;
@protocol WAPaymentSendViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAPaymentSendViewController : WAViewController <WACaptionBarDelegate, WAMentionsSelectorViewDelegate, UITextViewDelegate, WAPaymentAmountTextViewDelegate, WAPaymentLoadingViewControllerType, WAPaymentSendInfoViewDelegate>
{
    NSNumberFormatter *_amountFormatter;
    WAPaymentConfiguration *_paymentConfiguration;
    WAPaymentManager *_paymentManager;
    UIBarButtonItem *_nextBarButtonItem;
    NSString *_paymentAccountName;
    _Bool _waitingForCredentials;
    _Bool _updatedTokenOnce;
    WACaptionBar *_captionBar;
    WAMentionsSelectorView *_mentionsSelectorView;
    CDUnknownBlockType _loadingCancelledHandler;
    id <WAPaymentSendViewControllerDelegate> _delegate;
    WAPaymentSendInfoView *_infoBackgroundView;
    WAPaymentAmountTextView *_amountTextView;
    UIButton *_amountTextOverlayButton;
    NSLayoutConstraint *_amountBackgroundViewBottomConstraint;
    NSLayoutConstraint *_amountTextViewHeightConstraint;
    NSLayoutConstraint *_infoBackgroundViewTopConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *infoBackgroundViewTopConstraint; // @synthesize infoBackgroundViewTopConstraint=_infoBackgroundViewTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *amountTextViewHeightConstraint; // @synthesize amountTextViewHeightConstraint=_amountTextViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *amountBackgroundViewBottomConstraint; // @synthesize amountBackgroundViewBottomConstraint=_amountBackgroundViewBottomConstraint;
@property(nonatomic) __weak UIButton *amountTextOverlayButton; // @synthesize amountTextOverlayButton=_amountTextOverlayButton;
@property(nonatomic) __weak WAPaymentAmountTextView *amountTextView; // @synthesize amountTextView=_amountTextView;
@property(nonatomic) __weak WAPaymentSendInfoView *infoBackgroundView; // @synthesize infoBackgroundView=_infoBackgroundView;
@property(nonatomic) __weak id <WAPaymentSendViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopLoadingUI;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1;
- (id)identifier;
- (void)mentionsSelectorView:(id)arg1 didSelectContactWithName:(id)arg2 jid:(id)arg3 forTextRange:(struct _NSRange)arg4;
- (void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2;
- (void)configureMentionsSelectorView;
- (void)captionBarDidRequestToShowStickerStore:(id)arg1;
- (void)captionBar:(id)arg1 didRequestToShowGIFSearchWithPreloadedItems:(id)arg2;
- (void)captionBar:(id)arg1 didRequestSendGIF:(id)arg2;
- (void)captionBar:(id)arg1 didRequestSendSticker:(id)arg2;
- (double)captionBarContainerHeight:(id)arg1;
- (void)captionBarDidBeginEditing:(id)arg1;
- (void)captionBarDidRequestAddMedia:(id)arg1;
- (void)captionBarDidChangeDistanceFromBottom:(id)arg1;
- (void)captionBarDidChangeText:(id)arg1;
- (void)captionBarIgnoreWillShowKeyboard:(id)arg1;
- (void)captionBarDidHideKeyboard:(id)arg1;
- (void)captionBarWillHideKeyboard:(id)arg1;
- (void)captionBarDidShowKeyboard:(id)arg1;
- (void)captionBarWillShowKeyboard:(id)arg1;
- (void)captionBarDidChangeHeight:(id)arg1;
- (void)captionBarDidStopEditingMention:(id)arg1;
- (void)captionBar:(id)arg1 didEditMention:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)captionBar:(id)arg1 canMentionUser:(id)arg2;
- (_Bool)captionBarShouldTrackMentions:(id)arg1;
- (_Bool)canCaptionBarAddMedia:(id)arg1;
- (void)captionBarDidRequestSendMessage:(id)arg1;
- (void)captionBarDidFinishEditing:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)paymentAmountTextView:(id)arg1 didChangeAmount_1000:(long long)arg2;
- (void)editAmount:(id)arg1;
- (void)confirmAction;
- (void)cancelAction;
- (void)paymentSendInfoViewDidRequestChangePaymentAccount:(id)arg1;
- (void)paymentSendInfoViewDidRequestChangePayee:(id)arg1;
- (void)typeControlChanged:(id)arg1;
- (void)updateSendUIState;
- (_Bool)isEnteredAmountValid;
- (void)needsAmountViewConstraintUpdates:(double)arg1 animationCurve:(long long)arg2 keyboardHeight:(double)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setUpCaptionBar;
- (void)viewDidLayoutSubviews;
- (void)didTapInfoView:(id)arg1;
- (void)viewDidLoad;
- (void)updatePaymentAccount:(id)arg1 paymentConfiguration:(id)arg2 paymentManager:(id)arg3;
- (id)initWithPaymentAccount:(id)arg1 paymentConfiguration:(id)arg2 paymentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

