//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface WAJID : NSObject
{
    NSString *_user;
    unsigned long long _domain;
    // Error parsing type: AQ, name: _stringRepresentation
}

- (void).cxx_destruct;
@property(readonly, getter=isUserValid) _Bool userValid;
@property(readonly, copy) NSString *stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly) unsigned long long domain;
@property(readonly, copy) NSString *user;
- (id)initWithUser:(id)arg1 domain:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isPSA) _Bool psa;
@property(readonly, copy) NSData *dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;
@property(readonly, nonatomic) unsigned long long statusType;

@end

