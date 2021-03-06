//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStreamingMediaHeaderTaskDelegate-Protocol.h"

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingRequest, NSString, WAMMSTaskDescription, WAMMSTaskSession, WAStreamingMediaHeaderTask;
@protocol OS_dispatch_queue, WAStreamingMediaContentInformationRequestDelegate;

__attribute__((visibility("hidden")))
@interface WAStreamingMediaContentInformationRequestTask : NSObject <WAStreamingMediaHeaderTaskDelegate>
{
    unsigned long long _retryCount;
    WAMMSTaskSession *_taskSession;
    WAMMSTaskDescription *_taskDescription;
    NSObject<OS_dispatch_queue> *_queue;
    id <WAStreamingMediaContentInformationRequestDelegate> _delegate;
    WAStreamingMediaHeaderTask *_headerTask;
    unsigned long long _currentRetryCount;
    _Bool _finished;
    NSString *_identifier;
    AVAssetResourceLoadingContentInformationRequest *_contentInformationRequest;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest; // @synthesize contentInformationRequest=_contentInformationRequest;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1 contentLength:(unsigned long long)arg2;
- (void)streamingHeaderTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)streamingHeaderTask:(id)arg1 didFinishWithResponse:(id)arg2;
- (id)description;
- (void)cancel;
- (void)resume;
- (id)initWithContentInformationRequest:(id)arg1 loadingRequest:(id)arg2 retryCount:(unsigned long long)arg3 mmsTaskSession:(id)arg4 taskDescription:(id)arg5 queue:(id)arg6 delegate:(id)arg7;

@end

