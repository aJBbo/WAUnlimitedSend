//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentCoordinator.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError, NSMutableOrderedSet, NSString, WAConnectionObserver, WAModalNavigationController, WAPaymentUPIBankAccount, WAPaymentUPIConfiguration, WAPaymentUPIManager, WAPaymentUPIPSPConfiguration, WAProgressAlertController, XMPPUPIBankResponse;

__attribute__((visibility("hidden")))
@interface WAPaymentUPICoordinator : WAPaymentCoordinator <MFMessageComposeViewControllerDelegate>
{
    NSString *_verificationCode;
    NSString *_debitCardNumber;
    NSString *_expiryMonth;
    NSString *_expiryYear;
    WAPaymentUPIBankAccount *_accountToProcess;
    NSString *_challenge;
    long long _clFailedCounter;
    NSString *_listKeys;
    NSString *_token;
    long long _keyTokenNotReceivedCounter;
    CDUnknownBlockType _clIQCompletion;
    WAConnectionObserver *_connectionObserver;
    NSError *_deviceBindingError;
    NSArray *_banks;
    double _banksCachedDate;
    XMPPUPIBankResponse *_bankToRequestAccountsFor;
    NSArray *_psps;
    WAModalNavigationController *_navigationController;
    WAProgressAlertController *_progressController;
    _Bool _resetNavigationStack;
    NSDictionary *_clResult;
    WAPaymentUPIBankAccount *_previousAccountToProcess;
    NSString *_qrEncodedName;
    long long _smsRetryCount;
    double _smsSentTime;
    NSString *_smsPhoneNumber;
    NSMutableOrderedSet *_states;
    unsigned long long _upiFlow;
}

