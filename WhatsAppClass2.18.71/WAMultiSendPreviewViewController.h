//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WACameraViewControllerDelegate-Protocol.h"
#import "WACaptionBarDelegate-Protocol.h"
#import "WAFilterPreviewViewDelegate-Protocol.h"
#import "WAFilterTemplateStripViewDataSource-Protocol.h"
#import "WAFilterTemplateStripViewDelegate-Protocol.h"
#import "WAImageToImagePanGestureRecognizerDelegate-Protocol.h"
#import "WAImageToImageTransitioning-Protocol.h"
#import "WAMediaPickerControllerDelegate-Protocol.h"
#import "WAMentionsSelectorViewDelegate-Protocol.h"
#import "WAMultiSendHeaderViewDelegate-Protocol.h"
#import "WAMultiSendMediaSendProcesserDelegate-Protocol.h"
#import "WAMultiSendThumbnailBrowserViewDelegate-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"
#import "WAPageableItemBrowserViewDelegate-Protocol.h"
#import "WAPaintCanvasTextureManagerImageDataSource-Protocol.h"
#import "WAStatusComposerNUXDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableIndexSet, NSString, NSURL, UIImageView, UITapGestureRecognizer, UIView, WACaptionBar, WAChatSession, WAFilterHintView, WAFilterPreviewView, WAFilterTemplateStripView, WAImageToImagePanPopGestureRecognizer, WAMediaFilterRenderer, WAMediaPickerLibraryController, WAMediaPickerStats, WAMentionsSelectorView, WAMultiSendHeaderView, WAMultiSendMediaItemQuality, WAMultiSendMediaSendProcesser, WAMultiSendThumbnailBrowserView, WAPageableItemBrowserView, WAPaintCanvasDevice, WAStatusComposerNUX, WamEventMediaPickerPerf;
@protocol WAMultiSendPreviewViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiSendPreviewViewController : WAViewController <WACaptionBarDelegate, WAMentionsSelectorViewDelegate, WACameraViewControllerDelegate, WAFilterPreviewViewDelegate, WAFilterTemplateStripViewDelegate, WAFilterTemplateStripViewDataSource, WAImageToImagePanGestureRecognizerDelegate, WAPageableItemBrowserViewDelegate, WAMultiSendThumbnailBrowserViewDelegate, WAMediaPickerControllerDelegate, UINavigationControllerDelegate, WAMultiSendHeaderViewDelegate, UIGestureRecognizerDelegate, WAPaintCanvasTextureManagerImageDataSource, WAStatusComposerNUXDelegate, WAMultiSendMediaSendProcesserDelegate, WAImageToImageTransitioning, WANavigationControllerPopFromAnimating>
{
    long long _selectedIndex;
    NSMutableArray *_mediaItems;
    WAPageableItemBrowserView *_pagingBrowserView;
    WAMultiSendHeaderView *_headerView;
    WACaptionBar *_captionBar;
    WAMultiSendThumbnailBrowserView *_thumbnailBrowserView;
    long long _thumbnailBrowserViewState;
    _Bool _cropCurrentItemWhenKeyboardHides;
    WAMentionsSelectorView *_mentionsSelectorView;
    WAChatSession *_chatSession;
    NSString *_selectedItemUUIDBeforePresentingPicker;
    NSArray *_allAssetIdentifiersBeforePresentingPicker;
    WamEventMediaPickerPerf *_multiSendPerfEvent;
    unsigned long long _multiSendInvocationCount;
    double _multiSendWillPresentTimestamp;
    WAMediaFilterRenderer *_filterRenderer;
    NSArray *_allFilters;
    WAImageToImagePanPopGestureRecognizer *_popGesture;
    WAFilterPreviewView *_filterBackgroundView;
    WAFilterTemplateStripView *_filterStripeView;
    WAFilterHintView *_filterHintView;
    _Bool _isFilterTipsRecordBefore;
    _Bool _isFilterPanTransitionOnGoing;
    _Bool _isFilterAutoTransitionOnGoing;
    _Bool _isFilterTipsShownBefore;
    _Bool _allowPanDownPopGesture;
    UIView *_panUpScreenShotView;
    _Bool _hasEditCaptionBarText;
    NSMutableIndexSet *_thumbnailIndexesToUpdate;
    UIImageView *_topGradientImageView;
    UITapGestureRecognizer *_tapGesture;
    WAPaintCanvasDevice *_paintCanvasDevice;
    long long _hideInterfaceCounter;
    long long _paintingStrokeCounter;
    long long _paintingPinchCounter;
    double _lastHideInterfaceTime;
    UITapGestureRecognizer *_tripleTapGesture;
    WAStatusComposerNUX *_statusHelperDialogView;
    WAMultiSendMediaSendProcesser *_mediaSendProcesser;
    double _imagePickerDelayStartTime;
    double _multiSendWillDestroyTimestamp;
    _Bool _needSubmitMultiSendPerfEventInDidDisappear;
    _Bool _hasRecordedMediaCountForPerf;
    _Bool _needReloadSaveReply;
    _Bool _sending;
    WAMediaPickerLibraryController *_libraryController;
    id <WAMultiSendPreviewViewControllerDelegate> _delegate;
    unsigned long long _pickerMode;
    unsigned long long _pickerOrigin;
    id _lastUsedAssetCollectionIdentifier;
    NSString *_recipientName;
    NSString *_recipientJID;
    NSURL *_originalURL;
    NSDictionary *_userInfo;
    WAMultiSendMediaItemQuality *_quality;
    WAMediaPickerStats *_pickerStats;
}

