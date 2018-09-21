//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class NSArray, UIView, UIWindow, WALifeCycleWatchdog, WATimeSpentMonitor;

__attribute__((visibility("hidden")))
@interface WAApplication : UIApplication
{
    NSArray *_keyboardShortcuts;
    long long _volumeKeyEventCounter;
    _Bool _wantsSpecialEventHandling;
    // Error parsing type: Ai, name: _applicationState
    double _enteredBackgroundTime;
    long long _stuckInInactiveStateCounter;
    double _willEnterForegroundTime;
    WALifeCycleWatchdog *_lifeCycleWatchdog;
    WATimeSpentMonitor *_timeSpentMonitor;
}

+ (id)wa_delegate;
+ (void)sendVCard:(id)arg1 toContacts:(id)arg2;
+ (unsigned long long)forwardMessages:(id)arg1 toContacts:(id)arg2 toStatus:(_Bool)arg3;
+ (id)transitionForContacts:(id)arg1 andStatus:(_Bool)arg2;
+ (void)transitionToChatSession:(id)arg1;
@property(readonly, nonatomic) WATimeSpentMonitor *timeSpentMonitor; // @synthesize timeSpentMonitor=_timeSpentMonitor;
@property(readonly, nonatomic) WALifeCycleWatchdog *lifeCycleWatchdog; // @synthesize lifeCycleWatchdog=_lifeCycleWatchdog;
- (void).cxx_destruct;
- (void)setupTimeSpentMonitorWithType:(long long)arg1;
- (void)wa_clearNotificationCenterAndApplicationBadge;
- (void)wa_showLocalNotification:(id)arg1 hasAction:(_Bool)arg2 alertAction:(id)arg3 fireDate:(id)arg4;
@property(readonly, nonatomic) UIView *wa_statusBarView;
@property(readonly, nonatomic) double wa_currentStatusBarHeight;
- (_Bool)wa_dismissKeyboard;
- (void)wa_resetKeyboard;
- (id)wa_matchingViewInView:(id)arg1;
- (id)wa_kbView;
@property(readonly, nonatomic) UIWindow *wa_kbViewModern;
@property(readonly, nonatomic) UIWindow *wa_kbViewLegacy;
- (id)wa_viewWithIdentifier:(id)arg1;
- (void)wa_terminate;
- (void)wa_enterBackgroundState;
- (_Bool)wa_isActive;
- (_Bool)wa_isBackgrounded;
- (void)handleStuckInInactiveState;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)didDetectVolumeDownButtonUp:(id)arg1;
- (void)didDetectVolumeDownButtonDown:(id)arg1;
- (void)didDetectVolumeUpButtonUp:(id)arg1;
- (void)didDetectVolumeUpButtonDown:(id)arg1;
- (void)setWantsSpecialEventHandling:(_Bool)arg1;
- (void)endDeliveringSpecialEvents;
- (void)beginDeliveringSpecialEvents;
- (_Bool)openURL:(id)arg1;
- (void)handleCommandReturn:(id)arg1;
- (id)keyCommands;
- (void)sendEvent:(id)arg1;
@property(nonatomic) long long forceQuitCounter;
- (void)wa_applicationWillTerminate:(id)arg1;
- (void)wa_applicationWillResignActive:(id)arg1;
- (void)wa_applicationDidBecomeActive:(id)arg1;
- (void)wa_applicationWillEnterForeground:(id)arg1;
- (void)wa_applicationDidEnterBackground:(id)arg1;
- (void)wa_applicationDidFinishLaunching:(id)arg1;
@property(readonly, nonatomic) int wa_applicationState;
- (void)dealloc;
- (id)init;

@end

