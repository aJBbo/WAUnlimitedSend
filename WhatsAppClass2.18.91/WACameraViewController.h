//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABasicCameraViewController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WACameraButtonViewDelegate-Protocol.h"
#import "WACameraControllerDelegate-Protocol.h"
#import "WACameraRollStripViewDelegate-Protocol.h"
#import "WAChangeCameraButtonViewDelegate-Protocol.h"
#import "WANavigationControllerPopToAnimating-Protocol.h"

@class NSMutableArray, NSObject, NSString, NSTimer, UIButton, UIImage, UIImageView, UIImpactFeedbackGenerator, UILabel, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISwipeGestureRecognizer, UIView, WACameraButtonView, WACameraFlashSelector, WACameraFocusBoxView, WACameraRecordingTimeView, WACameraRollStripView, WACameraStillPhotoRequest, WACameraWellView, WACameraZoomSlider, WAChangeCameraButtonView, WAMediaPickerAsset, WAMediaPickerItem, WAMultiSendMediaItemQuality, WamEventCamera;
@protocol OS_dispatch_group, WACameraViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WACameraViewController : WABasicCameraViewController <WACameraControllerDelegate, WACameraButtonViewDelegate, WACameraRollStripViewDelegate, UIGestureRecognizerDelegate, WAChangeCameraButtonViewDelegate, WANavigationControllerPopToAnimating, UIViewControllerPreviewingDelegate, PHPhotoLibraryChangeObserver>
{
    WACameraFocusBoxView *_focusBoxView;
    NSMutableArray *_mediaItems;
    NSObject<OS_dispatch_group> *_processingDispatchGroup;
    WACameraFlashSelector *_flashSelector;
    UIImageView *_flashBadgeView;
    long long _suppressFlashBadgeViewCounter;
    WACameraZoomSlider *_zoomSlider;
    UIPinchGestureRecognizer *_zoomPinchGesture;
    double _zoomFactorBeforePinching;
    long long _lastBackCameraFlashMode;
    long long _lastFrontCameraFlashMode;
    NSMutableArray *_faceViews;
    _Bool _initialResetFocusBoxShown;
    _Bool _statusBarShouldReallyBeHidden;
    WACameraRollStripView *_cameraRollPicker;
    UISwipeGestureRecognizer *_cameraRollSwipeUpGesture;
    UISwipeGestureRecognizer *_cameraRollSwipeDownGesture;
    long long _initialDeviceOrientation;
    WAMediaPickerAsset *_selectedMediaPickerAsset;
    NSTimer *_recordingTimer;
    WACameraRecordingTimeView *_recordingTimeView;
    WACameraStillPhotoRequest *_currentStillPhotoRequest;
    UIView *_fakeFlashWhiteView;
    double _originalScreenBrightness;
    long long _cameraTriggerCounter;
    UIButton *_photosButton;
    WACameraWellView *_wellView;
    _Bool _needsDisplayCameraRollPicker;
    UIPanGestureRecognizer *_dismissGesture;
    _Bool _needsAbandonCurrentCapture;
    WAMediaPickerItem *_pickerItemBeingPreviewed;
    UIButton *_lowLightButton;
    _Bool _isInImageToImageTransitioning;
    UIButton *_backButton;
    UIView *_bottomBarView;
    WACameraButtonView *_cameraButtonView;
    UILabel *_recordingHintLabel;
    double _recordingHintInitialHeight;
    UIView *_recordingHintShadow;
    WAChangeCameraButtonView *_changeCameraButtonView;
    long long _collectionFetchingIndex;
    long long _assetsFetchingIndex;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    WamEventCamera *_cameraFieldStatsEvent;
    double _cameraPresentationStartTimestamp;
    double _cameraButtonPressDownStartTimestamp;
    double _cameraButtonPressUpStartTimestamp;
    double _photoTakenStartTimestamp;
    _Bool _includesCameraRollPicker;
    _Bool _bottomBarDucked;
    id <WACameraViewControllerDelegate> _delegate;
    unsigned long long _initialWellCount;
    unsigned long long _maximumWellCount;
    UIImage *_initialWellPreviewImage;
    WAMultiSendMediaItemQuality *_quality;
    unsigned long long _origin;
}

