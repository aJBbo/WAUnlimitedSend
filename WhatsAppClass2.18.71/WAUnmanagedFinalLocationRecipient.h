//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAFinalLocationRecipient-Protocol.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WAUnmanagedFinalLocationRecipient : NSObject <WAFinalLocationRecipient>
{
    NSString *jid;
    NSString *chatJID;
    NSString *messageID;
    NSDate *expiration;
}

@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID;
@property(copy, nonatomic) NSString *chatJID; // @synthesize chatJID;
@property(copy, nonatomic) NSString *jid; // @synthesize jid;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

