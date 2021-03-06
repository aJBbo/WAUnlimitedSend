//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatStorageManagedObject.h"

#import "WAContactable-Protocol.h"

@class NSNumber, NSString, WAChatSession;

__attribute__((visibility("hidden")))
@interface WAGroupMember : WAChatStorageManagedObject <WAContactable>
{
    _Bool _blocked;
    NSString *_statusMessage;
}

@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUnknownContact) _Bool unknownContact;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) WAChatSession *chatSession; // @dynamic chatSession;
@property(nonatomic) int contactABID; // @dynamic contactABID;
@property(copy, nonatomic) NSString *contactIdentifier; // @dynamic contactIdentifier;
@property(nonatomic) _Bool isActive; // @dynamic isActive;
@property(nonatomic) _Bool isAdmin; // @dynamic isAdmin;
@property(copy, nonatomic) NSString *memberJID; // @dynamic memberJID;
@property(retain, nonatomic) NSNumber *senderKeySent; // @dynamic senderKeySent;

@end

