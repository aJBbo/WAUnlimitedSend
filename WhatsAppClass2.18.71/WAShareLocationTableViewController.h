//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WALinkLabelDelegate-Protocol.h"

@class NSArray, NSObject, NSString, UIPanGestureRecognizer, UITableView, UITableViewCell, UIView, WAFailNotifyingTapGestureRecognizer, WALinkLabel, WATouchDownGestureRecognizer;
@protocol OS_dispatch_queue, WAShareLocationTableViewDelegate;

__attribute__((visibility("hidden")))
@interface WAShareLocationTableViewController : UIViewController <UIGestureRecognizerDelegate, WALinkLabelDelegate, UITableViewDataSource, UITableViewDelegate>
{
    long long _searchingRowIndex;
    long long _loadingMoreRowIndex;
    long long _emptyRowIndex;
    UITableViewCell *_cellLoadingMore;
    UITableViewCell *_cellThisPlace;
    WALinkLabel *_viewAttribution;
    double _emptyCellHeight;
    _Bool _hasBeenDragged;
    NSArray *_places;
    NSObject<OS_dispatch_queue> *_tableUpdateQueue;
    WATouchDownGestureRecognizer *_touchRecognizer;
    WAFailNotifyingTapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _previousTranslation;
    UIView *_headerSeparator;
    _Bool _dragging;
    _Bool _expanded;
    _Bool _scrolled;
    long long _nearbyPlacesIndex;
    long long _thisPlaceIndex;
    long long _cellsBeforePlaces;
    _Bool _moreResultsAvailable;
    _Bool _thisPlaceIsUserLocation;
    _Bool _trackingUserLocation;
    _Bool _removeLiveLocationCell;
    _Bool _haveCurrentLocation;
    id <WAShareLocationTableViewDelegate> _delegate;
    UITableView *_tableView;
    NSString *_attribution;
    double _rowHeight;
    NSString *_thisPlaceDetailText;
    double _preferredHeight;
    UITableViewCell *_cellSendMyLocation;
    unsigned long long _context;
}

@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) _Bool haveCurrentLocation; // @synthesize haveCurrentLocation=_haveCurrentLocation;
@property(nonatomic) _Bool removeLiveLocationCell; // @synthesize removeLiveLocationCell=_removeLiveLocationCell;
@property(nonatomic) _Bool trackingUserLocation; // @synthesize trackingUserLocation=_trackingUserLocation;
@property(readonly, nonatomic) UITableViewCell *cellSendMyLocation; // @synthesize cellSendMyLocation=_cellSendMyLocation;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(nonatomic) _Bool thisPlaceIsUserLocation; // @synthesize thisPlaceIsUserLocation=_thisPlaceIsUserLocation;
@property(copy, nonatomic) NSString *thisPlaceDetailText; // @synthesize thisPlaceDetailText=_thisPlaceDetailText;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(copy, nonatomic) NSString *attribution; // @synthesize attribution=_attribution;
@property(nonatomic) _Bool moreResultsAvailable; // @synthesize moreResultsAvailable=_moreResultsAvailable;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WAShareLocationTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)touchGestureAction:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)snapWithPanGestureRecognizer:(id)arg1;
- (_Bool)shouldSnapToTopWithVelocity:(double)arg1;
- (double)currentOffset;
- (void)panGestureAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)nearbyPlacesRowHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)nearbyPlacesCell;
- (id)placeCellAtIndex:(long long)arg1;
- (id)searchStatusCell;
- (id)imageForThisPlaceCell;
- (void)updateThisPlaceCellText;
- (id)thisPlaceCell;
- (id)liveLocationCell;
- (void)setStandardFontInCell:(id)arg1 plus:(double)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfNonEmptyCells;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateExpanded;
- (void)iconCacheDidDownloadImage:(id)arg1 forURL:(id)arg2;
- (void)reallyUpdatePlaces:(id)arg1 previousCount:(unsigned long long)arg2 add:(_Bool)arg3 moreAvailable:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didUpdatePlacesWithPreviousCount:(unsigned long long)arg1 add:(_Bool)arg2 moreAvailable:(_Bool)arg3;
- (void)invalidate;
- (void)tintColorDidChange;
- (void)fontSizeDidChange;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)didEmptyHeightChange;
- (double)computedEmptyHeight;
- (_Bool)wa_autoExpandOnContentSizeChange;
- (_Bool)wa_cardNavigationControllerShouldHaveDragHandle;
- (double)wa_minimumVisibleCardHeight;
- (id)wa_cardNavigationControllerAccessoryView;
- (void)wa_cardDidDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateIndices;
- (_Bool)shouldShowThisPlace;
- (struct CGSize)preferredContentSize;
- (void)dealloc;
- (id)initWithContext:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
