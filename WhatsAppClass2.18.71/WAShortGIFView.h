//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WASampleBufferDisplayViewDelegate-Protocol.h"
#import "WAShortGIFViewFrameSourceDelegate-Protocol.h"

@class NSString, NSURL, WASampleBufferDisplayView, WAShortGIFViewFrameSource;

__attribute__((visibility("hidden")))
@interface WAShortGIFView : UIView <WASampleBufferDisplayViewDelegate, WAShortGIFViewFrameSourceDelegate>
{
    WASampleBufferDisplayView *_videoView;
    _Bool _playing;
    _Bool _isApplicationActive;
    _Bool _paused;
    NSURL *_URL;
    WAShortGIFViewFrameSource *_frameSource;
}

@property(retain) WAShortGIFViewFrameSource *frameSource; // @synthesize frameSource=_frameSource;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)frameSource:(id)arg1 didProduceSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)frameSourceDidFail:(id)arg1;
- (void)frameSourceDidLoadAsset:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)sampleBufferDisplayViewDidDrawFrameWithSourceTime:(CDStruct_1b6d18a9)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)produceMediaDataForFrameSource:(id)arg1;
- (void)updatePlayerState;
@property(readonly, copy) NSString *description;
- (id)initWithAssetURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

