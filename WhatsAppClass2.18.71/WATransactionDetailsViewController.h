//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageInfoViewController.h"

#import "WAPaymentDetailsTableDelegateDelegate-Protocol.h"
#import "WAPaymentUPIDeclineIncomingCollectLoadingViewControllerType-Protocol.h"
#import "WATransactionDetailsHeaderViewDelegate-Protocol.h"

@class NSString, WAJID, WAPaymentTransaction, WATransactionDetailsHeaderView;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface WATransactionDetailsViewController : WAMessageInfoViewController <WAPaymentDetailsTableDelegateDelegate, WATransactionDetailsHeaderViewDelegate, WAPaymentUPIDeclineIncomingCollectLoadingViewControllerType>
{
    WAPaymentTransaction *_transaction;
    id <NSObject> _debugFieldsObserver;
    WATransactionDetailsHeaderView *_headerView;
    WAJID *_handleJID;
    NSString *_handleName;
    _Bool _loadingHandleName;
}

- (void).cxx_destruct;
- (void)pushViewController:(id)arg1;
- (void)openHandleInfo:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)processGetVPANameRequest:(id)arg1;
- (void)paymentDetailsTableDelegate:(id)arg1 didSelectToOpenHandleDetails:(id)arg2;
- (void)paymentDetailsTableDelegate:(id)arg1 didSelectToOpenProfileDetails:(id)arg2;
- (void)paymentDetailsTableDelegateDidSelectToOpenAccountDetails:(id)arg1;
- (void)paymentDetailsTableDelegateDidSelectToResetPin:(id)arg1;
- (void)processCollectRequestRejectRequest:(id)arg1;
- (void)transactionDidEndLoading:(id)arg1;
- (void)transactionDidStartLoading:(id)arg1;
- (void)transactionDetailsHeaderViewDidDeclineIncomingCollectRequest:(id)arg1;
- (void)transactionDetailsHeaderViewDidAcceptIncomingCollectRequest:(id)arg1;
- (void)dealloc;
- (void)presentPaymentInfoForMessage:(id)arg1;
- (void)performDetailsTableUpdate;
- (void)handlePaymentTransactionUpdateNotification:(id)arg1;
- (void)handlePaymentAccountChangeNotification:(id)arg1;
- (_Bool)wa_prefersMinimalBackButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateHeaderView;
- (void)viewDidLoad;
- (void)showTransactionDebugData;
- (void)updateNavigationBar;
- (id)initWithTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

