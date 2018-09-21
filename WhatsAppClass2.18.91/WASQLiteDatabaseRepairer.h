//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAWeakTimer;

__attribute__((visibility("hidden")))
@interface WASQLiteDatabaseRepairer : NSObject
{
    _Bool _databaseRepairInProgress;
    CDUnknownBlockType _progressHandler;
    NSString *_sourceFilePath;
    NSString *_outputFilePath;
    NSString *_dumpFilePath;
    WAWeakTimer *_progressTrackingTimer;
    unsigned long long _backgroundTaskID;
    double _repairStartTime;
}

+ (unsigned long long)estimatedDiskSpaceRequiredToRepairDatabaseAtPath:(id)arg1;
- (void).cxx_destruct;
- (void)restoreFromDump;
- (_Bool)isDumpFileValid;
- (void)dumpDatabase;
- (void)finishWithStatus:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAfterDisconnectingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)repairDatabaseAtPath:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportProgress:(float)arg1;
- (void)stopTrackingFileSize;
- (void)startTrackingSizeOfFileAtPath:(id)arg1 estimatedSize:(unsigned long long)arg2 offset:(float)arg3 range:(float)arg4;
- (void)stopFakeProgressTracking;
- (void)startFakeProgressTrackingWithDuration:(double)arg1 offset:(float)arg2 range:(float)arg3;
- (void)stopTimer;

@end