+ (_Bool)useBackCamera;
+ (_Bool)hasVisibleInstances;
@property(nonatomic, getter=isBottomBarDucked) _Bool bottomBarDucked; // @synthesize bottomBarDucked=_bottomBarDucked;
@property(readonly, nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) WAMultiSendMediaItemQuality *quality; // @synthesize quality=_quality;
@property(retain, nonatomic) UIImage *initialWellPreviewImage; // @synthesize initialWellPreviewImage=_initialWellPreviewImage;
@property(nonatomic) unsigned long long maximumWellCount; // @synthesize maximumWellCount=_maximumWellCount;
@property(nonatomic) unsigned long long initialWellCount; // @synthesize initialWellCount=_initialWellCount;
@property(nonatomic) _Bool includesCameraRollPicker; // @synthesize includesCameraRollPicker=_includesCameraRollPicker;
@property(nonatomic) __weak id <WACameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)submitCameraFieldStatsEvent;
- (id)newCameraFieldStatsEvent;
- (void)handleTapOnWell:(id)arg1;
- (void)handleDismissGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCameraRollSwipeDown:(id)arg1;
- (void)handleCameraRollSwipeUp:(id)arg1;
- (_Bool)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1;
- (id)popAnimationControllerFromViewController:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (void)userDidBeginInteractingWithCameraRollStripView:(id)arg1;
- (void)toggleLivePhotoAsPhotoSelectionOfMediaPickerAsset:(id)arg1;
- (void)toggleLivePhotoAsGifSelectionOfMediaPickerAsset:(id)arg1;
- (void)toggleSelectionOfMediaPickerAsset:(id)arg1;
- (void)cameraRollStripView:(id)arg1 didLongPressItemAtIndex:(id)arg2;
- (_Bool)isAssetSelectedAsGIF:(id)arg1;
- (_Bool)isAssetSelectedAsPhoto:(id)arg1;
- (void)cameraRollStripViewDidChangePresentationState:(id)arg1;
- (void)didAssetUnSelected:(id)arg1;
- (void)didAssetSelected:(id)arg1;
- (void)cameraRollStripView:(id)arg1 didSelectMediaPickerAsset:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)previewingViewControllerForAsset:(id)arg1;
- (_Bool)canSelectMediaPickerAsset:(id)arg1;
- (void)cameraControllerDidEnterLowLightEnvironment:(id)arg1;
- (void)cameraControllerDidChangeFlashActiveState:(id)arg1;
- (void)cameraControllerDidUpdateFaceObjects:(id)arg1;
- (void)cameraControllerDidChangePreviewImageSize:(id)arg1;
- (void)cameraControllerDidResetPointOfInterest:(id)arg1;
- (void)cameraControllerSessionDidStopRunning:(id)arg1;
- (void)cameraControllerSessionDidBeginRunning:(id)arg1;
- (void)refetchLibraryAssetsWithShowPicker:(_Bool)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (float)currentNormalizedSwipeUpDistanceForCameraButtonView:(id)arg1;
- (void)cameraButtonViewDidChangeSwipeDistance:(id)arg1;
- (void)attemptToStartVideoRecording;
- (void)cameraButtonViewDidBeginLongPress:(id)arg1;
- (void)cameraButtonViewDidEndTouch:(id)arg1;
- (void)cameraButtonViewDidBeginTouch:(id)arg1;
- (void)userDidPressVolumeKey:(id)arg1;
- (void)updateFaces;
- (void)clearAllFaces;
- (void)handleDoubleTapToChangeCamera:(id)arg1;
- (void)handleTapToFocus:(id)arg1;
- (void)showResetFocusBox;
- (void)showFocusBoxOfWidth:(double)arg1 atPoint:(struct CGPoint)arg2;
- (void)deviceOrientationForInterfaceDidChangeWithAnimation:(_Bool)arg1;
- (void)callDidEnd:(id)arg1;
- (void)callDidStart:(id)arg1;
- (void)recordingTimerDidFire:(id)arg1;
- (void)videoRecordingDidCancel;
- (void)videoRecordingDidFinishRecordingToFile:(id)arg1;
- (void)videoRecordingDidFailWithError:(id)arg1;
- (void)didStopVideoRecording;
- (void)willStartVideoRecording;
- (void)cancelVideoRecording;
- (void)stopVideoRecording;
- (_Bool)startVideoRecording;
- (void)pinchGestureChanged:(id)arg1;
- (void)zoomSliderChanged:(id)arg1;
- (void)setNormalizedZoomFactor:(float)arg1;
- (void)updateZoomInterfaceForCurrentCameraSettings;
- (void)hideLowLightButtonIfNecessary;
- (void)showLowLightButtonIfNecessary;
- (void)updateFlashBadge;
- (void)updateFlashInterfaceForCurrentCameraSettingsWithAnimation:(_Bool)arg1;
- (void)flashModeChanged:(id)arg1;
- (void)applyCameraSelection;
- (void)changeCameraButtonViewDidChangeState:(id)arg1;
- (void)handleTapOnLowLightButton;
- (void)prepareToTearDownCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processStillPhoto;
- (void)takeStillPhotoWithShutterAnimation:(_Bool)arg1;
- (void)cancelAndDismissWithAnimation:(_Bool)arg1;
- (void)doneTakingPhotos;
- (void)presentPhotoLibrary:(id)arg1;
- (void)done:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)updateRecordingHintLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didCreateCameraController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)resetTintColors;
- (void)wa_tintColorDidChange;
- (void)wa_applicationDidEnterBackground;
- (void)destroyCameraRollPicker;
- (void)dealloc;
- (id)initWithMediaItemQuality:(id)arg1 origin:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

