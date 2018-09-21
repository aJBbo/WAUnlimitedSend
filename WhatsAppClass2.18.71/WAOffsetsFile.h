//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface WAOffsetsFile : NSObject
{
    NSFileHandle *_handle;
    unsigned long long *_offsets;
    unsigned long long _lastChangedBlock;
    _Bool _readOnly;
    unsigned long long _maximumCount;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (unsigned long long)blockForIndex:(unsigned long long)arg1;
- (void)save;
- (void)invalidateFromIndex:(unsigned long long)arg1;
- (void)loadBlock:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)offsetAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 readOnly:(_Bool)arg2 maximumCount:(unsigned long long)arg3;
- (id)initWithPath:(id)arg1 readOnly:(_Bool)arg2 maximumCount:(unsigned long long)arg3;
- (id)initWithReadOnlyPath:(id)arg1;
- (id)initWithUpdatablePath:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1 andCount:(unsigned long long)arg2;
- (id)init;

@end

