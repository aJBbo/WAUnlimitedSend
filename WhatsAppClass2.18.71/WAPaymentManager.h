//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStorage.h"

#import "WAPersistentRequestManagerRegistering-Protocol.h"

@class NSObject, NSString, WAChatManager, WAChatStorage, WAPaymentSettings, WAPaymentSyncPaymentMethodsTask, WAPaymentSyncTransactionTask, WAPaymentUPIPSPConfiguration, WAPersistentKeyValueStore, WAPersistentRequestManager, WARepeatingBlockTask, WATaskQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WAPaymentManager : WAStorage <WAPersistentRequestManagerRegistering>
{
    WAChatManager *_chatManager;
    WAChatStorage *_chatStorage;
    NSObject<OS_dispatch_queue> *_mainDispatchQueue;
    WAPaymentSettings *_paymentSettings;
    WAPersistentKeyValueStore *_persistentKeyValueStore;
    WAPersistentRequestManager *_persistentRequestManager;
    WAPaymentUPIPSPConfiguration *_pspConfiguration;
    WAPaymentSyncPaymentMethodsTask *_taskToSyncPaymentMethods;
    WAPaymentSyncTransactionTask *_taskToSyncTransactions;
    WARepeatingBlockTask *_taskToSyncHandles;
    WARepeatingBlockTask *_taskToSyncBlockedHandles;
    WARepeatingBlockTask *_taskToProcessPendingTransactions;
}

