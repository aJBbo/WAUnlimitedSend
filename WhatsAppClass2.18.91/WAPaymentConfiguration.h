//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAChatSession, WAMessage, WARichText;
@protocol WAPaymentSettingsData;

__attribute__((visibility("hidden")))
@interface WAPaymentConfiguration : NSObject
{
    // Error parsing type: , name: amount_1000
    // Error parsing type: , name: chatSession
    // Error parsing type: , name: currency
    // Error parsing type: , name: isAmountEditable
    // Error parsing type: , name: maximumAmount_1000
    // Error parsing type: , name: minimumAmount_1000
    // Error parsing type: , name: note
    // Error parsing type: , name: quotedMessage
    // Error parsing type: , name: receiverJID
    // Error parsing type: , name: requestMessageID
    // Error parsing type: , name: settingsData
    // Error parsing type: , name: type
    // Error parsing type: , name: canChangeType
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithSettingsData:(id)arg1 amount_1000:(long long)arg2 chatSession:(id)arg3 note:(id)arg4 quotedMessage:(id)arg5 receiverJID:(id)arg6;
- (id)initWithSettingsData:(id)arg1;
- (id)init;
@property(nonatomic) _Bool canChangeType; // @synthesize canChangeType;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic, readonly) id <WAPaymentSettingsData> settingsData; // @synthesize settingsData;
@property(nonatomic, copy) NSString *requestMessageID; // @synthesize requestMessageID;
@property(nonatomic, copy) NSString *receiverJID; // @synthesize receiverJID;
@property(nonatomic, retain) WAMessage *quotedMessage; // @synthesize quotedMessage;
@property(nonatomic, retain) WARichText *note; // @synthesize note;
@property(nonatomic) long long minimumAmount_1000; // @synthesize minimumAmount_1000;
@property(nonatomic) long long maximumAmount_1000; // @synthesize maximumAmount_1000;
@property(nonatomic) _Bool isAmountEditable; // @synthesize isAmountEditable;
@property(nonatomic, copy) NSString *currency; // @synthesize currency;
@property(nonatomic, retain) WAChatSession *chatSession; // @synthesize chatSession;
@property(nonatomic) long long amount_1000; // @synthesize amount_1000;

@end

