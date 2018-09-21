//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAProcess.h>

@class NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WAProcessMain : WAProcess
{
    CDUnknownBlockType _didResumeHandler;
    NSObject<OS_dispatch_source> *_backgroundPollingTimer;
    unsigned long long _mainBackgroundTask;
    unsigned long long _foregroundTask;
    _Bool _didResetSuspendingWhileSuspending;
    _Bool _needsResumePollingTimerOnResume;
    double _systemUptimeWhenLastSuspended;
    CDUnknownBlockType _willSuspendHandler;
    long long _disablingApplicationIdleTimerCount;
}

@property(readonly, nonatomic) long long disablingApplicationIdleTimerCount; // @synthesize disablingApplicationIdleTimerCount=_disablingApplicationIdleTimerCount;
- (void).cxx_destruct;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)internalDismissKeyboard;
- (void)endDisablingApplicationIdleTimer;
- (void)beginDisablingApplicationIdleTimer;
- (_Bool)isIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;
- (void)prepareToSuspend;
- (void)resetSuspendingIfNeeded;
- (void)checkApplicationBackgroundState;
- (void)setDidResumeHandler:(CDUnknownBlockType)arg1;
- (void)setWillSuspendHandler:(CDUnknownBlockType)arg1;
- (void)setUpMainBackgroundTaskIfNeeded;
- (void)registerConnectionConditionalOnXMPPConnection:(id)arg1;
- (id)mainWindow;
- (double)backgroundTimeRemaining;
- (long long)threadSafeApplicationState;
- (long long)applicationState;
- (id)application;
- (void)processWillEnterForeground;
- (void)processDidEnterBackground;
- (void)setUpApplicationLifecycleMonitoring;
- (id)init;

@end

