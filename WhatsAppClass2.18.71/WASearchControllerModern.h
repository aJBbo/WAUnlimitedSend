//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASearchController.h"

#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class NSString, UISearchController, _WASearchControllerViewController;

__attribute__((visibility("hidden")))
@interface WASearchControllerModern : WASearchController <UISearchControllerDelegate, UISearchResultsUpdating>
{
    _WASearchControllerViewController *_searchViewController;
    UISearchController *_searchController;
    _Bool _lastDefinesPresentationContext;
}

- (void).cxx_destruct;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1;
- (_Bool)isActive;
- (id)tableView;
- (id)searchBar;
- (id)systemSearchController;
- (id)initWithHostViewController:(id)arg1 searchBar:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