+ (void)fullyResetStateAndResetTOS:(_Bool)arg1;
+ (_Bool)hasPaymentAccount;
+ (_Bool)isSandboxEnabled;
+ (_Bool)isTOSAccepted;
+ (_Bool)isAccountSetup;
+ (void)setSandboxEnabled:(_Bool)arg1;
+ (void)setTosAccepted:(_Bool)arg1;
+ (void)setAccountSetup:(_Bool)arg1;
+ (_Bool)useMainQueueDatabaseConcurrencyType;
+ (id)storeURL;
+ (void)resetReceivedIntentFromJIDs;
+ (void)resetSentIntentToJIDs;
+ (void)fullyResetUPIState;
+ (void)resetUPIPSPConfiguration;
+ (void)resetUPITokenAndListKeysState;
+ (void)saveUPIToken:(id)arg1;
+ (id)UPIToken;
+ (void)saveUPIListKeys:(id)arg1;
+ (id)UPIListKeys;
+ (void)saveUPIHandle:(id)arg1;
+ (id)UPIHandle;
+ (_Bool)hasUserDefaultsValueExpiredForDateKey:(id)arg1 expirationInterval:(double)arg2;
- (void).cxx_destruct;
- (void)updateKVSValue:(id)arg1 forKey:(id)arg2;
- (id)fetchKVSValueForKey:(id)arg1;
@property(copy, nonatomic) NSString *supportPhoneNumber;
- (void)failAllPendingCollectRequests;
- (id)addOrUpdateOutgoingCollectRequestWithCLTransactionId:(id)arg1 amount_1000:(long long)arg2 currency:(id)arg3 receiverJID:(id)arg4 senderHandle:(id)arg5 note:(id)arg6;
- (void)paymentPaidWithAccount:(id)arg1;
- (void)resetUPIPaymentTransactionCacheForTransaction:(id)arg1;
- (id)addOrUpdateOutgoingTransactionForMessageID:(id)arg1 amount_1000:(long long)arg2 currency:(id)arg3 groupJID:(id)arg4 receiverJID:(id)arg5 receiverHandle:(id)arg6 senderJID:(id)arg7 senderHandle:(id)arg8 clTransactionId:(id)arg9 encryptedMpin:(id)arg10 type:(long long)arg11 sourceCredentialId:(id)arg12 messageDate:(id)arg13 chatSessionTransaction:(id)arg14;
- (id)addOrUpdateTransactionFromStanza:(id)arg1 messageID:(id)arg2 messageDate:(id)arg3;
- (id)addOrUpdateTransaction:(id)arg1 forceUpdate:(_Bool)arg2 messageDate:(id)arg3;
- (id)addOrUpdateTransaction:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)postTransactionAddOrUpdateNotificationForTransaction:(id)arg1 isNewTransaction:(_Bool)arg2;
- (id)transactionCache:(id)arg1;
- (id)pendingP2PTransactions;
- (id)transactionsWithStanzaId:(id)arg1;
- (id)transactionWithMessageID:(id)arg1;
- (id)transactionWithId:(id)arg1;
- (id)pendingCollectRequestTransactions:(unsigned long long)arg1;
- (id)transactions:(unsigned long long)arg1;
- (void)persistAccount:(id)arg1;
- (id)accountWithId:(id)arg1;
- (id)accounts;
- (id)defaultPaymentAccount;
- (id)initWithChatManager:(id)arg1 chatStorage:(id)arg2 paymentSettings:(id)arg3 persistentKeyValueStore:(id)arg4 persistentRequestManager:(id)arg5 model:(id)arg6 storeURL:(id)arg7 logIdentifier:(id)arg8 maximumBackgroundContextCount:(unsigned long long)arg9 blacklistBackup:(_Bool)arg10;
- (id)initWithChatManager:(id)arg1 chatStorage:(id)arg2 paymentSettings:(id)arg3 persistentKeyValueStore:(id)arg4 persistentRequestManager:(id)arg5;
- (void)reloadMessageBubblesAfterPaymentTransactionsUpdate:(id)arg1;
- (void)logSelectAccountEventWithEventId:(id)arg1 numberOfAccounts:(unsigned long long)arg2 accountIndexSelected:(unsigned long long)arg3 cancelled:(_Bool)arg4;
- (void)logVerifyPhoneNumberHelperViewEventWithEventId:(id)arg1 verifyTapped:(_Bool)arg2 cancelled:(_Bool)arg3;
- (void)logBankSelectionEventWithEventId:(id)arg1 bankName:(id)arg2 accountsExist:(_Bool)arg3 cancelled:(_Bool)arg4;
- (void)logTOSSelectionEventWithEventId:(id)arg1 accountsExist:(_Bool)arg2 eventType:(long long)arg3;
- (void)logApiEventWithEventId:(id)arg1 errorCode:(id)arg2 errorText:(id)arg3 bankId:(id)arg4 pspId:(id)arg5 requestName:(long long)arg6;
- (void)logTransactionUpdatedEvent:(id)arg1 eventId:(id)arg2 bankId:(id)arg3;
- (void)logTransactionCreatedEvent:(id)arg1 eventId:(id)arg2 bankId:(id)arg3;
- (void)logCheckPinSucceededEventWithEventId:(id)arg1 bankId:(id)arg2 seqNumber:(id)arg3 retryCount:(long long)arg4;
- (void)logCheckPinFailedEventWithEventId:(id)arg1 errorCode:(id)arg2 errorText:(id)arg3 bankId:(id)arg4 seqNumber:(id)arg5 retryCount:(long long)arg6 wam_enum_check_pin_user_error_reason_type:(long long)arg7;
- (void)logGetAccountsEventWithEventId:(id)arg1 errorCode:(id)arg2 errorText:(id)arg3 bankId:(id)arg4 accountsExist:(_Bool)arg5;
- (void)logDeviceBindingEventWithEventId:(id)arg1 errorCode:(id)arg2 errorText:(id)arg3 bankId:(id)arg4 smsRetryCount:(long long)arg5 smsNumber:(id)arg6 requestRetryCount:(long long)arg7 requestRetryDelay:(long long)arg8;
- (void)scheduleProcessPendingTransactions;
- (id)processPendingTransactionsTask;
- (void)postTransactionUpdatedNotification:(id)arg1;
- (id)paymentTransactionsWithStatuses:(id)arg1 types:(id)arg2;
- (id)paymentTransactionsWithStatus:(long long)arg1;
- (_Bool)insertSendPaymentSystemEventForChatJID:(id)arg1;
- (void)insertIntentSentSystemEventForChatJID:(id)arg1;
- (_Bool)insertSetupPaymentAccountSystemEventForChatJID:(id)arg1;
- (void)insertSystemEventForTransaction:(id)arg1 previousStatus:(long long)arg2;
- (id)addOrUpdateBankAccount:(id)arg1;
- (id)accountWithId:(id)arg1 expectedType:(int)arg2 createIfNeeded:(_Bool)arg3;
- (void)removeAllAccounts;
- (void)removeAccountWithId:(id)arg1;
- (void)deleteObjectsSatisfyingRequest:(id)arg1;
- (void)handleDatabaseContext:(id)arg1 queryError:(id)arg2;
- (void)handleDatabaseContext:(id)arg1 saveError:(id)arg2;
- (void)handleTerminalError:(id)arg1;
- (_Bool)saveDatabase:(id *)arg1;
- (void)didCreateDatabase;
- (void)scheduleDeleteExpiredCacheTask;
- (void)cancelBackgroundTasksToSyncDatabase;
- (void)scheduleBackgroundTasksToSyncDatabase;
- (void)scheduleCleanUpBackgroundTasks;
@property(readonly, nonatomic) WATaskQueue *queueForBackgroundTasks;
- (void)notifyAboutRequestCompletion:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
- (void)syncMethodsFromResponse:(id)arg1;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
- (void)cancelSyncTransactionTask;
- (void)scheduleSyncTransactionTask;
- (id)syncTransactionsTask;
- (void)cancelSyncPaymentMethodsTask;
- (void)scheduleSyncPaymetMethodsTask;
- (id)syncPaymentMethodsTask;
- (id)requestTOSAcceptanceState;
- (id)requestTOSAccept;
- (id)requestRemoveCredentialId:(id)arg1 deviceId:(id)arg2 bankCode:(id)arg3 provider:(id)arg4;
- (id)requestGetTransactionsWithBefore:(id)arg1 after:(id)arg2 limit:(long long)arg3;
- (id)requestGetTransactionById:(id)arg1;
- (id)requestGetMethods;
- (id)requestEditDefaultCredentialForDeviceId:(id)arg1 credentialId:(id)arg2 makeDefault:(_Bool)arg3 bankCode:(id)arg4 provider:(id)arg5;
- (id)requestDeleteAccountForDeviceId:(id)arg1 provider:(id)arg2;
- (id)requestCreateAccount;
- (id)requestAccountSetupState;
- (void)handleTransactionNotification:(id)arg1;
- (void)processIncomingPayNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerXMPPNotificationHandler;
- (id)sendUPIUserSetupNotificationForJID:(id)arg1;
- (id)sendUPIIntentToSendNotificationForJID:(id)arg1;
- (void)sendUPIUserSetupNotifications;
- (void)processIncomingUserSetUpNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processIncomingIntentToSendNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerUPIXMPPNotificationHandler;
- (void)removeReceivedIntentFromJID:(id)arg1;
- (void)storeReceivedIntentFromJID:(id)arg1;
- (id)receivedIntentFromJIDs;
- (void)removeSentIntentToJID:(id)arg1;
- (void)storeSentIntentToJID:(id)arg1;
- (id)sentIntentToJIDs;
- (void)registerUPIHandlersForPersistentRequestManager:(id)arg1;
- (id)requestUPIUnblockHandle:(id)arg1;
- (id)requestUPISyncHandles;
- (id)requestUPISetMPINForCredentialId:(id)arg1 deviceId:(id)arg2 transactionId:(id)arg3 otp:(id)arg4 mpin:(id)arg5 atmPin:(id)arg6 lastDigits:(id)arg7 expiryMonth:(id)arg8 expiryYear:(id)arg9 defaultDebit:(_Bool)arg10 defaultCredit:(_Bool)arg11 bankCode:(id)arg12 provider:(id)arg13;
- (id)requestUPISendPaymentForHandle:(id)arg1 usingAccount:(id)arg2 amount_1000:(long long)arg3 currency:(id)arg4 deviceId:(id)arg5 encryptedMpin:(id)arg6 clTransactionId:(id)arg7 merchantCode:(id)arg8 refId:(id)arg9 refUrl:(id)arg10 note:(id)arg11 receiverName:(id)arg12;
- (id)requestUPIRegisterHandleForAccountNumber:(id)arg1 bankInfo:(id)arg2 deviceId:(id)arg3 defaultDebit:(_Bool)arg4 defaultCredit:(_Bool)arg5 bankCode:(id)arg6 provider:(id)arg7;
- (id)requestUPIListKeys;
- (id)requestUPIGetVPAName:(id)arg1 deviceId:(id)arg2;
- (id)requestUPIGetTokenForDeviceId:(id)arg1 tokenType:(id)arg2 challenge:(id)arg3 provider:(id)arg4;
- (id)requestUPIGetHandleForJID:(id)arg1 provider:(id)arg2;
- (id)requestUPIGetBlockedHandles;
- (id)requestUPIGetBanksOfVersion:(id)arg1;
- (id)requestUPIGetAccountsForDeviceId:(id)arg1 bankCode:(id)arg2 provider:(id)arg3;
- (id)requestUPIGenerateOTPForDeviceId:(id)arg1 bankInfo:(id)arg2 bankCode:(id)arg3 provider:(id)arg4;
- (id)requestUPICollectRequestSendToAccount:(id)arg1 amount_1000:(long long)arg2 currency:(id)arg3 deviceId:(id)arg4 senderHandle:(id)arg5 clTransactionId:(id)arg6 note:(id)arg7;
- (id)requestUPICollectRequestRejectWithTransactionId:(id)arg1 deviceId:(id)arg2;
- (id)currentRejectRequestForTransactionId:(id)arg1;
- (id)requestUPICollectRequestAcceptUsingAccount:(id)arg1 transactionId:(id)arg2 deviceId:(id)arg3 encryptedMpin:(id)arg4;
- (id)requestUPICheckMPINForCredentialId:(id)arg1 deviceId:(id)arg2 transactionId:(id)arg3 mpin:(id)arg4 receiverJID:(id)arg5 receiverHandle:(id)arg6 senderHandle:(id)arg7 amount:(id)arg8 bankCode:(id)arg9 provider:(id)arg10;
- (id)requestUPIChangeMPINForCredentialId:(id)arg1 deviceId:(id)arg2 transactionId:(id)arg3 oldMpin:(id)arg4 newMpin:(id)arg5 bankCode:(id)arg6 provider:(id)arg7;
- (id)requestUPIBlockHandle:(id)arg1;
- (id)requestUPIBindDeviceWithId:(id)arg1 verificationData:(id)arg2 bankCode:(id)arg3 provider:(id)arg4;
- (id)requestUPIBatchOfVersion:(id)arg1;
- (id)syncBlockedHandlesTask;
- (void)scheduleSyncBlockedHandlesTask;
- (id)syncHandlesTask;
- (void)scheduleSyncHandlesTask;
- (void)cancelUPIBackgroundTasksToSyncDatabase;
- (void)scheduleUPIBackgroundTasksToSyncDatabase;
- (void)persistBlockedUPIHandlesCache:(id)arg1;
- (void)cacheUnblockedUPIHandleState:(id)arg1;
- (void)cacheBlockedUPIHandleState:(id)arg1;
- (id)cachedBlockedUPIHandles;
- (void)activatePSPConfiguration:(id)arg1;
@property(readonly, nonatomic) WAPaymentUPIPSPConfiguration *activePSPConfiguration;
- (void)updateToP2PCollectRequestWithId:(id)arg1 status:(long long)arg2;
- (void)updateUPIMpinSetState:(_Bool)arg1 account:(id)arg2;
- (void)updateUPIMpinSetState:(_Bool)arg1 accountId:(id)arg2;
- (void)syncUPIHandlesFromXMPPResponse:(id)arg1;
- (void)removeAllUpiHandles;
- (void)removeUpiHandleForJid:(id)arg1 saveMOC:(_Bool)arg2;
- (id)addOrUpdateUPIHandleFromXMPPResponse:(id)arg1 saveMOC:(_Bool)arg2;
- (id)upiHandleForJid:(id)arg1;
- (id)defaultUPIPaymentAccount;
- (id)upiAccounts;
- (id)upiAccountWithId:(id)arg1;
- (id)upiAccountForAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