+ (void)prewarmWithPickerMode:(unsigned long long)arg1 origin:(unsigned long long)arg2 quality:(id)arg3 enablePaintingIfSupported:(_Bool)arg4;
@property(nonatomic) long long thumbnailBrowserViewState; // @synthesize thumbnailBrowserViewState=_thumbnailBrowserViewState;
@property(readonly, nonatomic) WAMediaPickerStats *pickerStats; // @synthesize pickerStats=_pickerStats;
@property(nonatomic, getter=isSending) _Bool sending; // @synthesize sending=_sending;
@property(retain, nonatomic) WAPageableItemBrowserView *pagingBrowserView; // @synthesize pagingBrowserView=_pagingBrowserView;
@property(readonly, nonatomic) WAMultiSendMediaItemQuality *quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(copy, nonatomic) NSString *recipientJID; // @synthesize recipientJID=_recipientJID;
@property(copy, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
@property(retain, nonatomic) id lastUsedAssetCollectionIdentifier; // @synthesize lastUsedAssetCollectionIdentifier=_lastUsedAssetCollectionIdentifier;
@property(readonly, nonatomic) unsigned long long pickerOrigin; // @synthesize pickerOrigin=_pickerOrigin;
@property(readonly, nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property(nonatomic) __weak id <WAMultiSendPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAMediaPickerLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (void).cxx_destruct;
- (void)prewarm;
- (void)chatViewControllerDidDisappear:(id)arg1;
- (void)cancelAllExport;
- (void)reallySendAllMediaItems;
- (void)sendAllMediaItems:(id)arg1;
- (void)userCancelledAllExport;
- (void)convertPlaceholderItemToActualItemDidSuccessWithOldMediaItem:(id)arg1 toNewMediaItem:(id)arg2;
- (void)convertPlaceholderItemToActualItemDidFailedWithIndex:(long long)arg1;
- (void)hasConvertedItemWhenCancelExport;
- (void)exportAndPrepareOldMediaItem:(id)arg1 toNewMediaItem:(id)arg2;
- (void)sendProcessAndExportFinishSuccessWithProcessedItems:(id)arg1 mediaPickerStats:(id)arg2;
- (void)sendProcessFinishSuccessWithProcessedItems:(id)arg1;
- (void)sendProcessFinishWithErrorMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)showingProgressViewOnThisViewController;
- (_Bool)shouldShowProgressViewDuringMediaExport;
- (id)mediaPickerStats;
- (_Bool)wantSaveMediaToCameraRoll;
- (void)statusComposerNUXDidTapSend:(id)arg1;
- (void)statusComposerNUXDidTapPrivacy:(id)arg1;
- (void)statusComposerNUXDidTapDismiss:(id)arg1;
- (void)statusPrivacyPolicyDidChange:(id)arg1;
- (void)updateRecipientNameForStatusIfNeeded;
- (void)dismissPrivacySettings:(id)arg1;
- (void)showStatusPrivacySettings;
- (void)dismissStatusHelperDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showStatusHelperDialog;
- (_Bool)shouldShowStatusHelperDialog;
- (_Bool)canMarkFirstStatus;
- (void)destroyMultiSendPerfEvent;
- (void)submitMultiSendPerfEvent;
- (void)recordMediaCountForPerf:(id)arg1;
- (id)generateMultiSendPerfEvent;
- (void)trackEditsInPhotos:(id)arg1 videos:(id)arg2 gifs:(id)arg3 updateSentUnchanged:(_Bool)arg4;
- (void)trackSentItems:(id)arg1;
- (void)trackUnsentItems:(id)arg1;
- (id)textureManager:(id)arg1 imageWithIdentifier:(id)arg2 cropped:(_Bool)arg3;
- (void)endHidingInterface;
- (void)beginHidingInterface;
- (_Bool)isHidingInterface;
- (void)endPinching;
- (void)beginPinching;
- (void)paintCanvasDidUpdateContent:(id)arg1;
- (void)paintCanvasDidEndEditingActivity;
- (void)paintCanvasDidBeginEditingActivity;
- (void)paintCanvasDidEndEditingText:(id)arg1;
- (void)paintCanvasDidBeginEditingText:(id)arg1;
- (void)paintCanvasDidEndPinch:(id)arg1;
- (void)paintCanvasDidBeginPinch:(id)arg1;
- (void)paintCanvasDidEndStroke:(id)arg1;
- (void)paintCanvasDidBeginStroke:(id)arg1;
- (void)paintCanvasDidChangeUndoStatus:(id)arg1;
- (void)paintCanvasDidClearAll:(id)arg1;
- (void)paintCanvasDidRedoChange:(id)arg1;
- (void)paintCanvasDidUndoChange:(id)arg1;
- (void)cropButtonDidSelect;
- (void)reallyAddNewTextItemForHeaderView:(id)arg1;
- (double)multiSendHeaderViewCaptionBarHeight:(id)arg1;
- (void)multiSendHeaderViewDidEndAutoCropInteraction:(id)arg1;
- (void)multiSendHeaderViewDidCommitAutoCropInteraction:(id)arg1;
- (void)multiSendHeaderViewDidCancelAutoCropInteraction:(id)arg1;
- (void)multiSendHeaderView:(id)arg1 didUpdateAutoCropInteractionProgress:(double)arg2;
- (void)multiSendHeaderViewWillBeginAutoCropInteraction:(id)arg1;
- (_Bool)isAutoCropInteractionPossibleForMultiSendHeaderView:(id)arg1;
- (void)updateBrushColorFromMultiSendHeaderView;
- (void)multiSendHeaderViewDidChangeBrushSize:(id)arg1;
- (void)multiSendHeaderViewDidChangeBrushColor:(id)arg1;
- (void)multiSendHeaderView:(id)arg1 didRequestAddNewStamp:(id)arg2;
- (void)multiSendHeaderView:(id)arg1 didSelectTextStyle:(id)arg2;
- (void)multiSendHeaderViewDidRequestFinishEditingTextItem:(id)arg1;
- (void)multiSendHeaderViewDidRequestAddNewTextItem:(id)arg1;
- (void)multiSendHeaderViewDidRequestRedo:(id)arg1;
- (void)multiSendHeaderViewDidRequestUndo:(id)arg1;
- (_Bool)isRedoPossibleForMultiSendHeaderView:(id)arg1;
- (_Bool)isUndoPossibleForMultiSendHeaderView:(id)arg1;
- (void)multiSendHeaderViewDidRequestCancel:(id)arg1;
- (void)reloadThumbnailAtIndex:(long long)arg1;
- (void)setThumbnailBrowserViewState:(long long)arg1 animated:(_Bool)arg2;
- (void)updateThumbnailBrowserViewHiddenState;
- (void)multiSendHeaderViewDidChangeMode:(id)arg1;
- (void)multiSendHeaderViewDidCancelFilterInteraction:(id)arg1;
- (void)multiSendHeaderViewDidRequestDelete:(id)arg1;
- (_Bool)isDeletePossibleForMultiSendHeaderView:(id)arg1;
- (_Bool)isCroppingPossibleForMultiSendHeaderView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)browserViewTapped:(id)arg1;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (id)preferredPopFromInteractionController;
- (id)popFromAnimationIdentifier;
- (void)finishTransitionWithContext:(id)arg1;
- (id)snapshotOfItemView:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (_Bool)shouldAutorotate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)multiSendThumbnailBrowserViewDidChangeEditingMode:(id)arg1;
- (void)multiSendThumbnailBrowserView:(id)arg1 didMoveItemAtIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)multiSendThumbnailBrowserView:(id)arg1 didRequestSelectionOfItemAtIndex:(long long)arg2;
- (id)multiSendThumbnailBrowserView:(id)arg1 itemAtIndex:(long long)arg2;
- (long long)itemCountForMultiSendThumbnailBrowserView:(id)arg1;
- (void)multiSendThumbnailBrowserView:(id)arg1 didRequestRemovalOfItemAtIndex:(long long)arg2;
- (void)multiSendThumbnailBrowserViewDidRequestSend:(id)arg1;
- (_Bool)pageableItemBrowserViewDidRequestEnterFilterMode:(id)arg1;
- (_Bool)canApplyFilterToCurrentItemInPageableItemBrowserView:(id)arg1;
- (void)pageableItemBrowserViewDidChangeAccentColor:(id)arg1;
- (void)pageableItemBrowserView:(id)arg1 didDeleteItemAtLocation:(struct CGPoint)arg2;
- (void)pageableItemBrowserView:(id)arg1 shouldEnterPendingDeletionState:(_Bool)arg2;
- (_Bool)pageableItemBrowserView:(id)arg1 shouldDeleteItemAtLocation:(struct CGPoint)arg2;
- (id)pageableItemBrowserViewContainingViewController:(id)arg1;
- (void)pageableItemBrowserViewDidRequestSend:(id)arg1;
- (void)pageableItemBrowserViewDidRequestEndCropping:(id)arg1;
- (void)pageableItemBrowserViewDidScroll:(id)arg1;
- (void)pageableItemBrowserViewDidEndFocusedTask:(id)arg1;
- (void)pageableItemBrowserViewWillBeginFocusedTask:(id)arg1;
- (void)pageableItemBrowserView:(id)arg1 didUpdateThumbnailOfItemAtIndex:(long long)arg2;
- (void)pageableItemBrowserViewCurrentIndexDidChange:(id)arg1;
- (long long)pageableItemCount:(id)arg1;
- (id)pageableItemBrowserView:(id)arg1 itemAtIndex:(long long)arg2;
- (void)mediaPickerControllerDidFinishPresenting:(id)arg1;
- (void)mediaPickerController:(id)arg1 didFinishWithSelectedItems:(id)arg2;
@property(nonatomic, getter=isCroppingCurrentItem) _Bool croppingCurrentItem;
- (void)doneCropping;
- (void)doneCropping:(id)arg1;
- (id)mediaItemWithUUID:(id)arg1;
- (id)mediaItemWithAssetIdentifier:(id)arg1;
- (void)removeMediaItemAtIndex:(long long)arg1;
- (void)handleDocumentDetectionGesture:(id)arg1;
- (void)addMoreMediaItemsFromPhotoLibrary;
- (void)dismiss;
- (void)promptForConfirmationToDeleteItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleCancelAction;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)addMediaItem:(id)arg1;
- (void)cancelExportingAndDisableAutoExportingForAllMediaItems;
- (void)mediaItemDidUpdatePreviewContent:(id)arg1;
- (void)showBadItemMessageForIndex:(long long)arg1;
- (void)registerMultiSendMediaItem:(id)arg1;
- (unsigned long long)indexOfMediaItemWithIdentifier:(id)arg1;
- (void)updateInterfaceWithAnimation:(_Bool)arg1;
- (id)currentMediaItem;
- (void)reloadMediaContent;
- (void)reload;
- (void)updateContentInsetWithAnimation:(_Bool)arg1;
- (void)repositionFooterElements;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)wa_prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)resetStats;
- (void)dealloc;
- (id)initWithPickerMode:(unsigned long long)arg1 origin:(unsigned long long)arg2 quality:(id)arg3 enablePaintingIfSupported:(_Bool)arg4;
- (void)cameraViewController:(id)arg1 didSelectMediaPickerItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelSelectionHandler:(CDUnknownBlockType)arg4;
- (void)cameraViewController:(id)arg1 didUnSelectMediaPickerAsset:(id)arg2;
- (void)cameraViewController:(id)arg1 didSelectMediaPickerAsset:(id)arg2 cancelSelectionHandler:(CDUnknownBlockType)arg3;
- (void)cameraViewControllerDidRequestPresentPhotoLibrary:(id)arg1;
- (void)cameraViewController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)cameraViewController:(id)arg1 didFinishWithMediaItems:(id)arg2 gestureRecognizer:(id)arg3;
- (void)mentionsSelectorView:(id)arg1 didSelectContactWithName:(id)arg2 jid:(id)arg3 forTextRange:(struct _NSRange)arg4;
- (_Bool)captionBar:(id)arg1 canMentionUser:(id)arg2;
- (void)captionBarDidStopEditingMention:(id)arg1;
- (void)captionBar:(id)arg1 didEditMention:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)captionBarShouldTrackMentions:(id)arg1;
- (void)captionBarDidRequestAddMedia:(id)arg1;
- (_Bool)canCaptionBarAddMedia:(id)arg1;
- (void)captionBarDidRequestSendMessage:(id)arg1;
- (void)captionBarDidFinishEditing:(id)arg1;
- (void)captionBarDidChangeText:(id)arg1;
- (void)captionBarDidHideKeyboard:(id)arg1;
- (void)captionBarWillHideKeyboard:(id)arg1;
- (void)captionBarDidShowKeyboard:(id)arg1;
- (void)captionBarIgnoreWillShowKeyboard:(id)arg1;
- (void)captionBarWillShowKeyboard:(id)arg1;
- (void)configureMentionsSelectorView;
- (void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2;
- (void)captureMoreMediaWithCamera;
- (void)addMoreMediaItems;
- (void)resetCaptionBarDelegate;
- (void)setCaptionOfCurrentItem:(id)arg1;
- (void)captionBarWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)captionBarDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)captionBarWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)wa_fontSizeDidChange;
- (void)updateCaption;
- (void)layoutCaptionBar;
- (void)initializeAndAddCaptionBar;
- (id)impactFeedbackGenerator;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (void)panUpGestureRecognizerDidFinishTransition:(id)arg1 offsetY:(double)arg2 velocityY:(double)arg3;
- (void)panUpGestureRecognizerDidChangeTransition:(id)arg1 offsetY:(double)arg2;
- (void)panUpGestureRecognizerWillBeginTransition:(id)arg1;
- (_Bool)isPanUpGestureRecognizerWillCheckBeginTransition:(id)arg1;
- (_Bool)isPanDownGestureRecognizerWillCheckBeginTransition:(id)arg1;
- (void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)arg1;
- (void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)arg1;
- (void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)arg1;
- (void)setupFilterIndex:(id)arg1;
- (void)reConfigCurrentMediaItem:(_Bool)arg1;
- (id)snapshotViewForFilterTransitionAnimation;
- (void)dismissFilterPreviewInTransition:(CDUnknownBlockType)arg1;
- (void)presentFilterPreviewInTransition:(CDUnknownBlockType)arg1;
- (void)reLayoutForFilterImageToImageTransitionWithProgress:(double)arg1;
- (void)reLayoutForMultiSendTransition;
- (void)reLayoutForFilterTransition;
- (void)hideFilterDidComplete;
- (void)showFilterDidComplete;
- (void)hideFilterPreviewAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)showFilterPreviewAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (id)filterTemplateStripView:(id)arg1 filterAtIndex:(long long)arg2;
- (id)filterTemplateStripView:(id)arg1 voiceOverLabelForFilterAtIndex:(long long)arg2;
- (long long)numberOfItemsForFilterTemplateStripView:(id)arg1;
- (id)currentMediaItemForFilterTemplateStripView:(id)arg1;
- (void)filterTemplateStripView:(id)arg1 didSelectFilterAtIndex:(long long)arg2;
- (void)filterCurrentMediaItemWithFilterIndex:(long long)arg1;
- (unsigned long long)calculateFilterIndex:(long long)arg1;
- (double)bottomSpace;
- (double)topSpace;
- (void)filterPreviewViewDidTap:(id)arg1;
- (void)filterPreviewViewDidPanRightFinish:(id)arg1;
- (void)filterPreviewViewDidPanLeftFinish:(id)arg1;
- (void)filterPreviewViewDidPanUpFinish:(id)arg1 offsetY:(double)arg2 velocityY:(double)arg3;
- (void)filterPreviewViewDidPanUpChange:(id)arg1 offsetY:(double)arg2;
- (void)filterPreviewViewDidPanUpBegin:(id)arg1;
- (void)filterPreviewViewDidPanDownFinish:(id)arg1 offsetY:(double)arg2 velocityY:(double)arg3;
- (void)filterPreviewViewDidPanDownChange:(id)arg1 offsetY:(double)arg2;
- (void)filterPreviewViewDidPanDownBegin:(id)arg1;
- (void)newRevertImageToMultiSendTransitionWithProgress:(double)arg1;
- (void)newRevertImageToFilterTransitionWithProgress:(double)arg1;
- (void)resumeFilterToMultiSendAnimationWithDuration:(double)arg1;
- (void)newResumeFilterToMultiSendImageToImageTransitionWithVelocity:(double)arg1 progress:(double)arg2;
- (void)resumeMultiSendToFilterAnimationWithDuration:(double)arg1;
- (void)newResumeMultiSendToFilterImageToImageTransitionWithVelocity:(double)arg1 progress:(double)arg2;
- (void)newFilterPanAnimationFinishedWithOffsetY:(double)arg1 velocityY:(double)arg2 isPanUpToFilter:(_Bool)arg3;
- (void)newMultiSendToFilterPanAnimationChangedWithOffsetY:(double)arg1;
- (void)newFilterToMultiSendPanAnimationChangedWithOffsetY:(double)arg1;
- (_Bool)panPopGestureShouldReceiveTouch:(id)arg1;
- (_Bool)isPanPopGestureRecognizer:(id)arg1;
- (void)resetPanPopGestureDelegate;
- (void)initializePanPopGesture;
- (_Bool)supportsFilters;
- (void)registerMediaItemByCurrentFilterRender:(id)arg1;
- (_Bool)hasFilterRender;
- (void)initializeFilterModels;
- (void)prepareToShowFilterHint;
- (void)showFilterHint;
- (void)hideFilterHint;
- (void)impactFeedbackGeneratorPrepare;
- (void)impactFeedbackGeneratorDestory;
- (void)impactFeedbackGeneratorOccured;
- (void)openFilterWithVoiceOver;
- (_Bool)isFilterViewsShowing;
- (_Bool)isFilterViewTransitionOnGoing;
- (void)layoutFilterSubviews;
- (void)initializeFilterViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

