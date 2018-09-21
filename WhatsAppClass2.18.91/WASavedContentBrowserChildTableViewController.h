//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "WASavedContentBrowserChildNoItemsViewDataSource-Protocol.h"

@class NSString, _WASavedContentBrowserChildNoItemsView;

__attribute__((visibility("hidden")))
@interface WASavedContentBrowserChildTableViewController : WATableViewController <WASavedContentBrowserChildNoItemsViewDataSource>
{
    _WASavedContentBrowserChildNoItemsView *_noItemsView;
}

@property(retain, nonatomic) _WASavedContentBrowserChildNoItemsView *noItemsView; // @synthesize noItemsView=_noItemsView;
- (void).cxx_destruct;
- (void)wa_fontSizeDidChange;
- (void)scrollViewDidScroll:(id)arg1;
- (id)noItemsViewImage;
- (id)noItemsViewSubheading;
- (id)noItemsViewHeading;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (id)toolbarItems;
- (id)navigationItem;
- (id)navigationController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

