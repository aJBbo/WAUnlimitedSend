//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSBaseTask.h"

@class NSOperationQueue, WAMMSTaskDescription, WAMMSTaskMetrics, WAMMSTaskSession;

__attribute__((visibility("hidden")))
@interface WAXMPPUploadResumeCheckTask : WAMMSBaseTask
{
    WAMMSTaskSession *_session;
    WAMMSTaskDescription *_taskDescription;
    CDUnknownBlockType _completion;
    WAMMSTaskMetrics *_taskMetrics;
    _Bool _finished;
    NSOperationQueue *_sessionOperationQueue;
}

@property(retain) NSOperationQueue *sessionOperationQueue; // @synthesize sessionOperationQueue=_sessionOperationQueue;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1;
- (void)cancel;
- (void)resumeWithPolicy:(id)arg1;
- (id)initWithSession:(id)arg1 taskDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
