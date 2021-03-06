//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAPersistentRequestManager;

__attribute__((visibility("hidden")))
@interface WAStatusAdsLoggingManager : NSObject
{
    WAPersistentRequestManager *_persistentRequestManager;
}

- (void).cxx_destruct;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
- (void)logStatusViewerExitAtStatusAd:(id)arg1 timeSpent:(double)arg2 exitOrigin:(long long)arg3;
- (void)logStatusAdImpression:(id)arg1 timeSpent:(double)arg2;
- (id)initWithPersistentRequestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

