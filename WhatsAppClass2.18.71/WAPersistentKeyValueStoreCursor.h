//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WAPersistentKeyValueStoreCursor : NSObject
{
    NSDate *_lastDate;
    NSString *_lastKey;
    _Bool _mightHaveMore;
    NSString *_keyNamespace;
    unsigned long long _batchSize;
}

@property(readonly, nonatomic) _Bool mightHaveMore; // @synthesize mightHaveMore=_mightHaveMore;
@property(readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, copy, nonatomic) NSString *keyNamespace; // @synthesize keyNamespace=_keyNamespace;
- (void).cxx_destruct;
- (id)initWithNamespace:(id)arg1 batchSize:(unsigned long long)arg2;

@end

