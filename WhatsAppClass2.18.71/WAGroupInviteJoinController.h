//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAChatSession, WAExactTimer, XMPPGroup;
@protocol WAGroupInviteJoinControllerDelegate, WAGroupInviteJoinUISupport;

__attribute__((visibility("hidden")))
@interface WAGroupInviteJoinController : NSObject
{
    WAExactTimer *_chatStorageNotificationTimeoutTimer;
    _Bool _cancelled;
    id <WAGroupInviteJoinControllerDelegate> _delegate;
    NSString *_inviteCode;
    id <WAGroupInviteJoinUISupport> _uiController;
    XMPPGroup *_group;
    WAChatSession *_chatSession;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
@property(retain, nonatomic) XMPPGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) id <WAGroupInviteJoinUISupport> uiController; // @synthesize uiController=_uiController;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(nonatomic) __weak id <WAGroupInviteJoinControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveNotification;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)transactionDidInsertChatSession:(id)arg1;
- (void)stopMonitoringChatStorageNotifications;
- (void)startMonitoringChatStorageNotifications;
- (void)dismissController;
- (void)connectionTimedOut;
- (void)handleGroupInviteError:(id)arg1;
- (void)hideActivityIndicatorAndReportSuccessfulGroupJoin;
- (void)joinGroup;
- (void)askForConfirmationToJoinGroup:(id)arg1;
- (void)startFetchingGroupInfo;
- (void)startCheckingInviteLink;
- (void)presentFromViewController:(id)arg1;

@end

