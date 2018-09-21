//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAPaymentLoadingViewControllerType-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"

@class NSArray, NSString, UITableView, WAActivityLabel, WAViewControllerConnectionObserver, XMPPUPIBankResponse;

__attribute__((visibility("hidden")))
@interface WAPaymentUPIBanksViewController : WAViewController <WASearchControllerDelegate, UITableViewDelegate, UITableViewDataSource, WAPaymentLoadingViewControllerType>
{
    NSArray *_banks;
    NSArray *_searchResults;
    CDUnknownBlockType _completion;
    _Bool _resetContentOffsetInDidLayoutSubviews;
    _Bool _doNotAdjustSearchBarPosition;
    UITableView *_tableView;
    XMPPUPIBankResponse *_selectedBank;
    WAActivityLabel *_titleActivityLabel;
    CDUnknownBlockType _loadingCancelledHandler;
    double _cachedRowHeight;
    WAViewControllerConnectionObserver *_connectionObserver;
}

- (void).cxx_destruct;
- (void)stopLoadingUI;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1;
- (id)identifier;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (double)searchController:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configureTableViewCell:(id)arg1 withBank:(id)arg2;
- (void)setSelectedBank:(id)arg1;
- (void)updateHeaderView;
- (void)cancelAction:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)fixSearchBarPlacementWithAnimationDuration:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)wa_prefersMinimalBackButton;
- (void)resetUI;
- (id)initWithBanks:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

