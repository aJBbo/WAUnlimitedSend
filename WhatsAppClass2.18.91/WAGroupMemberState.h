//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface WAGroupMemberState : NSObject <NSCopying>
{
    unsigned long long _context;
    NSError *_error;
}

+ (id)forContext:(unsigned long long)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
- (id)initWithContext:(unsigned long long)arg1;

@end

