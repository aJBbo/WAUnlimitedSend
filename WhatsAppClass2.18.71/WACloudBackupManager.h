//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAUpgradeCallback-Protocol.h"

@class NSString, WAActionManager, WAAutoBackupSettings, WABackup, WABackupErrorManager, WABackupKeyManager, WACloudStatus, WAPreviousBackup, WARestore, WAUploadedBackup, XMPPPassiveModeExclusiveConnection;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WACloudBackupManager : NSObject <WAUpgradeCallback>
{
    id _uploadListener;
    WABackupKeyManager *_keyManager;
    unsigned long long _waitingBackgroundTask;
    unsigned long long _actionBackgroundTask;
    XMPPPassiveModeExclusiveConnection *_exclusiveConnection;
    _Bool _didChangeAccountRecently;
    _Bool _backingUp;
    _Bool _restoring;
    WACloudStatus *_uploadStatus;
    WACloudStatus *_downloadStatus;
    WABackupErrorManager *_errorManager;
    WAAutoBackupSettings *_autoBackupSettings;
    WAPreviousBackup *_previousBackup;
    WAUploadedBackup *_uploadedBackup;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    WAActionManager *_currentAction;
    id _ubiquityIdentityToken;
}

+ (void)checkForCrash;
+ (void)stopWatchingForCrash;
+ (void)startWatchingForCrash;
+ (id)userDefaultsToInclude;
+ (void)addUserDefaults:(id)arg1;
+ (void)addUserDefault:(id)arg1;
+ (unsigned long long)originalFileIndexForPaths:(id)arg1 relativeToPath:(id)arg2;
+ (_Bool)setOriginalFileAtPath:(id)arg1 usingRelativePath:(id)arg2;
+ (_Bool)setOriginalAttribute:(id)arg1 forHandle:(id)arg2;
+ (id)originalAttributeForHandle:(id)arg1 error:(out id *)arg2;
+ (_Bool)supported;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (id)sharedManager;
@property(retain, nonatomic) id ubiquityIdentityToken; // @synthesize ubiquityIdentityToken=_ubiquityIdentityToken;
@property(readonly, nonatomic) WAActionManager *currentAction; // @synthesize currentAction=_currentAction;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(nonatomic, getter=isBackingUp) _Bool backingUp; // @synthesize backingUp=_backingUp;
@property(readonly, nonatomic) WAUploadedBackup *uploadedBackup; // @synthesize uploadedBackup=_uploadedBackup;
@property(readonly, nonatomic) WAPreviousBackup *previousBackup; // @synthesize previousBackup=_previousBackup;
@property(readonly, nonatomic) WAAutoBackupSettings *autoBackupSettings; // @synthesize autoBackupSettings=_autoBackupSettings;
@property(readonly, nonatomic) WABackupErrorManager *errorManager; // @synthesize errorManager=_errorManager;
@property(nonatomic) _Bool didChangeAccountRecently; // @synthesize didChangeAccountRecently=_didChangeAccountRecently;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReadyForBackup) _Bool readyForBackup;
- (_Bool)checkFailureReason:(out id *)arg1;
- (void)startBackup;
- (void)endWaitingBackgroundTask;
- (void)cancelScheduledBackup;
- (void)scheduleBackup;
- (void)applicationWillTerminate:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)willEndForegroundTask:(id)arg1;
- (void)unregisterForAutoBackup;
- (void)registerForAutoBackup;
- (_Bool)evictFiles;
- (void)postLoadOverrideExpiredNotification;
- (void)clearAccountChangedRecently;
- (void)markAccountChanged;
- (void)ubiquityIdentityTokenDidChange;
- (void)loadUbiquityIdentityToken;
- (void)ubiquityIdentityTokenChanged:(id)arg1;
- (void)runDeleteBackup:(id)arg1 withOptions:(unsigned long long)arg2 encounteredErrors:(id)arg3 inGroup:(id)arg4;
- (void)deleteBackup:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createDownloadOperationWithRestore:(id)arg1;
- (id)createUploadOperationWithBackup:(id)arg1 fromOperation:(id)arg2;
- (void)restoreWithOptions:(unsigned long long)arg1 usingCloudStatus:(id)arg2 andBackupInformation:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) WARestore *currentRestore;
- (void)backupWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) WABackup *currentBackup;
- (void)startCurrentAction;
- (void)action:(Class)arg1 withChatStorage:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportUploadStatusFinished:(id)arg1;
- (void)reportUploadStatusInProgress:(id)arg1;
- (void)listenForUploadCompletion;
- (id)createPreviousBackup;
@property(readonly, copy, nonatomic) NSString *uploadedBackupPath;
@property(readonly, nonatomic) NSString *persistentDataFilePath;
@property(readonly, nonatomic) NSString *mediaPath;
- (void)cleanTemporaryFiles;
@property(readonly) NSString *localRestorePath;
@property(readonly) NSString *localBackupPath;
@property(readonly, nonatomic) unsigned long long temporaryBackupSize;
@property(readonly, nonatomic) WACloudStatus *downloadStatus; // @synthesize downloadStatus=_downloadStatus;
- (id)createDownloadStatus;
@property(readonly, nonatomic) WACloudStatus *uploadStatus; // @synthesize uploadStatus=_uploadStatus;
- (id)createUploadStatus;
@property(readonly, nonatomic, getter=isUserRegistered_cached) _Bool userRegistered_cached;
@property(readonly, nonatomic, getter=isUserRegistered) _Bool userRegistered;
@property(readonly, nonatomic) _Bool initialized;
@property(readonly, nonatomic) _Bool availableEstimate;
@property(readonly, nonatomic) _Bool available;
- (void)dealloc;
- (void)finishRestore;
@property(nonatomic) _Bool needsConnection;
- (void)prepare;
- (id)initWithAutoBackupSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

