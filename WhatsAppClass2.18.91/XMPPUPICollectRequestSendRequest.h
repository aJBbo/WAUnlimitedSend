//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

__attribute__((visibility("hidden")))
@interface XMPPUPICollectRequestSendRequest : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithCurrency:(id)arg1 amountString:(id)arg2 deviceId:(id)arg3 senderHandle:(id)arg4 clTransactionId:(id)arg5 credentialId:(id)arg6 note:(id)arg7 completion:(CDUnknownBlockType)arg8;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

