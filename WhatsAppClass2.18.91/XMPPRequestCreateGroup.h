//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPGroupRequest.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface XMPPRequestCreateGroup : XMPPGroupRequest
{
    NSSet *_participantJIDs;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithSubject:(id)arg1 description:(id)arg2 descriptionID:(id)arg3 participantJIDs:(id)arg4 selfJID:(id)arg5 key:(id)arg6 announcementOnly:(_Bool)arg7 locked:(_Bool)arg8 webClientRequestID:(id)arg9 completion:(CDUnknownBlockType)arg10;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

