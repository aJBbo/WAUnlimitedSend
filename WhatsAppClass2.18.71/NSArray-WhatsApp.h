//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (WhatsApp)
- (id)wa_arrayByMergingSortedArray:(id)arg1 insertionIndexes:(out id *)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)wa_minimumObjectUsingBlock:(CDUnknownBlockType)arg1;
- (id)wa_maximumObjectUsingBlock:(CDUnknownBlockType)arg1;
- (id)wa_maximumObject;
- (id)wa_minimumObject;
- (id)wa_arrayByKeepingFirstN:(unsigned long long)arg1;
- (id)wa_arrayByRemovingObject:(id)arg1;
- (id)wa_arrayByDroppingFirstN:(unsigned long long)arg1;
- (id)wa_minimumUsingSelector:(SEL)arg1;
- (id)wa_classifyWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_reduceWithInitialValue:(id)arg1 nextValueBlock:(CDUnknownBlockType)arg2;
- (id)wa_flattenedArray;
- (id)wa_flatMapWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_mapWithBlock:(CDUnknownBlockType)arg1;
- (id)wa_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)wa_anyObjectPassesTest:(CDUnknownBlockType)arg1;
- (id)wa_filteredArrayUsingBlock:(CDUnknownBlockType)arg1;
- (id)wa_joinedSentences;
- (id)wa_randomObject;
- (id)wa_shuffledArray;
@end

