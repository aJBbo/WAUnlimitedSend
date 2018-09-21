//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "WALinkLabelDelegate-Protocol.h"

@class NSString, WATableSection, _WAAccountSecurityHeaderView;

__attribute__((visibility("hidden")))
@interface WAAccountSecurityViewController : WAStaticTableViewController <WALinkLabelDelegate>
{
    WATableSection *_securityIndicatorsSection;
    _WAAccountSecurityHeaderView *_headerView;
}

- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)switchSecurityIndicatorsChanged:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)wa_fontSizeDidChange;
- (void)adjustHeaderViewInsetsForInterfaceOrientation:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)setUpTableView;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

