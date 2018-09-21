//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WAMMSMediaExistCheckUploadOperation, WAMMSMediaOptimisticUploadOperation, WAMMSMediaUploadResult, WAMultiSendMediaItem, WAMultiSendMediaItemQuality, WamEventMediaUpload, WamEventMediaUpload2;
@protocol NSCopying, WADeviceDate, WAMediaUploadable;

__attribute__((visibility("hidden")))
@interface WAOptimisticMediaUploadItem : NSObject
{
    NSString *_internalIdentifier;
    WAMultiSendMediaItemQuality *_quality;
    _Bool _stopped;
    _Bool _performedInitialRender;
    _Bool _skipResumeCheck;
    WAMultiSendMediaItem *_mediaItem;
    id <WAMediaUploadable> _mediaUploadable;
    unsigned long long _mediaSize;
    WAMMSMediaOptimisticUploadOperation *_uploadOperation;
    WAMMSMediaExistCheckUploadOperation *_existCheckOperation;
    WAMMSMediaUploadResult *_result;
    WamEventMediaUpload *_uploadEvent;
    WamEventMediaUpload2 *_uploadEvent2;
    unsigned long long _mediaPickerOrigin;
    NSDate<WADeviceDate> *_createdDate;
    NSDate<WADeviceDate> *_uploadFinishedDate;
    unsigned long long _endState;
    long long _sizeDifference;
    double _uploadDelay;
    double _successRate;
}

+ (id)identifierForMediaUploadable:(id)arg1;
+ (id)identifierForMediaItem:(id)arg1;
@property(readonly, nonatomic) double successRate; // @synthesize successRate=_successRate;
@property(readonly, nonatomic) double uploadDelay; // @synthesize uploadDelay=_uploadDelay;
@property(nonatomic) long long sizeDifference; // @synthesize sizeDifference=_sizeDifference;
@property(nonatomic) unsigned long long endState; // @synthesize endState=_endState;
@property(retain, nonatomic) NSDate<WADeviceDate> *uploadFinishedDate; // @synthesize uploadFinishedDate=_uploadFinishedDate;
@property(readonly, nonatomic) NSDate<WADeviceDate> *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly, nonatomic) unsigned long long mediaPickerOrigin; // @synthesize mediaPickerOrigin=_mediaPickerOrigin;
@property(retain, nonatomic) WamEventMediaUpload2 *uploadEvent2; // @synthesize uploadEvent2=_uploadEvent2;
@property(retain, nonatomic) WamEventMediaUpload *uploadEvent; // @synthesize uploadEvent=_uploadEvent;
@property(retain, nonatomic) WAMMSMediaUploadResult *result; // @synthesize result=_result;
@property(retain, nonatomic) WAMMSMediaExistCheckUploadOperation *existCheckOperation; // @synthesize existCheckOperation=_existCheckOperation;
@property(retain, nonatomic) WAMMSMediaOptimisticUploadOperation *uploadOperation; // @synthesize uploadOperation=_uploadOperation;
@property(nonatomic) _Bool skipResumeCheck; // @synthesize skipResumeCheck=_skipResumeCheck;
@property(nonatomic) _Bool performedInitialRender; // @synthesize performedInitialRender=_performedInitialRender;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(readonly, nonatomic) unsigned long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(readonly, nonatomic) id <WAMediaUploadable> mediaUploadable; // @synthesize mediaUploadable=_mediaUploadable;
@property(readonly, nonatomic) WAMultiSendMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (void)prepareMediaUploadableWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareMediaItemWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long firstScanLength;
@property(readonly, nonatomic) unsigned long long mediaType;
- (id)description;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <NSCopying> identifier;
- (id)initWithMediaItem:(id)arg1 mediaUploadable:(id)arg2 quality:(id)arg3 mediaPickerOrigin:(unsigned long long)arg4 uploadDelay:(double)arg5 successRate:(double)arg6;
- (id)initWithMediaUploadable:(id)arg1 mediaPickerOrigin:(unsigned long long)arg2 uploadDelay:(double)arg3 successRate:(double)arg4;
- (id)initWithMediaItem:(id)arg1 quality:(id)arg2 mediaPickerOrigin:(unsigned long long)arg3 uploadDelay:(double)arg4 successRate:(double)arg5;

@end

