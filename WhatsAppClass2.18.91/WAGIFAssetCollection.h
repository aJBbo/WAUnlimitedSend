//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, WAGIFBatchToken;

__attribute__((visibility("hidden")))
@interface WAGIFAssetCollection : NSObject
{
    NSMutableArray *_assets;
    long long _startIndexOfLastBatch;
    NSMutableIndexSet *_modifiedRows;
    NSMutableIndexSet *_insertedRows;
    long long _rowSize;
    _Bool _loading;
    _Bool _noMoreResults;
    WAGIFBatchToken *_nextBatchToken;
    long long _numberOfBatches;
}

@property(readonly, nonatomic) NSIndexSet *insertedRows; // @synthesize insertedRows=_insertedRows;
@property(readonly, nonatomic) NSIndexSet *modifiedRows; // @synthesize modifiedRows=_modifiedRows;
@property(readonly, nonatomic) long long numberOfBatches; // @synthesize numberOfBatches=_numberOfBatches;
@property(readonly, nonatomic) _Bool noMoreResults; // @synthesize noMoreResults=_noMoreResults;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) WAGIFBatchToken *nextBatchToken; // @synthesize nextBatchToken=_nextBatchToken;
- (void).cxx_destruct;
- (long long)rankOfIndex:(id)arg1;
- (long long)numberOfAssetsInRow:(long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (_Bool)indexNearEnd:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)removeAllAssets;
- (id)assetAtIndex:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithRowSize:(long long)arg1;

@end

