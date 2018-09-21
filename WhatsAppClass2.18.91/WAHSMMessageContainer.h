//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString, WAMessageID, WAPBMessage_HighlyStructuredMessage;

__attribute__((visibility("hidden")))
@interface WAHSMMessageContainer : NSObject <NSCopying>
{
    _Bool _futureproofed;
    WAMessageID *_messageID;
    NSString *_pushName;
    WAPBMessage_HighlyStructuredMessage *_messageData;
    NSString *_certificateSerial;
    NSNumber *_notificationBehavior;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSNumber *notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property(nonatomic, getter=isFutureproofed) _Bool futureproofed; // @synthesize futureproofed=_futureproofed;
@property(copy, nonatomic) NSString *certificateSerial; // @synthesize certificateSerial=_certificateSerial;
@property(copy, nonatomic) WAPBMessage_HighlyStructuredMessage *messageData; // @synthesize messageData=_messageData;
@property(copy, nonatomic) NSString *pushName; // @synthesize pushName=_pushName;
@property(copy, nonatomic) WAMessageID *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

