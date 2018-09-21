//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStorage.h>

@class WAPaymentSettings;
@protocol WAPaymentStorageDelegate;

__attribute__((visibility("hidden")))
@interface WAPaymentStorage : WAStorage
{
    WAPaymentSettings *_paymentSettings;
    id <WAPaymentStorageDelegate> _delegate;
}

+ (id)databaseURL;
+ (_Bool)useMainQueueDatabaseConcurrencyType;
- (void).cxx_destruct;
- (void)deleteTransactionCachesOlderThan:(double)arg1;
- (void)deleteCacheForTransaction:(id)arg1;
- (void)addOrUpdateCacheForTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)transactionCache:(id)arg1;
- (void)removeAccountWithId:(id)arg1;
- (void)persistAccount:(id)arg1;
- (id)addOrUpdateBankAccount:(id)arg1;
- (void)updatePaymentAccount:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)accountWithId:(id)arg1 expectedType:(int)arg2 createIfNeeded:(_Bool)arg3;
- (id)accountWithId:(id)arg1;
- (id)accounts;
- (id)defaultPaymentAccount;
- (void)deleteObjectsSatisfyingRequest:(id)arg1;
- (void)handleDatabaseContext:(id)arg1 queryError:(id)arg2;
- (void)handleDatabaseContext:(id)arg1 saveError:(id)arg2;
- (_Bool)saveDatabase:(id *)arg1;
- (void)didCreateDatabase;
- (void)handleTerminalError:(id)arg1;
- (id)initWithPaymentSettings:(id)arg1 delegate:(id)arg2 model:(id)arg3 storeURL:(id)arg4 logIdentifier:(id)arg5 maximumBackgroundContextCount:(unsigned long long)arg6 blacklistBackup:(_Bool)arg7;
- (id)initWithPaymentSettings:(id)arg1 delegate:(id)arg2;

@end

