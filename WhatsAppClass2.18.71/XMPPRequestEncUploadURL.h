//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPRequest.h"

__attribute__((visibility("hidden")))
@interface XMPPRequestEncUploadURL : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithHash:(id)arg1 messageType:(int)arg2 mediaOrigin:(int)arg3 mediaIndex:(long long)arg4 totalMediaCount:(long long)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

