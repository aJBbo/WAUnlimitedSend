//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageBubbleSubview.h"

#import "WAMessageContainerSliceViewDelegate-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSSet, NSString, UITableViewCell, UIView, WAChatCellData, WAMessageContainer, _WANoHighlightImageView;
@protocol WAMessageContainerViewDelegate, WAScrollTracking, WASliceViewCustomAccessibility;

__attribute__((visibility("hidden")))
@interface WAMessageContainerView : WAMessageBubbleSubview <WAMessageContainerSliceViewDelegate>
{
    NSMapTable *_availableSliceViews;
    _WANoHighlightImageView *_bubbleImageView;
    long long _activationCount;
    long long _highlightedOnTouchCount;
    NSMutableArray *_deferredTasks;
    id <WASliceViewCustomAccessibility> _customAccessibilitySliceView;
    _Bool _needsReloadSliceViews;
    _Bool _alwaysHighlighted;
    id <WAMessageContainerViewDelegate> _delegate;
    WAChatCellData *_cellData;
    NSArray *_sliceViews;
    unsigned long long _displayStyle;
    unsigned long long _orientation;
    WAMessageContainer *_container;
    unsigned long long _tailDirection;
    NSSet *_highlightedWords;
    UIView<WAScrollTracking> *_scrollTrackingView;
}

+ (id)resizableBubbleImageForBubbleType:(unsigned long long)arg1 highlighted:(_Bool)arg2 flippedForRTL:(_Bool)arg3 tailDirection:(unsigned long long)arg4 insets:(out struct UIEdgeInsets *)arg5;
+ (id)resizableBubbleImageForEvent:(unsigned long long)arg1 highlighted:(_Bool)arg2;
+ (id)resizableBubbleImageForPlaceholderMessage:(unsigned long long)arg1 highlighted:(_Bool)arg2 flippedForRTL:(_Bool)arg3 hasTail:(_Bool)arg4;
+ (id)resizableBubbleImageForIncomingMessage:(_Bool)arg1 highlighted:(_Bool)arg2 flippedForRTL:(_Bool)arg3 hasTail:(_Bool)arg4;
+ (_Bool)isUserInteractionEnabled;
@property(readonly, nonatomic) UIView<WAScrollTracking> *scrollTrackingView; // @synthesize scrollTrackingView=_scrollTrackingView;
@property(readonly, nonatomic) NSSet *highlightedWords; // @synthesize highlightedWords=_highlightedWords;
@property(readonly, nonatomic, getter=isAlwaysHighlighted) _Bool alwaysHighlighted; // @synthesize alwaysHighlighted=_alwaysHighlighted;
@property(readonly, nonatomic) unsigned long long tailDirection; // @synthesize tailDirection=_tailDirection;
@property(readonly, nonatomic) WAMessageContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, nonatomic) NSArray *sliceViews; // @synthesize sliceViews=_sliceViews;
@property(readonly, nonatomic) WAChatCellData *cellData; // @synthesize cellData=_cellData;
@property(nonatomic) __weak id <WAMessageContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)jumpToQuotedChatSession;
- (_Bool)jumpToQuotedMessage;
- (id)accessibilityCustomActions;
- (void)accessibilityElementDidLoseFocus;
- (_Bool)accessibilityActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)canSpeakWithVoiceOver;
@property(readonly, nonatomic) NSArray *wa_accessibilityElements;
- (struct CGRect)stickerReplyBubbleFrame;
- (void)updateBubbleImageView;
- (void)messageContainerSliceViewNeedsVoiceOverUpdate:(id)arg1;
- (void)messageContainerSliceViewDidDeclineCollectRequest:(id)arg1;
- (void)messageContainerSliceViewDidAcceptCollectRequest:(id)arg1;
- (void)messageContainerSliceViewDidSendPayment:(id)arg1;
- (void)messageContainerSliceViewDidSetUpPaymentAccount:(id)arg1;
- (void)messageContainerSliceViewDidSendAgainPayment:(id)arg1;
- (void)messageContainerSliceViewDidAcceptPayment:(id)arg1;
- (void)messageContainerSliceViewDidRequestStopLocationSharing:(id)arg1;
- (void)messageContainerSliceViewDidRequestViewLiveLocation:(id)arg1;
- (unsigned long long)presentationContextForMessageContainerSliceView:(id)arg1;
- (void)messageContainerSliceViewDidRequestStopNetworkTransfer:(id)arg1;
- (void)messageContainerSliceViewDidRequestStartNetworkTransfer:(id)arg1;
- (void)messageContainerSliceViewDidRequestStopPlayback:(id)arg1;
- (void)messageContainerSliceViewDidRequestStartPlayback:(id)arg1;
- (void)messageContainerSliceView:(id)arg1 didRequestShowAllContacts:(id)arg2;
- (void)messageContainerSliceView:(id)arg1 didRequestMessageContact:(id)arg2;
- (void)messageContainerSliceView:(id)arg1 didRequestInviteContact:(id)arg2;
- (void)messageContainerSliceView:(id)arg1 didRequestSaveContact:(id)arg2;
- (void)messageContainerSliceViewDidInvalidateLayout:(id)arg1;
- (void)messageContainerSliceView:(id)arg1 didRequestShowOptionsForLink:(id)arg2;
- (void)messageContainerSliceView:(id)arg1 didRequestHandleLink:(id)arg2;
- (void)handleLongPressAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)handleSingleTapAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)touchesDidEnd;
- (void)touches:(id)arg1 didBeginWithHighlight:(_Bool)arg2;
- (void)touchesWillBegin:(id)arg1;
- (id)sliceViewAtPoint:(struct CGPoint)arg1;
- (void)decrementActivationCountWithAnimation:(_Bool)arg1;
- (void)incrementActivationCountWithAnimation:(_Bool)arg1;
- (void)highlightTemporarily;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (_Bool)showsHighlightOnTouch;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)sliceViewOfKind:(Class)arg1;
- (void)reloadSliceViews;
- (void)didEndDisplay;
- (void)willBeginDisplay;
- (void)setCellData:(id)arg1 orientation:(unsigned long long)arg2 alwaysHighlighted:(_Bool)arg3 highlightedWords:(id)arg4;
@property(readonly, nonatomic) UITableViewCell *parentTableViewCell;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
