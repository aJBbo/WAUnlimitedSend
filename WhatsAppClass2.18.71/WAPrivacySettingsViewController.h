//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

@class NSMutableArray, NSSet, UISwitch, WAActivityLabel, WAPrivacyPolicy, WATableRow;

__attribute__((visibility("hidden")))
@interface WAPrivacySettingsViewController : WAStaticTableViewController
{
    WATableRow *_lastSeenRow;
    WATableRow *_profilePicRow;
    WATableRow *_statusV2Row;
    WATableRow *_statusV3Row;
    WATableRow *_liveLocationRow;
    WATableRow *_blockedRow;
    WATableRow *_readReceiptsRow;
    UISwitch *_readReceiptsSwitch;
    WAActivityLabel *_activityLabel;
    double _activityStartTime;
    _Bool _needPrivacyRefresh;
    NSMutableArray *_chatSessionsSharingLiveLocation;
    WAPrivacyPolicy *_privacyPolicy;
    NSSet *_indexPathsForDisabledRows;
}

- (void).cxx_destruct;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)liveLocationSharingEndDateDidChange:(id)arg1;
- (void)blockedContactsListUpdated:(id)arg1;
- (void)wa_applicationWillEnterForeground;
- (_Bool)isSafeToUnload;
- (void)switchReadReceiptsAction:(id)arg1;
- (void)updateBlockedContactsCountDisplay;
- (void)updateLiveLocationCurrentlySharingDisplay;
- (void)showLiveLocationController;
- (void)showBlacklistController;
- (void)updatePrivacyValues;
- (void)setUpTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

