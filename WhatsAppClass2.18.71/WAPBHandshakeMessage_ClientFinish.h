//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface WAPBHandshakeMessage_ClientFinish : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(nonatomic) _Bool hasStatic_p; // @dynamic hasStatic_p;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;
@property(copy, nonatomic) NSData *static_p; // @dynamic static_p;

@end

