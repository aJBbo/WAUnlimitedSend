//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_WASearchResultSection.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _WAContactsResultSection : _WASearchResultSection
{
    NSArray *_allContacts;
}

@property(copy, nonatomic) NSArray *allContacts; // @synthesize allContacts=_allContacts;
- (void).cxx_destruct;
- (void)searchWithChatSection:(id)arg1 insertedIndexes:(out id *)arg2;
- (Class)objectClass;
- (_Bool)isObjectValid:(id)arg1;

@end

