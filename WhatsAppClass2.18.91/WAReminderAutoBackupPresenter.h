//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "WACloudReminderViewControllerDelegate-Protocol.h"
#import "WAHelperScreenPresenting-Protocol.h"
#import "WAUpgradeCallback-Protocol.h"

@class NSString, WAReminderAutoBackupViewController;

__attribute__((visibility("hidden")))
@interface WAReminderAutoBackupPresenter : UINavigationController <WAUpgradeCallback, WACloudReminderViewControllerDelegate, WAHelperScreenPresenting>
{
    WAReminderAutoBackupViewController *_rootViewController;
}

+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (void)muteForCurrentInterval;
+ (void)showAgainAfterDayCountOf:(unsigned long long)arg1;
+ (void)scheduleNextPresentation;
+ (void)presentModallyFromController:(id)arg1;
+ (_Bool)hasEnoughTimeElapsed;
+ (_Bool)canPresentReminder;
- (void).cxx_destruct;
- (_Bool)cloudReminderControllerShouldShowNextButton:(id)arg1;
- (_Bool)cloudReminderControllerShouldShowDoneButton:(id)arg1;
- (void)cloudReminderControllerDidFinish:(id)arg1;
- (void)performNextActionWithDoneButton:(_Bool)arg1;
- (void)cloudAccountChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

