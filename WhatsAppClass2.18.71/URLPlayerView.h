//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface URLPlayerView : UIView
{
    // Error parsing type: , name: sourceURL
    // Error parsing type: , name: autoplays
    // Error parsing type: , name: delegate
    // Error parsing type: , name: state
    // Error parsing type: , name: isScrubbing
    // Error parsing type: , name: resumePlaybackAfterScrubbing
    // Error parsing type: , name: playerItemStatusObservation
    // Error parsing type: , name: playerRateObservation
    // Error parsing type: , name: playerTimeObserver
    // Error parsing type: , name: audioActivity
    // Error parsing type: , name: needsRewindOnPlay
    // Error parsing type: , name: playerItem
    // Error parsing type: , name: player
    // Error parsing type: , name: isSeeking
    // Error parsing type: , name: resumePlaybackAfterSeeking
    // Error parsing type: , name: targetSeekTime
}

+ (Class)layerClass;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)playerItemPlaybackStalled;
- (void)playerItemDidPlayToEndTime;
@property(nonatomic, readonly) AVPlayerLayer *layer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) AVPlayer *player; // @synthesize player;
@property(nonatomic, readonly) AVPlayerItem *playerItem; // @synthesize playerItem;

@end
