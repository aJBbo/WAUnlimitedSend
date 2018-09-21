//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;
@protocol WAServerDate;

__attribute__((visibility("hidden")))
@interface WAPaymentTransactionMetadata : NSObject <NSCopying>
{
    _Bool _collectRequest;
    NSString *_counter;
    NSDate<WAServerDate> *_expiryTimestamp;
    NSDate<WAServerDate> *_lastStatusTimestamp;
    long long _previousStatus;
    NSString *_receiverHandle;
    NSString *_senderHandle;
    NSString *_seqNumber;
    NSString *_referenceMessageID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *referenceMessageID; // @synthesize referenceMessageID=_referenceMessageID;
@property(copy, nonatomic) NSString *seqNumber; // @synthesize seqNumber=_seqNumber;
@property(copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(copy, nonatomic) NSString *receiverHandle; // @synthesize receiverHandle=_receiverHandle;
@property(nonatomic) long long previousStatus; // @synthesize previousStatus=_previousStatus;
@property(retain, nonatomic) NSDate<WAServerDate> *lastStatusTimestamp; // @synthesize lastStatusTimestamp=_lastStatusTimestamp;
@property(retain, nonatomic) NSDate<WAServerDate> *expiryTimestamp; // @synthesize expiryTimestamp=_expiryTimestamp;
@property(copy, nonatomic) NSString *counter; // @synthesize counter=_counter;
@property(nonatomic, getter=isCollectRequest) _Bool collectRequest; // @synthesize collectRequest=_collectRequest;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

