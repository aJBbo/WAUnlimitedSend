//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAAboutTextEditControllerDelegate-Protocol.h"

@class NSIndexPath, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface WAAboutListViewController : WAStaticTableViewController <WAAboutTextEditControllerDelegate>
{
    UIBarButtonItem *_editButton;
    NSIndexPath *_editIndexPath;
    _Bool _editingSingleRow;
}

- (void).cxx_destruct;
- (void)aboutTextEditController:(id)arg1 didFinishWithText:(id)arg2;
- (void)addSpinnerToTableViewCell:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)setUpTableView;
- (void)updateNavigationBarButtons;
- (void)doneAction:(id)arg1;
- (void)editAction:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)wa_applicationDidEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)presentStatusUpdateFailedAlert;
- (void)chatManagerDidUpdateStatus:(id)arg1;
- (void)changeAbout:(id)arg1;
- (id)init;

@end

