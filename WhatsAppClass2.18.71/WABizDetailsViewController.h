//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, WABizProfile, WABizVerifiedNameInfo, WATableRow, WATableSection;

__attribute__((visibility("hidden")))
@interface WABizDetailsViewController : WAStaticTableViewController <MFMailComposeViewControllerDelegate>
{
    NSString *_jid;
    WABizProfile *_bizProfile;
    WABizVerifiedNameInfo *_vNameInfo;
    WATableSection *_sectionName;
    WATableRow *_rowName;
    WATableSection *_sectionInfo;
    WATableRow *_rowHours;
    WATableRow *_rowLocation;
    WATableRow *_rowVertical;
    NSMutableArray *_rowWebsites;
    WATableRow *_rowEmail;
    WATableSection *_sectionSocial;
    NSMutableArray *_rowSocialProfiles;
}

- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)viewLocationWithData:(id)arg1;
- (void)updateSocialRow:(id)arg1 withSocialProfile:(id)arg2;
- (void)updateWebsiteRow:(id)arg1 withURL:(id)arg2;
- (void)updateEmailRow;
- (void)createInfoSection;
- (_Bool)needsInfoSection;
- (void)createSocialProfilesSection;
- (void)updateNameRow;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (void)setUpTableView;
- (void)contactsStorageDidUpdateContacts:(id)arg1;
- (void)verifiedNameDidUpdate:(id)arg1;
- (void)bizProfileDidUpdate:(id)arg1;
- (void)viewDidLoad;
- (id)initWithJID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

