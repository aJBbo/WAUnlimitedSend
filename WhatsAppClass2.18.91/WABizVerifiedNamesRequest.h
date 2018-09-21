//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPersistentRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WABizVerifiedNamesRequest : WAPersistentRequest
{
    NSString *_jid;
    long long _counter;
}

+ (id)identifierPrefixForJID:(id)arg1;
@property(readonly, nonatomic) long long counter; // @synthesize counter=_counter;
@property(readonly, copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)handleRequestError:(id)arg1;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canBegin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJID:(id)arg1 initialDelay:(double)arg2 counter:(long long)arg3;
- (id)initWithJID:(id)arg1 initialDelay:(double)arg2;

@end

