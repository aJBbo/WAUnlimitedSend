//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface XMPPRequestReportSpamMessages : XMPPRequest
{
}

+ (id)stanzaFromMessage:(id)arg1;
@property(copy, nonatomic) NSString *reportOrigin;
@property(copy, nonatomic) NSString *spammerJID;
@property(copy, nonatomic) NSString *groupSubject;
@property(copy, nonatomic) NSString *sourceJID;
@property(copy, nonatomic) NSString *creatorJID;
- (id)initWithMessages:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