@property(readonly, nonatomic) unsigned long long upiFlow; // @synthesize upiFlow=_upiFlow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetStateBeforeRestarting;
- (void)resetState;
- (void)processGetMethodsRequest:(id)arg1;
- (void)sendGetMethodsIQ;
- (void)processCreateAccountRequest:(id)arg1;
- (void)sendCreateAccountIQ;
- (void)processBatchRequest:(id)arg1;
- (void)sendBatchIQ;
- (void)showWaitingForIQUI;
- (void)showRegistrationCompletedUI;
- (void)showUIToResetAccountMpin:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)processChangeMpinRequest:(id)arg1;
- (void)sendChangeMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLChangeMpinUIWithAccount:(id)arg1;
- (void)showUIToChangeAccountMpin:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)showCLCheckMpinUIWithAccount:(id)arg1;
- (void)showUIToCheckAccountMpin:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)processSetMpinRequest:(id)arg1;
- (void)sendSetMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showCLSetMpinUIWithAccount:(id)arg1;
- (void)processGenerateOTPRequest:(id)arg1;
- (void)sendGenerateOTPIQWithAccount:(id)arg1;
- (void)showMPINSetupPromptWithAccount:(id)arg1;
- (void)showDebitCardVerificationUIWithAccount:(id)arg1;
- (void)showDebitCardPromptScreenWithAccount:(id)arg1;
- (void)showUIToContinueAccountRegistration:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)showAccountLinkedUIWithAccount:(id)arg1;
- (void)processRegisterHandleRequest:(id)arg1;
- (void)sendRegisterHandleIQWithAccount:(id)arg1;
- (void)showAccountsUIWithAccounts:(id)arg1;
- (void)showNoAccountsUI;
- (void)processGetAccountsRequest:(id)arg1;
- (void)sendGetAccountsIQWithBank:(id)arg1;
- (void)showBanksUIWithBanks:(id)arg1;
- (void)processGetBanksRequest:(id)arg1;
- (void)sendBanksIQ;
- (void)showBanksUIOrSendBanksIQ;
- (void)processBindDeviceRequest:(id)arg1;
- (void)sendDeviceBindingIQWithVerificationData:(id)arg1;
- (void)sendDeviceBindingIQIfEnoughTimeElapsedAfterSmsSent;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)showIOSSMSUI;
- (void)showSMSUI;
- (void)processTOSAcceptRequest:(id)arg1;
- (void)sendTOSIQ;
- (void)showTOSUI;
- (void)exitFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)continueCurrentFlowWithAccount:(id)arg1 terminateIfDataIsMissing:(_Bool)arg2;
- (void)startOrContinueRegistrationFlow;
- (void)restartFlow;
- (void)continueFlow;
- (id)flowNameForLogging;
- (void)startResetMpinFlowForAccount:(id)arg1;
- (void)startChangeMpinFlowForAccount:(id)arg1;
- (void)startCheckMpinFlowForAccount:(id)arg1;
- (_Bool)startFlowToHandleURL:(id)arg1 context:(id)arg2;
- (_Bool)startPaymentFlowForAccount:(id)arg1 paymentConfiguration:(id)arg2;
- (void)startShortRegistrationFlow;
- (void)startRegistrationFlow;
@property(retain, nonatomic) WAPaymentUPIConfiguration *paymentUPIConfiguration;
@property(readonly, nonatomic) WAPaymentUPIManager *paymentUPIManager;
- (void)subscribeToNotifications;
- (id)initWithPaymentManager:(id)arg1 paymentSettings:(id)arg2 chatStorage:(id)arg3 rootViewController:(id)arg4 delegate:(id)arg5;
- (void)resetDataForCL;
- (void)loadDataForCL;
- (_Bool)isDataForCLMissing;
- (void)processGetCredentialsRequest:(id)arg1;
- (void)getCredentialsWithAccount:(id)arg1 mode:(unsigned long long)arg2 amount_1000:(id)arg3 payer:(id)arg4 payee:(id)arg5 payInfo:(id)arg6 transactionId:(id)arg7;
- (void)getCredentialsToPayFromAccount:(id)arg1 amount_1000:(id)arg2 payer:(id)arg3 payee:(id)arg4 payInfo:(id)arg5 transactionId:(id)arg6;
- (void)getCredentialsToSetMpinForAccount:(id)arg1;
- (void)getCredentialsToChangeMpinForAccount:(id)arg1;
- (void)getCredentialsToCheckMpinForAccount:(id)arg1;
- (void)getCredentialsWaitForTokenAndListKeyIfNeeded:(CDUnknownBlockType)arg1;
- (void)continueCLIfWaiting;
- (void)waitForTokenAndListKeyIfNeeded:(CDUnknownBlockType)arg1;
- (void)requestForMissingCLData;
- (void)processListKeysRequest:(id)arg1;
- (void)sendListKeysIQ;
- (void)processGetTokenRequest:(id)arg1;
- (void)sendGetTokenIQWithChallenge:(id)arg1;
- (void)sendGetTokenIQOrRequestChallenge;
- (void)processChallengeRequest:(id)arg1;
- (void)requestChallenge;
- (void)updateProgressControllerTitle;
- (void)subscribeToNetworkStatusChangeNotifications;
- (void)showDeviceBindingFailedUIForErrorCode:(long long)arg1;
- (void)showFlowFailedUIWithError:(id)arg1;
- (id)errorMessageForIQError:(id)arg1;
- (_Bool)processIQError:(id)arg1;
- (_Bool)processCLError:(id)arg1;
- (_Bool)processCoordinatorError:(id)arg1;
- (_Bool)processError:(id)arg1;
- (void)logUPIApiEventForRequest:(id)arg1 error:(id)arg2;
- (void)logUPICheckPinRequest:(id)arg1 error:(id)arg2;
- (void)logUPIGetAccountsRequest:(id)arg1 accountsExist:(_Bool)arg2 error:(id)arg3;
- (void)logUPIBindDeviceRequest:(id)arg1 requestRetryCount:(long long)arg2 error:(id)arg3;
- (void)logRequestRetry:(id)arg1;
- (void)processRequestCompletedNotification:(id)arg1;
- (void)subscribeToRequestNotifications;
@property(readonly, nonatomic) NSString *pspIdentifierForIQ;
- (void)savePSPBanks:(id)arg1;
- (void)saveBanks:(id)arg1;
- (id)banks;
- (void)rotateBindDevicePhoneNumber;
@property(readonly, nonatomic) NSString *bindDevicePhoneNumber;
- (void)rotatePSPConfiguration;
- (void)activatePSPConfigurationForBankIfNeeded:(id)arg1;
- (void)activateUPIConfiguration;
@property(readonly, nonatomic) WAPaymentUPIPSPConfiguration *pspConfiguration;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)updateStateToMatchCurrentViewController;
- (id)findViewControllerOnNavigationStackOfClass:(Class)arg1 identifier:(id)arg2;
- (void)dismissProgressViewIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)popNavigationControllerToViewController:(id)arg1;
- (void)showViewController:(id)arg1;
- (void)processCollectRequestAcceptRequest:(id)arg1;
- (void)sendCollectRequestAcceptWithAccount:(id)arg1 transactionId:(id)arg2 encryptedMpin:(id)arg3;
- (void)processSendPaymentToHandleRequest:(id)arg1;
- (void)sendPaymentToHandle:(id)arg1 usingAccount:(id)arg2 amount_1000:(long long)arg3 currency:(id)arg4 encryptedMpin:(id)arg5 clTransactionId:(id)arg6 merchantCode:(id)arg7 refId:(id)arg8 refUrl:(id)arg9 note:(id)arg10 receiverName:(id)arg11;
- (void)sendPayment;
- (void)checkBalanceAndSendPayment:(id)arg1;
- (void)initiatePaymentRequest;
- (void)processCollerRequestSendRequest:(id)arg1;
- (void)sendCollectRequest;
- (void)presentIntentToPayUI;
- (void)processCheckMpinRequest:(id)arg1;
- (void)sendCheckMpinIQWithCLResult:(id)arg1 account:(id)arg2;
- (void)showPinEducationView;
- (void)showCLPayUIWithAccount:(id)arg1;
- (void)processGetHandleRequest:(id)arg1;
- (void)sendGetHandleIQWithJid:(id)arg1;
- (void)paymentSendViewControllerDidCancel:(id)arg1;
- (void)paymentSendViewController:(id)arg1 didRequestToChooseAccountWithConfiguration:(id)arg2;
- (void)paymentSendViewController:(id)arg1 didRequestToChoosePayeeWithConfiguration:(id)arg2;
- (void)paymentSendViewController:(id)arg1 didConfirmPaymentConfiguration:(id)arg2;
- (void)showSendPaymentUI;
- (void)checkBlockedStatusAndShowSendPaymentUI;
- (void)processUnblockError:(id)arg1;
- (void)processUnblockHandleRequest:(id)arg1;
- (void)sendUnblockHandleRequest:(id)arg1;
- (void)updateStateAndResetViewsOnAlertCancel;
- (void)qrCodeScannerViewControllerDidCancel:(id)arg1;
- (void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2;
- (_Bool)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2;
- (void)showQRCodeScannerView;
- (void)proceedWithGetHandleResponse:(id)arg1;
- (void)showPaymentTypeConfirmationForResponse:(id)arg1;
- (void)checkBlockedStatusAndProceedWithGetHandleResponse:(id)arg1;
- (void)processGetVPANameRequest:(id)arg1;
- (void)sendGetVPANameIQForVPA:(id)arg1;
- (void)enterHandleViewController:(id)arg1 didEnterHandle:(id)arg2;
- (void)showSendToHandleView;
- (void)selectAccountViewController:(id)arg1 didSelectAccount:(id)arg2;
- (void)showChooseAccountController;
- (void)participantPicker:(id)arg1 didSelectPayee:(id)arg2;
- (void)participantPickerDidSelectPaymentScanQRCode:(id)arg1;
- (void)participantPickerDidSelectSendToVPA:(id)arg1;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)showChoosePayeeController;
- (_Bool)restoreToPreviousPaymentState;
- (void)continuePaymentFlow;
@property(readonly, nonatomic) _Bool isWaitingForIQ;
- (void)logCurrentState;
- (_Bool)hasUIShown;
- (_Bool)hasState:(unsigned long long)arg1;
- (void)unsetState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

