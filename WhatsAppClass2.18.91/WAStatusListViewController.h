//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "WACircleMovePresentationControllerDelegate-Protocol.h"
#import "WAMultiSendMediaPickerControllerDelegate-Protocol.h"
#import "WAMultiShotCameraControllerDelegate-Protocol.h"
#import "WAOutgoingStatusChatSessionCellDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"
#import "WAStatusListNUXCellDelegate-Protocol.h"
#import "WAStatusTextComposerViewControllerDelegate-Protocol.h"
#import "WAStatusViewerViewControllerDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSMutableSet, NSString, NSTimer, WAChatSessionTransactionListener, WAOutgoingStatusChatSessionCell, WASearchResultsController, WAStatusListNUXCell, WAStatusV3NavigationController, WAWeakTimer;

__attribute__((visibility("hidden")))
@interface WAStatusListViewController : WATableViewController <WAMultiSendMediaPickerControllerDelegate, WAMultiShotCameraControllerDelegate, WAOutgoingStatusChatSessionCellDelegate, WAStatusListNUXCellDelegate, WAStatusTextComposerViewControllerDelegate, WAStatusViewerViewControllerDelegate, WACircleMovePresentationControllerDelegate, WASearchControllerDelegate, WASearchResultsControllerDelegate, NSFetchedResultsControllerDelegate>
{
    _Bool _isUpdatingTable;
    _Bool _didReceiveMoveChangeEvent;
    _Bool _needsReloadData;
    _Bool _needsHideExpiredMessagesOnForeground;
    _Bool _muteUnmuteInProgress;
    _Bool _showNUX;
    _Bool _hasAppeared;
    _Bool _userHasScrolled;
    _Bool _rankingEnabled;
    CDUnknownBlockType _pendingPresentation;
    WASearchResultsController *_searchResultsController;
    NSArray *_sectionInfos;
    WAWeakTimer *_timeLabelTimer;
    WAStatusListNUXCell *_nuxCell;
    WAOutgoingStatusChatSessionCell *_myStatusCell;
    NSMutableSet *_seenJids;
    NSTimer *_markJidsAsSeenTimer;
    WAChatSessionTransactionListener *_incomingStatusListener;
}

- (void).cxx_destruct;
- (id)searchModeChatSessionForIndexPath:(id)arg1;
- (void)reloadSearchResultsTableView;
- (_Bool)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned long long)arg2;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (id)searchController:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)presentChatSessionIfNecessary:(id)arg1 forSection:(unsigned long long)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (_Bool)searchResultsControllerShouldReloadData:(id)arg1;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfRowsInSearchControllerSection:(long long)arg1;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (id)destinationViewForCircleMovePresentationControllerDelegate:(id)arg1;
- (void)dismissViewController:(id)arg1 withGesture:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)markVisibleJidsAsSeen;
- (void)checkTableViewForConsistency;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)updateFetchRequest;
- (void)setUpFetchRequests;
- (id)fetchedResultsControllerSortDescriptors;
- (id)createFetchedResultsControllerWithPredicate:(id)arg1;
- (id)predicateForSection:(unsigned long long)arg1;
- (void)hideExpiredMessages;
- (void)chatStorageDidChangeNextExpirationDate:(id)arg1;
- (void)presentStatusPrivacySettingsPicker;
- (void)presentChatSession:(id)arg1 inChatSessions:(id)arg2 autoAdvanceChatSession:(_Bool)arg3 animated:(_Bool)arg4 fromOrigin:(unsigned long long)arg5;
- (void)presentChatSession:(id)arg1 inSection:(unsigned long long)arg2;
- (void)presentChatSession:(id)arg1;
- (id)sectionOfChatSession:(id)arg1;
- (unsigned long long)indexOfController:(id)arg1;
- (id)indexPathFrom:(id)arg1 inController:(id)arg2;
- (id)chatSessionForIndexPath:(id)arg1;
- (id)cellForVisibleChatSession:(id)arg1;
- (void)multiSendMediaPickerControllerDidCancel:(id)arg1;
- (void)multiSendMediaPickerController:(id)arg1 didSelectItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)multiShotCameraController:(id)arg1 didRequestPresentPhotoLibraryWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)multiShotCameraController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)multiShotCameraController:(id)arg1 didCaptureItems:(id)arg2 pickerStatistics:(id)arg3;
- (void)sendMediaItems:(id)arg1 pickerStatistics:(id)arg2;
- (void)statusTextComposerViewController:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)callDidBecomeVoice:(id)arg1;
- (void)callDidBecomeVideo:(id)arg1;
- (void)callDidEnd:(id)arg1;
- (void)callDidStart:(id)arg1;
- (void)outgoingStatusCellDidTapTextButton:(id)arg1;
- (void)outgoingStatusCellDidTapCameraButton:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 withChatSession:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)reallyMuteOrUnmuteChatSession:(id)arg1;
- (void)muteOrUnmuteChatSession:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)cellForChatSession:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 withChatSession:(id)arg3;
- (id)tableViewCellForNoStatus:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldShowNUX;
- (void)dismissNUX;
- (void)statusListNUXCellDidRequestDismiss:(id)arg1;
- (void)statusListNUXCellDidRequestPresentPrivacyScreen:(id)arg1;
- (void)didUpdateServerProperties:(id)arg1;
- (void)pushDetailControllerAnimated:(_Bool)arg1;
- (void)updateStatusTimestampInVisibleCellsIfNeeded;
- (void)scheduleTimeLabelTimerIfNeeded;
@property(readonly, nonatomic) _Bool hasUnwatchedStatusUpdates;
@property(readonly, nonatomic) _Bool hasAnyStatusUpdates;
- (id)titleForSection:(unsigned long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (void)wa_applicationDidEnterBackground;
- (void)wa_applicationWillEnterForeground;
- (id)allIncomingControllers;
@property(readonly, nonatomic) NSFetchedResultsController *recentResultsController;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WAStatusV3NavigationController *navigationController; // @dynamic navigationController;
@property(readonly) Class superclass;

@end

