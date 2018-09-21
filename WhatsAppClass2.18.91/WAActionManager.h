//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSOperationQueue, NSString, WAFinishOperation, WATriggeredOperation;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface WAActionManager : NSObject
{
    NSOperationQueue *_queue;
    unsigned long long _options;
    // Error parsing type: AB, name: _canceling
    // Error parsing type: AB, name: _finishing
    NSString *_temporaryFilePath;
    // Error parsing type: AQ, name: _temporaryFileIndex
    NSObject<OS_dispatch_group> *_temporaryFileRemovalGroup;
    NSMutableDictionary *_phaseOperations;
    NSLock *_updatePhaseLock;
    unsigned long long _latestPhase;
    WATriggeredOperation *_wait;
    WAFinishOperation *_finish;
    unsigned long long _phase;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
- (void).cxx_destruct;
@property(readonly, nonatomic) float progress;
- (float)progressForOperations:(id)arg1;
- (void)setOperations:(id)arg1 forPhase:(unsigned long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) unsigned long long maximumPhase;
- (void)incrementPhase;
- (void)setPhase:(unsigned long long)arg1;
- (void)manuallyUpdatePhaseTo:(unsigned long long)arg1;
- (void)updatePhase;
- (void)endDeferringTemporaryDirectoryRemoval;
- (void)beginDeferringTemporaryDirectoryRemoval;
- (void)scheduleTemporaryDirectoryRemoval;
- (id)uniqueTemporaryPath;
- (_Bool)shouldFinish;
@property(readonly) _Bool canceled;
- (_Bool)shouldCancel;
- (void)cancelWithReason:(unsigned long long)arg1;
- (id)errorForCode:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *errorDomain;
- (void)completeWithReason:(unsigned long long)arg1;
- (void)addOperations:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)start;
- (_Bool)checkOption:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

