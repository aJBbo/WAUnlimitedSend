//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WASignalAddress : NSObject
{
    struct signal_protocol_sender_key_name *_sender_key_name;
    NSString *_userJid;
    NSString *_groupJid;
}

@property(readonly, nonatomic) NSString *groupJid; // @synthesize groupJid=_groupJid;
@property(readonly, nonatomic) NSString *userJid; // @synthesize userJid=_userJid;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToWASignalAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (struct signal_protocol_sender_key_name *)senderKeyName;
- (struct signal_protocol_address *)signalAddress;
- (id)initWithUserJid:(id)arg1 groupJid:(id)arg2;
- (id)initWithUserJid:(id)arg1;

@end

