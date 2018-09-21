//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, WAShortGIFViewFrameSourceDelegate;

__attribute__((visibility("hidden")))
@interface WAShortGIFViewFrameSource : NSObject
{
    struct __CFArray *_frames;
    CDStruct_1b6d18a9 _timeOffset;
    CDStruct_1b6d18a9 _previousTimestamp;
    _Bool _hasAsset;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    id <WAShortGIFViewFrameSourceDelegate> _delegate;
    NSString *_assetDescription;
    struct CGSize _internalItemSize;
    CDStruct_1b6d18a9 _duration;
    struct CGAffineTransform _transform;
}

@property(copy) NSString *assetDescription; // @synthesize assetDescription=_assetDescription;
@property CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property __weak id <WAShortGIFViewFrameSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool hasAsset; // @synthesize hasAsset=_hasAsset;
@property struct CGSize internalItemSize; // @synthesize internalItemSize=_internalItemSize;
@property struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)invokeSuccessCallback;
- (void)invokeFailureCallback;
- (id)assetReaderWithTrackOutputForAsset:(id)arg1 track:(id)arg2;
- (struct opaqueCMSampleBuffer *)copyOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)loadFramesFromAsset:(id)arg1 track:(id)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (void)loadAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)produceMediaData;
- (long long)numberOfFrames;
- (id)description;
- (void)dealloc;
- (id)initWithAssetURL:(id)arg1 delegate:(id)arg2;

@end
