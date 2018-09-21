//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASpotlightIndexer.h"

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WAContactSpotlightIndexer : WASpotlightIndexer
{
    NSUserDefaults *_userDefaults;
}

@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)removeAllItemsImpl;
- (void)removeAllItems;
- (void)assignManager:(id)arg1;
- (id)searchableItemForIndexableItem:(id)arg1 usingItemIdentifier:(id)arg2;
- (id)internalChatPresenterForItemIdentifier:(id)arg1;
- (id)initWithStorage:(id)arg1;

@end

