//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentUPIPayRequest.h"

@class NSArray, NSSet, NSString, WAChatSession;

@interface WAPaymentUPIPayRequest (WhatsApp1)
@property(nonatomic, readonly) NSString *description;
- (void)resetValues;
@property(nonatomic, readonly) NSArray *payInfo;
@property(nonatomic, readonly) NSSet *mentions;
@property(nonatomic, readonly) NSString *textForMessaging;
@property(nonatomic, readonly) NSString *chatJID;
@property(nonatomic, readonly) _Bool isPayToHandle;
- (void)updateToPayToHandle;
@property(nonatomic, readonly) WAChatSession *transactionSaveChatSession;
@end

