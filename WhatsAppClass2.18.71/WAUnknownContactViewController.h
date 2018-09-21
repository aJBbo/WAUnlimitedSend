//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "WAContactEditViewControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAUnknownContactViewController : WAStaticTableViewController <ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate, WAContactEditViewControllerDelegate>
{
    NSString *_visibleText;
    long long _dataType;
    id _data;
    NSString *_jid;
}

@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *visibleText; // @synthesize visibleText=_visibleText;
- (void).cxx_destruct;
- (void)presentDisabledAddressBookViewController;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)addUnknownContactDataToExistingContact;
- (void)saveUnknownContactDataAsNewContact;
- (void)presentEditingScreenForContact:(id)arg1;
- (void)contactEditControllerDidCancel:(id)arg1;
- (void)contactEditControllerDidSave:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)dismiss;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)setUpTableView;
- (id)initWithStyle:(long long)arg1;
- (id)initWithRawData:(id)arg1 dataType:(long long)arg2;
- (id)initWithJID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

