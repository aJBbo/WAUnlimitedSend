//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

@class NSDate, NSString, WAActivityLabel, WAPrivacyPolicy, WATableRow;
@protocol WADeviceDate;

__attribute__((visibility("hidden")))
@interface WAPrivacySettingsPicker : WAStaticTableViewController
{
    WATableRow *_nooneRow;
    WATableRow *_contactsRow;
    WATableRow *_allUsersRow;
    WAActivityLabel *_activityLabel;
    NSDate<WADeviceDate> *_activityStartTime;
    WAPrivacyPolicy *_privacyPolicy;
    unsigned long long _privacyCategory;
    NSString *_titleString;
}

- (void).cxx_destruct;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)hideActivity;
- (void)showActivity;
- (void)selectValue:(unsigned long long)arg1;
- (void)updateCheckMarks;
- (void)setUpTableView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initForCategory:(unsigned long long)arg1 title:(id)arg2;

@end

