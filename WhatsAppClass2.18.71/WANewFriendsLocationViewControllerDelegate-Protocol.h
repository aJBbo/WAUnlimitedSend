//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAShareLocationControllerDelegate-Protocol.h"

@class NSDate, WAPlace;
@protocol WAServerDate;

@protocol WANewFriendsLocationViewControllerDelegate <WAShareLocationControllerDelegate>
- (void)friendsLocationSendLiveLocationPlace:(WAPlace *)arg1 liveLocationEndDate:(NSDate<WAServerDate> *)arg2 completion:(void (^)(WAMessage *))arg3;
@end

