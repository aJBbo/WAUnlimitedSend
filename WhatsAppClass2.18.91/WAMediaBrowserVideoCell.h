//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaBrowserZoomableMediaCell.h"

#import "WAMediaPlayerDelegate-Protocol.h"
#import "WAMediaPlayerTransportControlViewDelegate-Protocol.h"

@class NSNumber, NSString, UIButton, UIFont, UIImageView, UIView, WAInteractiveAnnotationView, WAMediaPlayer, WAMediaPlayerPlayButtonView, WAMediaPlayerTransportControlView, WAMediaTransferProgressView;
@protocol WAMediaBrowserVideoCellDelegate;

__attribute__((visibility("hidden")))
@interface WAMediaBrowserVideoCell : WAMediaBrowserZoomableMediaCell <WAMediaPlayerDelegate, WAMediaPlayerTransportControlViewDelegate>
{
    WAMediaPlayer *_mediaPlayer;
    WAMediaPlayerTransportControlView *_playerTransportBar;
    WAMediaPlayerPlayButtonView *_playButtonView;
    WAMediaTransferProgressView *_transferView;
    _Bool _hidePlayButton;
    _Bool _exitFullScreenAfterPlayingToEnd;
    UIView *_missingVideoContainerView;
    UIImageView *_missingVideoIconView;
    UIButton *_missingVideoButton;
    UIFont *_missingVideoButtonFont;
    _Bool _pendingInitialPlayback;
    long long _userInteractionDisabledCount;
    UIView *_touchTrapperView;
    NSNumber *_initTime;
    _Bool _playerStartedPlayingOnce;
    WAInteractiveAnnotationView *_annotationsView;
    id <WAMediaBrowserVideoCellDelegate> _videoCellDelegate;
}

@property(nonatomic) __weak id <WAMediaBrowserVideoCellDelegate> videoCellDelegate; // @synthesize videoCellDelegate=_videoCellDelegate;
- (void).cxx_destruct;
- (void)setAccessibilityLabelForContent:(id)arg1;
- (void)mediaPlayerTransportControlViewDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerTransportControlViewDidEndScrubbing:(id)arg1;
- (void)mediaPlayerTransportControlViewDidBeginScrubbing:(id)arg1;
- (_Bool)canMediaPlayerTransportControlViewBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidEndScrubbing:(id)arg1;
- (void)mediaPlayerDidBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidPlayToEndTime:(id)arg1;
- (void)mediaPlayerDidFinishLoading:(id)arg1;
- (void)mediaPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerStatusDidChange:(id)arg1;
- (void)mediaPlayerDidChangeLikelyToKeepUp:(id)arg1;
- (void)mediaPlayerDidRequestPlaybackStart:(id)arg1;
@property(nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)mediaDownloadProgressDidChange:(id)arg1;
- (_Bool)isStreaming;
- (void)setPresentationState:(long long)arg1;
- (long long)presentationState;
- (struct CGSize)bestSizeForMediaPlayer;
- (_Bool)shouldSetPlayerItem;
- (void)loadMediaPlayerItemIfNeeded;
- (void)missingVideoButtonTapped:(id)arg1;
- (void)didChangeMessageAtStage:(long long)arg1;
- (void)setMediaPlayerPosterImage:(id)arg1;
- (void)didChangeMessage;
- (void)setDisplaying:(_Bool)arg1;
- (_Bool)shouldConsiderTouchForTaps:(struct CGPoint)arg1;
- (_Bool)supportsFullScreenPresentation;
- (id)viewForZooming;
- (void)prepareForReuse;
- (void)setTransferring:(_Bool)arg1;
- (void)setScrubbing:(_Bool)arg1;
- (void)didUpdateParallaxOffset;
- (void)playButtonTapped:(id)arg1;
- (void)updatePlayButtonStateWithAnimation:(_Bool)arg1;
- (void)updatePlayerBarAlpha;
- (void)addOrUpdateAnnotationsView;
- (void)layoutMissingVideoView;
- (void)layoutSubviewsInCell;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillPresentCallScreen:(id)arg1;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

