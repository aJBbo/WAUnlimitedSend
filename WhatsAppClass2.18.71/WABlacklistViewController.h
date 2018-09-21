//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "WASinglePersonPickerDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface WABlacklistViewController : WATableViewController <WASinglePersonPickerDelegate>
{
    NSMutableArray *_blockedContacts;
    UITableViewCell *_addNewCell;
    _Bool _ignoreBlockedContactListNotifications;
    NSMutableSet *_pendingUnblocks;
}

+ (id)controller;
- (void).cxx_destruct;
- (void)processUnblockedHandlesRequest:(id)arg1;
- (void)requestToUnblockUPIContact:(id)arg1;
- (id)excludedJIDsForWASinglePersonPicker:(id)arg1;
- (void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)singlePersonPickerDidCancel:(id)arg1;
- (void)addPerson;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)blockedContactsListUpdated:(id)arg1;
- (void)removeContact:(id)arg1;
- (unsigned long long)addContact:(id)arg1;
- (void)showUnableToMakeChangesError;
- (_Bool)canMakeChanges;
- (void)updateInterface;
- (void)reloadBlacklistItems;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)wa_tintColorDidChange;
- (void)wa_fontSizeDidChange;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureTableViewRowHeight;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

