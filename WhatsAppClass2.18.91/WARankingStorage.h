//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStorage.h>

@class NSMutableDictionary;
@protocol WARankingStorageDelegate;

__attribute__((visibility("hidden")))
@interface WARankingStorage : WAStorage
{
    NSMutableDictionary *_pendingLinkUpdates;
    id <WARankingStorageDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)unlinkKeys:(id)arg1 fromMetricSet:(id)arg2;
- (void)linkKeys:(id)arg1 toMetricSet:(id)arg2;
- (void)clearPendingLinkUpdateForMetricSetWithKey:(id)arg1;
- (void)enqueueLinkChangeForKey:(id)arg1;
- (void)updateLinksForMetricSetWithKey:(id)arg1 linkKeys:(id)arg2 unlinkKeys:(id)arg3;
- (void)unlinkKeys:(id)arg1 fromKey:(id)arg2;
- (void)linkKeys:(id)arg1 toKey:(id)arg2;
- (void)regenerateLinksIfNeededForMetricSetWithKey:(id)arg1;
- (void)populateLinksForMetricSetWithKey:(id)arg1;
- (id)fetchRequestForKeys:(id)arg1;
- (id)metricSetsWithKeys:(id)arg1 create:(_Bool)arg2 shouldValidateLinks:(_Bool)arg3 context:(id)arg4 fetchRequest:(id)arg5;
- (id)metricSetsForLinkingWithKeys:(id)arg1 create:(_Bool)arg2;
- (id)metricSetForLinkingWithKey:(id)arg1 create:(_Bool)arg2;
- (id)metricSetForFlaggingWithKey:(id)arg1 context:(id)arg2;
- (id)metricSetsForRankingWithKeys:(id)arg1 context:(id)arg2;
- (id)metricSetsForLoggingWithKeys:(id)arg1;
- (void)performRankingBlock:(CDUnknownBlockType)arg1;
- (void)performSavedPrimaryContextBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performLoggingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;

@end

