//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FMDatabase, NSArray, NSNumber, NSString, WASearchEngine, WAStorage;

@protocol WASearchEngineDelegate <NSObject>
- (void)searchEngineDidDeleteDatabase:(WASearchEngine *)arg1;
- (void)searchEngineWillDeleteDatabase:(WASearchEngine *)arg1;
- (void)searchEngineDidPerformQuery:(WASearchEngine *)arg1;
- (NSString *)searchEngineSearchResultOrderColumn:(WASearchEngine *)arg1;
- (NSArray *)searchEngineMetadataFieldsToSelect:(WASearchEngine *)arg1;
- (NSArray *)searchEngineExtraColumnsForFullTextSearch:(WASearchEngine *)arg1;
- (NSArray *)searchEngineNewlyAddedMetadataColumns:(WASearchEngine *)arg1;
- (NSArray *)searchEngineExtraMetadataColumns:(WASearchEngine *)arg1;
- (void)searchEngine:(WASearchEngine *)arg1 didIndexObject:(id)arg2 externalDocID:(NSNumber *)arg3;
- (void)searchEngine:(WASearchEngine *)arg1 didFailToIndexObject:(id)arg2 externalDocID:(NSNumber *)arg3;
- (_Bool)searchEngine:(WASearchEngine *)arg1 executeMetadataInsertTo:(FMDatabase *)arg2 internalDocID:(long long)arg3 userInfo:(id)arg4;
- (long long)searchEngine:(WASearchEngine *)arg1 externalDocIDForObject:(id)arg2;
- (id)searchEngine:(WASearchEngine *)arg1 executeInsertTo:(FMDatabase *)arg2 object:(id)arg3 contents:(NSString *)arg4;
- (NSString *)searchEngine:(WASearchEngine *)arg1 indexableContentForObject:(id)arg2;
- (_Bool)searchEngine:(WASearchEngine *)arg1 isValidObject:(id)arg2;
- (_Bool)searchEngine:(WASearchEngine *)arg1 internalQueryForMaximumDocID:(id *)arg2 storage:(WAStorage *)arg3;
@end

