//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATask.h>

@class NSDate, WAChatStorage, WAExactTimer;

__attribute__((visibility("hidden")))
@interface WARemoveExpiredMessagesTask : WATask
{
    short _deletionType;
    WAChatStorage *_chatStorage;
    WAExactTimer *_exactTimer;
    unsigned long long _fetchLimit;
    id _oldestMessageDate;
}

- (void).cxx_destruct;
- (void)runTaskFromQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)deleteSomeStatusMessagesBefore:(id)arg1 inContext:(id)arg2;
- (id)findSomeExpiredMessagesBefore:(id)arg1 inContext:(id)arg2;
- (id)oldestDateUsingMarker:(_Bool)arg1 inContext:(id)arg2;
- (void)queryOldestMessageDateIfNeeded;
- (void)markerDateDidChange;
- (_Bool)didMessageDateExpire:(id)arg1;
- (_Bool)addPotentialOldestMessageDate:(id)arg1 taskQueue:(id)arg2;
@property(readonly, nonatomic) NSDate *oldestMessageDate;
- (id)initWithDeletionType:(short)arg1 chatStorage:(id)arg2;

@end

