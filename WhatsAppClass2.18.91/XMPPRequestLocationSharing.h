//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

__attribute__((visibility("hidden")))
@interface XMPPRequestLocationSharing : XMPPRequest
{
    _Bool _includeMessageInParticipantInfo;
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithGroupJID:(id)arg1 reportParticipants:(_Bool)arg2 includeMessageInParticipantInfo:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

