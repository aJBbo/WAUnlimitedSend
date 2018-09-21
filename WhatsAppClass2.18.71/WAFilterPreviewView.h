//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, WAEditableImageCompositeView, WAMultiSendMediaItem;
@protocol WAFilterPreviewViewDelegate;

__attribute__((visibility("hidden")))
@interface WAFilterPreviewView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isPanDownGestureOnGoing;
    _Bool _isPanUpGestureOnGoing;
    _Bool _isPanLeftGestureOnGoing;
    _Bool _isPanRightGestureOnGoing;
    UIView *_blurEffectView;
    UIPanGestureRecognizer *_panGesture;
    WAEditableImageCompositeView *_compositeView;
    WAMultiSendMediaItem *_currentMediaItem;
    id <WAFilterPreviewViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAFilterPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMultiSendMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
- (void).cxx_destruct;
- (void)resetIsPanGestureOnGoing;
- (_Bool)isPanGestureOnGoing;
- (double)transitionCenterY;
- (double)transitionScale;
- (void)gestureRecognizerDidFinish:(id)arg1;
- (void)gestureRecognizerDidChange:(id)arg1;
- (void)gestureRecognizerDidBegan:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)mediaItemDidUpdatePreviewContent:(id)arg1;
- (void)showContentView;
- (void)hideContentView;
- (void)hideCurrentMedia;
- (void)setupCompositeViewImage:(id)arg1;
- (void)reconfigCurrentMediaItem;
- (void)showCurrentMediaWithTimeOffset:(double)arg1;
- (void)layoutCompositeView;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

