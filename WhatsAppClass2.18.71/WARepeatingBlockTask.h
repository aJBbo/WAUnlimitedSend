//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABlockTask.h"

@class NSObject, WAExactTimer, WAPersistentKeyValueStore, WATaskQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WARepeatingBlockTask : WABlockTask
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    unsigned long long _cancelIndex;
    WAPersistentKeyValueStore *_keyValueStore;
    id _lastRunTimestamp;
    double _delayInterval;
    unsigned long long _mode;
    WATaskQueue *_rescheduleQueue;
    WAExactTimer *_timer;
}

- (void).cxx_destruct;
- (void)saveLastRunTimestamp:(id)arg1;
- (id)loadLastRunTimestamp;
- (void)runTaskFromQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleDelayedRun:(double)arg1;
- (_Bool)scheduleNextRunIfNeeded;
- (void)scheduleTaskOnQueue:(id)arg1 delayInterval:(double)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 keyValueStore:(id)arg2 mode:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;

@end
