//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WARankingStorageDelegate-Protocol.h"

@class WAChatSessionTransactionListener, WARankingStorage;

__attribute__((visibility("hidden")))
@interface WARankingManager : NSObject <WARankingStorageDelegate>
{
    WARankingStorage *_rankingStore;
    WAChatSessionTransactionListener *_participantsListener;
}

- (void).cxx_destruct;
- (void)rankStatusChatSessions:(id)arg1;
- (void)rankStatusChatSessions;
- (void)updateLinkedIDsForGroupJID:(id)arg1 memberJID:(id)arg2 isParticipant:(_Bool)arg3;
- (id)rankingStorage:(id)arg1 needsLinksForMetricSetWithKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)jidForJidKey:(id)arg1;
- (id)jidForKey:(id)arg1;
- (id)keyForJID:(id)arg1;
- (void)logEvent:(id)arg1 forKey:(id)arg2 value:(double)arg3;
- (void)logEvent:(id)arg1 forJID:(id)arg2 value:(double)arg3;
- (void)logEvent:(id)arg1 forJID:(id)arg2;
- (id)init;

@end

