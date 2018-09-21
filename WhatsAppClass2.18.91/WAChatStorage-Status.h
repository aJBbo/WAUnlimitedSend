//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAChatStorage.h>

@class WAChatSession;

@interface WAChatStorage (Status)
+ (id)refreshStatusETag;
+ (id)statusETag;
+ (double)statusHiddenIntervalFor:(short)arg1;
- (void)registerForLocalNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)checkPSADeletion;
- (void)schedulePSADeletionIn:(double)arg1;
- (id)queryIncomingStatusPSASession;
- (void)registerForMessageDeletionNotification;
- (void)registerForMessageReceivedNotification;
- (void)internalBadgeDidChangeExpirationDate;
- (void)hideStatusBadge;
- (void)applyBadgeDateBoundary;
- (void)saveBadgeDateBoundary;
- (void)updateStatusBadgeVisible;
- (_Bool)shouldShowStatusBadge;
@property(readonly, nonatomic, getter=isStatusBadgeVisible) _Bool statusBadgeVisible;
@property(nonatomic, getter=isStatusTabVisible) _Bool statusTabVisible;
- (void)internalPrepareStatusBadge;
- (void)invalidateStatusMessageCountFor:(id)arg1;
- (void)scheduleDailyStatusFieldstats;
- (void)registerForMessageUpdatedNotification;
- (void)registerForMessagesAddedNotification;
- (void)registerForServerShiftNotification;
- (void)rescheduleAllStatusExpirationTasks;
- (void)scheduleUpdateExpirationDate;
- (void)scheduleDelayedUpdateExpirationDate;
- (void)scheduleStatusExpirationTasks;
- (void)postVisibleExpirationDateChangedNotification;
- (id)nextVisibleStatusExpirationDate;
- (_Bool)statusMessageExpired:(id)arg1;
- (void)updateLastStatusExpirationDate;
- (void)updateStatusListMembers;
@property(readonly, nonatomic) WAChatSession *statusChatSession;
- (id)existingStatusChatSession;
@end
