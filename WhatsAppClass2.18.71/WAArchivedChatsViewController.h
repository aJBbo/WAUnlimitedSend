//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatSessionsViewController.h"

#import "WANavigationItemCustomBackButtonTitle-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAArchivedChatsViewController : WAChatSessionsViewController <WANavigationItemCustomBackButtonTitle>
{
}

+ (_Bool)showPinButton;
- (void)didInsertOrDeleteRows;
- (id)backButtonItemTitleForViewController:(id)arg1;
- (void)setUpNoContentView:(id)arg1;
- (id)predicateForFetchRequest;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

