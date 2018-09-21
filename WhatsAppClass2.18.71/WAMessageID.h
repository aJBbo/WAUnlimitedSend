//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WAMessageID : NSObject
{
    _Bool _isFromMe;
    NSString *_stanzaID;
    NSString *_remoteJID;
    NSString *_participantJID;
}

+ (_Bool)supportsSecureCoding;
+ (id)generateForFromJID:(id)arg1;
@property(readonly, nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(readonly, nonatomic) NSString *participantJID; // @synthesize participantJID=_participantJID;
@property(readonly, nonatomic) NSString *remoteJID; // @synthesize remoteJID=_remoteJID;
@property(readonly, nonatomic) NSString *stanzaID; // @synthesize stanzaID=_stanzaID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualImplWithStanzaId:(id)arg1 remoteJID:(id)arg2 participantJid:(id)arg3 fromMe:(_Bool)arg4;
- (_Bool)isEqualToWAMessageID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *threadIdentifier;
@property(readonly, nonatomic) NSString *authorJID;
@property(readonly, nonatomic) NSString *chatJID;
@property(readonly, nonatomic) NSString *toJID;
@property(readonly, nonatomic) NSString *fromJID;
- (id)uniqueKey;
- (_Bool)hasSameIdentityAsMessage:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithUniqueKey:(id)arg1;
- (id)initWithStanzaID:(id)arg1 remoteJID:(id)arg2 participant:(id)arg3 isFromMe:(_Bool)arg4;

@end

