//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WACameraControllerDelegate-Protocol.h"

@class CMMotionManager, NSString, UIView, WACameraController;

__attribute__((visibility("hidden")))
@interface WABasicCameraViewController : WAViewController <WACameraControllerDelegate>
{
    UIView *_previewSnapshot;
    CMMotionManager *_motionManager;
    UIView *_simulatorPreviewView;
    WACameraController *_cameraController;
    UIView *_containerView;
    long long _deviceOrientationForInterface;
}

+ (_Bool)startCameraAutomatically;
+ (_Bool)useBackCamera;
+ (long long)cameraMode;
@property(nonatomic) long long deviceOrientationForInterface; // @synthesize deviceOrientationForInterface=_deviceOrientationForInterface;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) WACameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void).cxx_destruct;
- (void)videoRecordingDidCancel;
- (void)videoRecordingDidFinishRecordingToFile:(id)arg1;
- (void)videoRecordingDidFailWithError:(id)arg1;
- (void)cameraControllerDidEnterLowLightEnvironment:(id)arg1;
- (void)cameraControllerDidCancelVideoRecording:(id)arg1;
- (void)cameraController:(id)arg1 videoRecordingDidFinishRecordingToFile:(id)arg2;
- (void)cameraController:(id)arg1 videoRecordingDidFailWithError:(id)arg2;
- (void)cameraControllerDidReceiveRuntimeErrorNotification:(id)arg1;
- (void)cameraController:(id)arg1 didDetectQRCode:(id)arg2;
- (void)cameraControllerDidChangeFlashActiveState:(id)arg1;
- (void)cameraControllerDidUpdateFaceObjects:(id)arg1;
- (void)cameraControllerDidChangePreviewImageSize:(id)arg1;
- (void)cameraControllerDidResetPointOfInterest:(id)arg1;
- (void)cameraControllerSessionDidStopRunning:(id)arg1;
- (void)cameraControllerSessionDidBeginRunning:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)deviceOrientationForInterfaceDidChangeWithAnimation:(_Bool)arg1;
@property(readonly, nonatomic) long long currentCaptureVideoOrientation;
- (long long)deviceOrientationFromAccelerometerData:(id)arg1;
- (void)updateDeviceOrientationWithAccelerometerData:(id)arg1;
- (void)setDeviceOrientationForInterface:(long long)arg1 animated:(_Bool)arg2;
- (void)stopAccelerometerUpdatesIfNeeded;
- (void)startAccelerometerUpdatesIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)tearDownCameraController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didCreateCameraController;
@property(readonly, nonatomic) UIView *cameraControllerPreviewView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

