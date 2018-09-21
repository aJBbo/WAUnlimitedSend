//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UISwitch, WALinkLabel, WAParticipantPickerViewController, WATableRow;
@protocol WAChangeNumberNotificationControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAChangeNumberNotificationController : WAStaticTableViewController <WAParticipantPickerViewControllerDelegate>
{
    UISwitch *_switchNotification;
    WATableRow *_allContactsRow;
    WATableRow *_contactsChatRow;
    WATableRow *_customRow;
    NSArray *_customSelectedContacts;
    WAParticipantPickerViewController *_participantPickerViewController;
    WALinkLabel *_footerLabel;
    _Bool _isTableViewSetup;
    _Bool _contactWasUnblocked;
    id <WAChangeNumberNotificationControllerDelegate> _delegate;
    long long _notificationRecipients;
    NSArray *_notificationContacts;
    NSString *_formatedOldPhoneNumber;
    NSString *_formatedNewPhoneNumber;
}

+ (id)indexPathForRow:(unsigned long long)arg1;
+ (_Bool)usesManagedTableViewHeaderFooter;
@property(copy, nonatomic) NSString *formatedNewPhoneNumber; // @synthesize formatedNewPhoneNumber=_formatedNewPhoneNumber;
@property(copy, nonatomic) NSString *formatedOldPhoneNumber; // @synthesize formatedOldPhoneNumber=_formatedOldPhoneNumber;
@property(copy, nonatomic) NSArray *notificationContacts; // @synthesize notificationContacts=_notificationContacts;
@property(nonatomic) long long notificationRecipients; // @synthesize notificationRecipients=_notificationRecipients;
@property(nonatomic) __weak id <WAChangeNumberNotificationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createTableRowWithTitle:(id)arg1 recipients:(long long)arg2 shouldOpenContactPicker:(_Bool)arg3;
- (void)openContactPicker;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)participantPicker:(id)arg1 didUnblockContact:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)newAutoLayoutAwareTableViewFooter;
- (id)newAutoLayoutAwareTableViewHeader;
- (void)reloadData;
- (void)setUpTableView;
- (void)notificationSwitchAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

