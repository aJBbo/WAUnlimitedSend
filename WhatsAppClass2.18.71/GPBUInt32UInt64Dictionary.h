//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"

@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBUInt32UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithUInt64s:(const unsigned long long *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithUInt64:(unsigned long long)arg1 forKey:(unsigned int)arg2;
+ (id)dictionary;
- (void)removeAll;
- (void)removeUInt64ForKey:(unsigned int)arg1;
- (void)setUInt64:(unsigned long long)arg1 forKey:(unsigned int)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(unsigned int)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

