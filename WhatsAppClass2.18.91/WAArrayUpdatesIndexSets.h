//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface WAArrayUpdatesIndexSets : NSObject
{
    NSMutableIndexSet *_insertedIndexes;
    NSMutableIndexSet *_updatedIndexes;
    NSMutableIndexSet *_removedIndexes;
}

- (void).cxx_destruct;
- (id)mutableCopy;
- (id)copy;
@property(readonly, nonatomic) _Bool hasUpdatedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *updatedIndexes;
@property(readonly, nonatomic) _Bool hasRemovedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *removedIndexes;
@property(readonly, nonatomic) _Bool hasInsertedIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
- (id)initWithInsertedIndexes:(id)arg1 updatedIndexes:(id)arg2 removedIndexes:(id)arg3;
- (id)init;

@end

