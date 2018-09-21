//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface WACloudMediaDownloadManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSURLSession *_session;
    NSMutableArray *_activeRequests;
}

+ (id)fileURLToTemporaryDirectory;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)requestForTask:(id)arg1;
- (id)startDownloadTaskForRequest:(id)arg1;
- (id)requestForMediaInAsset:(id)arg1 isMediaForStatus:(_Bool)arg2 progressHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

