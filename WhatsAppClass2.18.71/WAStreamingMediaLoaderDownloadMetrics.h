//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAStreamingMediaLoaderDownloadMetrics : NSObject
{
    double _overallTime;
    unsigned long long _mediaSize;
    unsigned long long _bytesTransferred;
    unsigned long long _bytesDownloadedStart;
    double _overallStartTime;
}

@property(nonatomic) double overallStartTime; // @synthesize overallStartTime=_overallStartTime;
@property(nonatomic) unsigned long long bytesDownloadedStart; // @synthesize bytesDownloadedStart=_bytesDownloadedStart;
@property(nonatomic) unsigned long long bytesTransferred; // @synthesize bytesTransferred=_bytesTransferred;
@property(nonatomic) unsigned long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) double overallTime; // @synthesize overallTime=_overallTime;

@end
