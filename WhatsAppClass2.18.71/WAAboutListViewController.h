//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WAAboutListEditViewControllerDelegate-Protocol.h"
#import "WAStatusEditControllerDelegate-Protocol.h"

@class NSString, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface WAAboutListViewController : WAStaticTableViewController <WAAboutListEditViewControllerDelegate, WAStatusEditControllerDelegate>
{
    UIBarButtonItem *_editButton;
}

- (void).cxx_destruct;
- (void)statusEditController:(id)arg1 didSaveStatus:(id)arg2;
- (void)statusEditControllerDidCancel:(id)arg1;
- (void)aboutListEditViewControllerDidFinish:(id)arg1;
- (void)addSpinnerToTableViewCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)setUpTableView;
- (void)leaveEditMode;
- (void)editAction:(id)arg1;
- (void)presentStatusUpdateFailedAlert;
- (void)wa_applicationDidEnterBackground;
- (void)wa_fontSizeDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)chatManagerDidUpdateStatus:(id)arg1;
- (void)changeAbout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

