//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAChatSessionNotificationView;

@protocol WAChatSessionNotificationViewDelegate <NSObject>
- (void)chatSessionNotificationControllerNeedsUpdatedHeight:(WAChatSessionNotificationView *)arg1;
- (void)chatSessionNotificationViewWasTapped:(WAChatSessionNotificationView *)arg1;
- (void)chatSessionNotificationViewDidDismiss:(WAChatSessionNotificationView *)arg1;
@end

