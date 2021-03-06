//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABackupViewControllerCloudDriveDataProvider.h"

@class NSError, WABackup, WABackupErrorManager, WABackupViewControllerDataProviderButton, WACloudBackupManager, WACloudStatus, WAWeakTimer;

__attribute__((visibility("hidden")))
@interface WABackupViewControllerStandardDataProvider : WABackupViewControllerCloudDriveDataProvider
{
    WACloudBackupManager *_backupManager;
    WABackupErrorManager *_errorManager;
    WABackup *_currentBackup;
    id _currentBackupObserver;
    WAWeakTimer *_currentBackupTimer;
    WACloudStatus *_currentCloudStatus;
    id _currentCloudStatusListener;
    NSError *_currentError;
    id _currentErrorObserver;
    WABackupViewControllerDataProviderButton *_buttonErrorNotSignedIn;
    WABackupViewControllerDataProviderButton *_buttonErrorOther;
    WABackupViewControllerDataProviderButton *_buttonBackUpNow;
    WABackupViewControllerDataProviderButton *_buttonBackUpDisabled;
    WABackupViewControllerDataProviderButton *_buttonPaused;
    WABackupViewControllerDataProviderButton *_buttonInProgress;
}

- (void).cxx_destruct;
- (void)startBackupAction;
- (unsigned long long)updateStatusProperties:(unsigned long long)arg1;
- (unsigned long long)updateErrorButton;
- (unsigned long long)internalUpdateProperties:(unsigned long long)arg1;
- (void)muteBadgeIfNeeded;
- (void)viewDidAppear;
- (void)dealloc;
- (id)initWithBackupViewController:(id)arg1;

@end

