//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WABubbleTextViewDelegate-Protocol.h"
#import "WACallSingleVideoViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, WACallSingleVideoView, WACallVideoBubbleView, WACallViewParticipantInfo, WAWeakTimer;
@protocol WACallVideoViewDelegate;

__attribute__((visibility("hidden")))
@interface WACallVideoView : UIView <WABubbleTextViewDelegate, WACallSingleVideoViewDelegate>
{
    _Bool _maximized;
    WACallSingleVideoView *_minimizedView;
    WACallSingleVideoView *_fullScreenView;
    UIView *_overlayView;
    NSMutableDictionary *_particpantVideoViewsForJID;
    long long _participantsCountAtLastLayoutUpdate;
    WACallVideoBubbleView *_alertBubble;
    _Bool _alertBubbleVisible;
    _Bool _showSelfMutedString;
    _Bool _shouldHideOverlaysContainer;
    WAWeakTimer *_selfMutedAlertTimer;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    struct CGPoint _initialPanLocation;
    struct CGPoint _initialMinimizedViewLocation;
    _Bool _peerVideoHidden;
    _Bool _hideAllOverlays;
    _Bool _resizing;
    int _minimizedViewAnchorLocation;
    int _videoLayout;
    id <WACallVideoViewDelegate> _delegate;
    double _minimizedViewBottomOffset;
    double _minimizedViewTopOffset;
    NSArray *_peerViewParticipantsInfo;
    WACallViewParticipantInfo *_selfViewParticipantInfo;
}

@property(nonatomic) _Bool resizing; // @synthesize resizing=_resizing;
@property(retain, nonatomic) WACallViewParticipantInfo *selfViewParticipantInfo; // @synthesize selfViewParticipantInfo=_selfViewParticipantInfo;
@property(copy, nonatomic) NSArray *peerViewParticipantsInfo; // @synthesize peerViewParticipantsInfo=_peerViewParticipantsInfo;
@property(nonatomic) _Bool hideAllOverlays; // @synthesize hideAllOverlays=_hideAllOverlays;
@property(nonatomic) _Bool peerVideoHidden; // @synthesize peerVideoHidden=_peerVideoHidden;
@property(nonatomic) double minimizedViewTopOffset; // @synthesize minimizedViewTopOffset=_minimizedViewTopOffset;
@property(nonatomic) double minimizedViewBottomOffset; // @synthesize minimizedViewBottomOffset=_minimizedViewBottomOffset;
@property(nonatomic) int videoLayout; // @synthesize videoLayout=_videoLayout;
@property(nonatomic) int minimizedViewAnchorLocation; // @synthesize minimizedViewAnchorLocation=_minimizedViewAnchorLocation;
@property(nonatomic) __weak id <WACallVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)singleVideoViewDidRequestCancelGroupCallInvite:(id)arg1;
- (void)bubbleTextViewDidRequestAction:(id)arg1;
- (void)updateProfilePictureInfo:(id)arg1;
- (void)setProfilePicturesInfo:(id)arg1;
- (struct CGPoint)positionOfAnchor:(int)arg1;
- (struct WAFrameAnchors)generateAnchors;
- (int)closestAnchorToPoint:(struct CGPoint)arg1;
- (void)animateMinimizedViewToPosition:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (void)moveMinimizedWindow:(id)arg1;
- (void)switchMinimizedView:(id)arg1;
- (void)resizeVideoViewsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resizeVideoViewsGridAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)minimizedFrameSize;
- (void)removeVideoViewForParticipantJID:(id)arg1;
- (void)addVideoViewForParticipantJID:(id)arg1;
- (void)hideVideoViewsOverlayContainerIfNeeded:(_Bool)arg1;
@property(readonly, nonatomic) WACallSingleVideoView *peerVideoView;
@property(readonly, nonatomic) WACallSingleVideoView *selfVideoView;
@property(readonly, nonatomic) NSDictionary *particpantVideoViewsForJID;
- (void)minimizedViewOffetsUpdated;
- (void)maximize;
- (void)minimize;
- (void)rotateViews:(double)arg1;
@property(nonatomic) double overlayAlpha;
- (void)updateAlertBubble;
- (void)setSelfVideoFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLayoutGridAnimated:(_Bool)arg1;
- (void)setVideoLayout:(int)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isSelfVideoFullScreen;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

