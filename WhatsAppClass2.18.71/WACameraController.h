//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "WACameraPreviewViewDelegate-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVCaptureAudioDataOutput, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureOutput, AVCaptureSession, AVCaptureVideoDataOutput, NSArray, NSMutableDictionary, NSSet, NSString, UIView, WAAudioActivity, WACameraPreviewView;
@protocol WACameraControllerDelegate;

__attribute__((visibility("hidden")))
@interface WACameraController : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, WACameraPreviewViewDelegate>
{
    WACameraPreviewView *_previewView;
    NSMutableDictionary *_faceObjects;
    _Bool _isChangingCamerasInteractively;
    double _lastAutoFocusOnFaceTime;
    _Bool _startSessionOnDidEnterForeground;
    WAAudioActivity *_playbackAndRecordAudioActivity;
    unsigned long long _recordingState;
    AVCaptureSession *_captureSession;
    AVCaptureSession *_audioCaptureSession;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureOutput *_photoOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInput *_videoWriterInput;
    struct opaqueCMFormatDescription *_audioFormatDescription;
    struct opaqueCMFormatDescription *_videoFormatDescription;
    _Bool _needsReexposure;
    struct CGPoint _exposurePointOfInterest;
    unsigned long long _exposureLockID;
    AVAssetWriter *_assetWriter;
    _Bool _isAssetWriterSessionStarted;
    _Bool _needsFinishAssetWriterSession;
    // Error parsing type: AB, name: _isAssetWriterAcceptingSampleBuffers
    int _videoSampleTimeLock;
    CDStruct_1b6d18a9 _timeOfFirstAppendedVideoSampleBuffer;
    CDStruct_1b6d18a9 _timeOfLastAppendedVideoSampleBuffer;
    CDStruct_1b6d18a9 _maximumRecordingDuration;
    long long _videoOrientationForAssetWriter;
    long long _recordingIndex;
    // Error parsing type: Ai, name: _startSessionCounter
    CDStruct_1b6d18a9 _originalExposureDurationOfFrontCamera;
    _Bool _useBackCamera;
    _Bool _exposurePointOfInterestSupported;
    _Bool _focusPointOfInterestSupported;
    _Bool _pretendingToSupportFlash;
    _Bool _flashActive;
    _Bool _running;
    _Bool _lowLightModeEnabled;
    id <WACameraControllerDelegate> _delegate;
    long long _cameraMode;
    NSSet *_supportedFlashModes;
    long long _flashMode;
    double _maximumZoomFactor;
    double _currentZoomFactor;
}

