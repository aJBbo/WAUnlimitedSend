//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WARootViewController;

@protocol WARootViewControllerDelegate <NSObject>
- (_Bool)isApplicationBecomingActiveForRootViewController:(WARootViewController *)arg1;
- (void)rootViewControllerDidRequestReconfigureUserNotificationSettingsForTOS:(WARootViewController *)arg1;
- (void)rootViewControllerDidRequestMinimizeCallScreen:(WARootViewController *)arg1;
- (void)rootViewControllerDidRequestMaximizeCallScreen:(WARootViewController *)arg1;
- (void)rootViewControllerDidLoadChatStore:(WARootViewController *)arg1;
- (void)rootViewControllerDidChangeState:(WARootViewController *)arg1;
@end

