//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSMediaUploadOperation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface WAMMSMediaStreamingUploadOperation : WAMMSMediaUploadOperation
{
}

- (void)finishStreaming;
- (id)initWithUploadRequest:(id)arg1 mmsSession:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (void)attachMessage:(id)arg1;
@property(readonly) _Bool isExecuting;
@property(readonly) NSData *mediaKeyUsed;

// Remaining properties
@property(readonly) NSData *fakeStreamingEncHash; // @dynamic fakeStreamingEncHash;

@end

