//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStarredMessagesBaseViewController.h"

@class WASearchResultsController;

__attribute__((visibility("hidden")))
@interface WAStarredMessagesSearchViewController : WAStarredMessagesBaseViewController
{
    double _keyboardHeight;
    WASearchResultsController *_searchResultsController;
}

@property(retain, nonatomic) WASearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isLoadingSearchResults;
- (void)appendMessages:(id)arg1 animated:(_Bool)arg2;
- (void)controller:(id)arg1 needsConfigureInsertedChatCellData:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)footerInset;
- (id)chatNavigationController;
- (id)navigationController;
- (id)initWithJID:(id)arg1;

@end

