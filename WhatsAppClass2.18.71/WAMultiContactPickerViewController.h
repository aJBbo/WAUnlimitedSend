//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATableViewController.h"

#import "WAContactsSearchControllerDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, UIBarButtonItem, WAContactsSearchController;
@protocol WAMultiContactPickerDelegate;

__attribute__((visibility("hidden")))
@interface WAMultiContactPickerViewController : WATableViewController <WAContactsSearchControllerDelegate, WASearchControllerDelegate>
{
    UIBarButtonItem *_barButtonSelectAll;
    UIBarButtonItem *_barButtonDeselectAll;
    UIBarButtonItem *_barButtonDone;
    NSArray *_sections;
    WAContactsSearchController *_searchController;
    NSArray *_searchResults;
    NSMutableSet *_selectedContacts;
    long long _numberOfContacts;
    long long _centerRowIndexPortrait;
    long long _centerRowIndexLandscape;
    unsigned long long _pickerMode;
    long long _selectionLimit;
    id <WAMultiContactPickerDelegate> _delegate;
}

@property(nonatomic) __weak id <WAMultiContactPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
- (void).cxx_destruct;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (void)contactsSearchControllerDelegateDidInvalidateSearchResults:(id)arg1;
- (void)searchWithCriteria:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForContact:(id)arg2 atIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)configureTableViewRowHeight;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)deselectAllAction:(id)arg1;
- (void)selectAllAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)doneSelectingAction:(id)arg1;
- (id)contactForTableIndexPath:(id)arg1;
- (void)configureWithContactsList:(id)arg1;
- (void)updateButtonTitles;
- (long long)totalCount;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
