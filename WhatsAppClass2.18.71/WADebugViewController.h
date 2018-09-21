//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "UISearchDisplayDelegate-Protocol.h"

@class NSString, UISearchDisplayController, WAServerStatus, WATableRow, WATableSection;

__attribute__((visibility("hidden")))
@interface WADebugViewController : WAStaticTableViewController <UISearchDisplayDelegate>
{
    WATableRow *_rowCurrentHost;
    WATableRow *_rowServerIP;
    WATableRow *_rowChatDBSize;
    WATableRow *_rowContactsDBSize;
    WATableRow *_rowDeleteOrphanedMessages;
    WATableRow *_rowTOSRegion;
    WATableSection *_sectionGeneral;
    WATableRow *_row3DTouchSettings;
    WAServerStatus *_pendingServerStatus;
    UISearchDisplayController *_menuSearchDisplayController;
    WATableSection *_searchSection;
}

- (void).cxx_destruct;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)reconnect;
- (void)reloadConnectionInfo;
- (void)setUpTableView;
- (void)deselectActiveSearchCell;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

