//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPRequest.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface XMPPE2ERequestFetchIdentityKeys : XMPPRequest
{
    NSSet *_allJids;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithJids:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

