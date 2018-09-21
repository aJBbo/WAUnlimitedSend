//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, WABackupViewControllerDataProvider;

@protocol WABackupViewControllerDataProviderDelegate <NSObject>
- (void)dataProvider:(WABackupViewControllerDataProvider *)arg1 didUpdateStatusMessage:(NSString *)arg2;
- (void)dataProvider:(WABackupViewControllerDataProvider *)arg1 didUpdateAnimation:(_Bool)arg2;
- (void)dataProvider:(WABackupViewControllerDataProvider *)arg1 didUpdateButtons:(NSArray *)arg2;
- (void)dataProvider:(WABackupViewControllerDataProvider *)arg1 didUpdateError:(NSError *)arg2 withAction:(void (^)(void))arg3;
- (void)dataProviderDidFinishSendingUpdates:(WABackupViewControllerDataProvider *)arg1;
- (void)dataProviderWillStartSendingUpdates:(WABackupViewControllerDataProvider *)arg1;
@end

