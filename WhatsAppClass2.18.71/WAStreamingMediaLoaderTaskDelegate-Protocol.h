//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError, NSHTTPURLResponse, WAStreamingMediaLoaderTask;

@protocol WAStreamingMediaLoaderTaskDelegate
- (void)loaderTask:(WAStreamingMediaLoaderTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)loaderTask:(WAStreamingMediaLoaderTask *)arg1 didReceiveData:(NSData *)arg2 atOffset:(unsigned long long)arg3 isEOF:(_Bool)arg4 encBytesLength:(unsigned long long)arg5;
- (_Bool)loaderTask:(WAStreamingMediaLoaderTask *)arg1 didReceiveResponse:(NSHTTPURLResponse *)arg2;
@end
