//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMMSBaseTask.h"

__attribute__((visibility("hidden")))
@interface WAMMSUploadCancelTask : WAMMSBaseTask
{
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (_Bool)shouldCancel;
- (id)createURLSessionTaskWithBaseRequest:(id)arg1 MMSSession:(id)arg2;
- (void)failedToStartWithError:(id)arg1;
- (id)initWithSession:(id)arg1 taskDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

