//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPStanza.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface XMPPPresenceStanza : XMPPStanza
{
}

+ (unsigned long long)presenceForString:(id)arg1;
+ (id)stringForPresence:(unsigned long long)arg1;
+ (id)stringsForPresences;
+ (id)stanzaWithPresence:(unsigned long long)arg1 nickname:(id)arg2;
- (id)log;
@property(copy, nonatomic) NSString *nickname;
@property(nonatomic) unsigned long long presence;
- (id)initWithPresence:(unsigned long long)arg1 toJID:(id)arg2;

@end

