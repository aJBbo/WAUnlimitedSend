//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WASyncManager;

@protocol WASyncManagerDelegate <NSObject>
- (void)syncManager:(WASyncManager *)arg1 didFinishSyncWithResult:(int)arg2 failureReason:(int)arg3;
@end

