//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, WAMediaPickerVideoAssetOverlayView, WAMultiSendMediaItem;
@protocol WAMultiSendThumbnailBrowserItemViewDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiSendThumbnailBrowserItemView : UIView <UIGestureRecognizerDelegate>
{
    struct CGPoint _centerBeforeDraggingInSuperSuperviewCoordinates;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    WAMediaPickerVideoAssetOverlayView *_videoOverlayView;
    long long _index;
    unsigned long long _state;
    id <WAMultiSendThumbnailBrowserItemViewDelegate> _delegate;
    UIImageView *_thumbnailView;
    WAMultiSendMediaItem *_mediaItem;
}

@property(retain, nonatomic) WAMultiSendMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) __weak id <WAMultiSendThumbnailBrowserItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)handlePanGesture:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addWobbleAnimation;
- (void)stopWobble;
- (void)startWobble;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)animateOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

