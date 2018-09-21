//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet;
@protocol WALocationUpdateHandler;

__attribute__((visibility("hidden")))
@interface WALocationUpdateThrottler : NSObject
{
    NSMutableSet *_selectedJIDs;
    NSMutableOrderedSet *_queuedJIDs;
    NSMutableDictionary *_queuedUpdates;
    id <WALocationUpdateHandler> _updateHandler;
    long long _batchSize;
}

@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) __weak id <WALocationUpdateHandler> updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (_Bool)willRemove:(id)arg1;
- (_Bool)willAdd:(id)arg1;
- (id)queuedParticipantsLocations;
- (_Bool)setLocation:(id)arg1 forJid:(id)arg2 lastUpdateDate:(id)arg3;
- (void)rotateSelection;
- (id)init;

@end

