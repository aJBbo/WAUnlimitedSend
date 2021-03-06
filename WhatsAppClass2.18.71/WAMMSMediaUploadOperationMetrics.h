//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAMMSTimer;

__attribute__((visibility("hidden")))
@interface WAMMSMediaUploadOperationMetrics : NSObject
{
    WAMMSTimer *_overallTimer;
    WAMMSTimer *_overallUserVisibleTimer;
    double _optimisticUploadTakeoverStartTime;
    double _transcodeStartTime;
    double _resumeCheckStartTime;
    double _fileUploadStartTime;
    double _finalizeStartTime;
    double _routeFetchDuration;
}

@property(nonatomic) double routeFetchDuration; // @synthesize routeFetchDuration=_routeFetchDuration;
@property(nonatomic) double finalizeStartTime; // @synthesize finalizeStartTime=_finalizeStartTime;
@property(nonatomic) double fileUploadStartTime; // @synthesize fileUploadStartTime=_fileUploadStartTime;
@property(nonatomic) double resumeCheckStartTime; // @synthesize resumeCheckStartTime=_resumeCheckStartTime;
@property(nonatomic) double transcodeStartTime; // @synthesize transcodeStartTime=_transcodeStartTime;
@property(nonatomic) double optimisticUploadTakeoverStartTime; // @synthesize optimisticUploadTakeoverStartTime=_optimisticUploadTakeoverStartTime;
@property(retain, nonatomic) WAMMSTimer *overallUserVisibleTimer; // @synthesize overallUserVisibleTimer=_overallUserVisibleTimer;
@property(retain, nonatomic) WAMMSTimer *overallTimer; // @synthesize overallTimer=_overallTimer;
- (void).cxx_destruct;
- (id)init;

@end

