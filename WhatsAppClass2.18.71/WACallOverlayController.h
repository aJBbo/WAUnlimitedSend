//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACallOverlayTouchControllerDelegate-Protocol.h"
#import "WALayoutBoundsManagerDelegate-Protocol.h"

@class NSString, WACallOverlayTouchController, WACallOverlayView, WALayoutBoundsManager;
@protocol WACallOverlayControllerDelegate;

__attribute__((visibility("hidden")))
@interface WACallOverlayController : NSObject <WACallOverlayTouchControllerDelegate, WALayoutBoundsManagerDelegate>
{
    WALayoutBoundsManager *_layoutBoundsManager;
    WACallOverlayTouchController *_touchController;
    _Bool _viewVisible;
    _Bool _largePreviewView;
    id <WACallOverlayControllerDelegate> _delegate;
    long long _callViewLayout;
    WACallOverlayView *_callOverlayView;
    struct WACallOverlayAnchorsWithOffset _overlayAnchors;
}

@property(readonly, nonatomic) WACallOverlayView *callOverlayView; // @synthesize callOverlayView=_callOverlayView;
@property(nonatomic) long long callViewLayout; // @synthesize callViewLayout=_callViewLayout;
@property(nonatomic) struct WACallOverlayAnchorsWithOffset overlayAnchors; // @synthesize overlayAnchors=_overlayAnchors;
@property(nonatomic, getter=isLargePreviewView) _Bool largePreviewView; // @synthesize largePreviewView=_largePreviewView;
@property(nonatomic) __weak id <WACallOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutBoundsManagerChangedBounds:(id)arg1;
- (void)overlayTouchController:(id)arg1 didEndDragAtPosition:(struct CGPoint)arg2 withOverlaySize:(struct CGSize)arg3 withinLayoutBounds:(struct CGRect)arg4;
- (struct CGPoint)overlayTouchController:(id)arg1 positionWithSuggestedPosition:(struct CGPoint)arg2 withOverlaySize:(struct CGSize)arg3 withinLayoutBounds:(struct CGRect)arg4;
- (struct CGPoint)overlayTouchController:(id)arg1 initialPositionForOverlaySize:(struct CGSize)arg2 withinLayoutBounds:(struct CGRect)arg3;
- (void)overlayTouchControllerDidTapOverlay:(id)arg1;
- (void)loadLargeProfileImageAsyncForJID:(id)arg1 inImageView:(id)arg2;
- (void)loadPhotos;
- (void)renderStarted:(id)arg1;
@property(nonatomic, getter=isOverlayViewVisible) _Bool overlayViewVisible;
- (void)relayoutSubviewsWithFrame:(struct CGRect)arg1;
- (void)updateOverlayView:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