+ (long long)imageOrientationForSourceVideoOrientation:(long long)arg1 targetVideoOrientation:(long long)arg2 backFacingCamera:(_Bool)arg3;
+ (int)numberOfRightAnglesForVideoOrientation:(long long)arg1;
+ (long long)videoOrientationForDeviceOrientation:(long long)arg1;
+ (id)videoCaptureDeviceWithPreferredPositioniOS9:(long long)arg1;
+ (id)videoCaptureDeviceWithPreferredPositioniOS10:(long long)arg1;
+ (id)videoCaptureDeviceWithPreferredPosition:(long long)arg1;
+ (_Bool)hasActiveInstances;
+ (void)recoverUnsavedMediaIfNeeded;
+ (id)temporaryMediaPathWithExtension:(id)arg1;
+ (id)cameraMediaDirectory;
+ (void)showCameraAccessReminderScreenForSource:(long long)arg1;
+ (void)requestCameraPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)setUpPersistentAudioActivityIfNeeded;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)initialize;
@property(nonatomic, getter=isLowLightModeEnabled) _Bool lowLightModeEnabled; // @synthesize lowLightModeEnabled=_lowLightModeEnabled;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) double currentZoomFactor; // @synthesize currentZoomFactor=_currentZoomFactor;
@property(readonly, nonatomic) double maximumZoomFactor; // @synthesize maximumZoomFactor=_maximumZoomFactor;
@property(readonly, nonatomic, getter=isFlashActive) _Bool flashActive; // @synthesize flashActive=_flashActive;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic, getter=isPretendingToSupportFlash) _Bool pretendingToSupportFlash; // @synthesize pretendingToSupportFlash=_pretendingToSupportFlash;
@property(readonly, nonatomic) NSSet *supportedFlashModes; // @synthesize supportedFlashModes=_supportedFlashModes;
@property(readonly, nonatomic) _Bool focusPointOfInterestSupported; // @synthesize focusPointOfInterestSupported=_focusPointOfInterestSupported;
@property(readonly, nonatomic) _Bool exposurePointOfInterestSupported; // @synthesize exposurePointOfInterestSupported=_exposurePointOfInterestSupported;
@property(readonly, nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(readonly, nonatomic) _Bool useBackCamera; // @synthesize useBackCamera=_useBackCamera;
@property(readonly, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak id <WACameraControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enableLowLightMode;
- (void)disableLowLightMode;
- (void)updateISO:(float)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)handleCaptureSessionRuntimeError:(id)arg1;
- (void)mediaServicesWereReset:(id)arg1;
- (void)mediaServicesWereLost:(id)arg1;
- (void)captureDeviceSubjectAreaDidChange:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)cameraPreviewViewDidChangeImageSize:(id)arg1;
@property(readonly, nonatomic) struct CGSize previewImageSize;
- (void)getZoomFactorWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)internalSetZoomFactor:(double)arg1 ofCaptureDeviceInput:(id)arg2;
- (void)setZoomFactor:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (double)maximumZoomFactorForCaptureDeviceInput:(id)arg1;
- (void)updatePointOfInterestWithFaceMetadata;
@property(readonly, copy, nonatomic) NSArray *faceObjects;
- (id)faceObjectWithMetadataObject:(id)arg1 fromConnection:(id)arg2;
- (id)qrCodeObjectWithMetadataObject:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)setUpMetadataOutputForCameraMode:(long long)arg1;
@property(readonly) CDStruct_1b6d18a9 durationOfCurrentVideoRecording;
- (void)finishAssetWriterSession;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 toWriterInput:(id)arg2;
- (void)cleanUpAfterRecording;
- (void)didFailToPrepareRecording;
- (void)startAssetWriterSessionWithVideoOrientation:(long long)arg1;
- (void)cancelVideoRecording;
- (void)stopVideoRecording;
- (void)resetCaptureDeviceAfterVideoRecording:(id)arg1;
- (void)prepareCaptureDeviceForVideoRecording:(id)arg1;
- (_Bool)startVideoRecordingWithVideoOrientation:(long long)arg1;
@property(readonly, nonatomic, getter=isRecordingVideo) _Bool recordingVideo;
@property(readonly, nonatomic, getter=isInLowLightMode) _Bool inLowLightMode;
@property(readonly, nonatomic, getter=isReadyForPhotoCapture) _Bool readyForPhotoCapture;
@property(readonly, nonatomic, getter=isReadyForVideoRecording) _Bool readyForVideoRecording;
- (void)performStillImageCaptureAnimation;
- (void)performPhotoCaptureBlock:(CDUnknownBlockType)arg1;
- (void)exposeAtPoint:(struct CGPoint)arg1;
- (void)exposeAndFocusWithMode:(long long)arg1 atDevicePoint:(struct CGPoint)arg2 monitorSubjectAreaChange:(_Bool)arg3;
- (void)resetPointOfInterest;
- (void)setPointOfInterest:(struct CGPoint)arg1;
- (id)supportedFlashModesForCurrentDevice;
- (void)internalSetFlashMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)internalSetUseBackCamera:(_Bool)arg1 preserveRelativeZoomFactor:(_Bool)arg2 forCameraMode:(long long)arg3;
- (void)startRunningAudioCaptureSessionIfPossible;
- (void)setUseBackCamera:(_Bool)arg1 preserveRelativeZoomFactor:(_Bool)arg2 forCameraMode:(long long)arg3 fromQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setUseBackCamera:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryToUnstickCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopLowLightMode;
- (void)startLowLightMode;
- (void)stopRunning;
- (void)startRunning;
- (void)prepareToTearDownCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopObservingCaptureDevice:(id)arg1;
- (void)startObservingCaptureDevice:(id)arg1;
- (void)dealloc;
- (id)initWithCameraMode:(long long)arg1 useBackCamera:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

