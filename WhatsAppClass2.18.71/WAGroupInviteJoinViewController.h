//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WAExpandingTextViewControllerDelegate-Protocol.h"
#import "WAGroupInviteJoinUISupport-Protocol.h"
#import "WASheetSizeProviding-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UICollectionView, UIImageView, UILabel, UIStackView, UIView, WAContactGridCellConfiguration, WAExactTimer, WAExpandingTextView, WAExpandingTextViewController, XMPPGroup;

__attribute__((visibility("hidden")))
@interface WAGroupInviteJoinViewController : WAViewController <WAExpandingTextViewControllerDelegate, WASheetSizeProviding, WAGroupInviteJoinUISupport>
{
    WAContactGridCellConfiguration *_gridCellConfiguration;
    WAExactTimer *_hideActivityTimer;
    WAExpandingTextViewController *_groupDescriptionController;
    _Bool _groupInfoReloading;
    NSLayoutConstraint *_containerViewWidth;
    UIView *_containerView;
    UIView *_backgroundView;
    UIStackView *_errorView;
    UIButton *_buttonOK;
    UIView *_buttonTryAgainSeparator;
    UIButton *_buttonTryAgain;
    UILabel *_errorTitleLabel;
    UILabel *_errorDescriptionLabel;
    UIStackView *_activityView;
    UILabel *_activityTextLabel;
    UIButton *_buttonCancelActivity;
    UIActivityIndicatorView *_activityIndicator;
    double _activityStarted;
    UIView *_groupInfoSeparator;
    UIStackView *_groupJoinPromptView;
    UIView *_groupInfoView;
    UIImageView *_groupPicture;
    UILabel *_groupSubject;
    UILabel *_groupCreationInfo;
    WAExpandingTextView *_groupDescriptionTextView;
    NSLayoutConstraint *_groupDescriptionTextViewHeightConstraint;
    UIStackView *_groupInfoStackView;
    UIView *_participantsView;
    UILabel *_labelParticipants;
    UICollectionView *_participantsListView;
    NSLayoutConstraint *_participantsListViewHeightPortrait;
    NSLayoutConstraint *_participantsListViewHeightLandscape;
    NSLayoutConstraint *_participantsListViewLeading;
    UIView *_noContactsView;
    UILabel *_noContactsLabel;
    UIButton *_buttonJoinGroup;
    UIButton *_buttonCancel;
    NSArray *_separatorHeight;
    CDUnknownBlockType _cancelActivityHandler;
    CDUnknownBlockType _dismissErrorHandler;
    CDUnknownBlockType _tryAgainErrorHandler;
    CDUnknownBlockType _joinGroupCompletion;
    XMPPGroup *_xmppGroup;
    NSArray *_groupParticipants;
}

+ (id)controller;
@property(readonly, nonatomic) NSArray *groupParticipants; // @synthesize groupParticipants=_groupParticipants;
@property(retain, nonatomic) XMPPGroup *xmppGroup; // @synthesize xmppGroup=_xmppGroup;
@property(copy, nonatomic) CDUnknownBlockType joinGroupCompletion; // @synthesize joinGroupCompletion=_joinGroupCompletion;
@property(copy, nonatomic) CDUnknownBlockType tryAgainErrorHandler; // @synthesize tryAgainErrorHandler=_tryAgainErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissErrorHandler; // @synthesize dismissErrorHandler=_dismissErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelActivityHandler; // @synthesize cancelActivityHandler=_cancelActivityHandler;
@property(copy, nonatomic) NSArray *separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(retain, nonatomic) UIButton *buttonCancel; // @synthesize buttonCancel=_buttonCancel;
@property(retain, nonatomic) UIButton *buttonJoinGroup; // @synthesize buttonJoinGroup=_buttonJoinGroup;
@property(retain, nonatomic) UILabel *noContactsLabel; // @synthesize noContactsLabel=_noContactsLabel;
@property(retain, nonatomic) UIView *noContactsView; // @synthesize noContactsView=_noContactsView;
@property(retain, nonatomic) NSLayoutConstraint *participantsListViewLeading; // @synthesize participantsListViewLeading=_participantsListViewLeading;
@property(retain, nonatomic) NSLayoutConstraint *participantsListViewHeightLandscape; // @synthesize participantsListViewHeightLandscape=_participantsListViewHeightLandscape;
@property(retain, nonatomic) NSLayoutConstraint *participantsListViewHeightPortrait; // @synthesize participantsListViewHeightPortrait=_participantsListViewHeightPortrait;
@property(retain, nonatomic) UICollectionView *participantsListView; // @synthesize participantsListView=_participantsListView;
@property(retain, nonatomic) UILabel *labelParticipants; // @synthesize labelParticipants=_labelParticipants;
@property(retain, nonatomic) UIView *participantsView; // @synthesize participantsView=_participantsView;
@property(retain, nonatomic) UIStackView *groupInfoStackView; // @synthesize groupInfoStackView=_groupInfoStackView;
@property(nonatomic) __weak NSLayoutConstraint *groupDescriptionTextViewHeightConstraint; // @synthesize groupDescriptionTextViewHeightConstraint=_groupDescriptionTextViewHeightConstraint;
@property(nonatomic) __weak WAExpandingTextView *groupDescriptionTextView; // @synthesize groupDescriptionTextView=_groupDescriptionTextView;
@property(retain, nonatomic) UILabel *groupCreationInfo; // @synthesize groupCreationInfo=_groupCreationInfo;
@property(retain, nonatomic) UILabel *groupSubject; // @synthesize groupSubject=_groupSubject;
@property(retain, nonatomic) UIImageView *groupPicture; // @synthesize groupPicture=_groupPicture;
@property(retain, nonatomic) UIView *groupInfoView; // @synthesize groupInfoView=_groupInfoView;
@property(retain, nonatomic) UIStackView *groupJoinPromptView; // @synthesize groupJoinPromptView=_groupJoinPromptView;
@property(retain, nonatomic) UIView *groupInfoSeparator; // @synthesize groupInfoSeparator=_groupInfoSeparator;
@property(nonatomic) double activityStarted; // @synthesize activityStarted=_activityStarted;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIButton *buttonCancelActivity; // @synthesize buttonCancelActivity=_buttonCancelActivity;
@property(retain, nonatomic) UILabel *activityTextLabel; // @synthesize activityTextLabel=_activityTextLabel;
@property(retain, nonatomic) UIStackView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UILabel *errorDescriptionLabel; // @synthesize errorDescriptionLabel=_errorDescriptionLabel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(retain, nonatomic) UIButton *buttonTryAgain; // @synthesize buttonTryAgain=_buttonTryAgain;
@property(retain, nonatomic) UIView *buttonTryAgainSeparator; // @synthesize buttonTryAgainSeparator=_buttonTryAgainSeparator;
@property(retain, nonatomic) UIButton *buttonOK; // @synthesize buttonOK=_buttonOK;
@property(retain, nonatomic) UIStackView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSLayoutConstraint *containerViewWidth; // @synthesize containerViewWidth=_containerViewWidth;
- (void).cxx_destruct;
- (double)sheetHeight;
- (void)expandingTextViewControllerHeightDidChange:(id)arg1;
- (void)expandingTextViewControllerExpandedStateDidChange:(id)arg1;
- (void)updateGroupDescriptionHeight;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)contactsGridLayout;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)reloadGroupInfo;
- (void)fieldstatProfilePictureDownloadResult:(id)arg1 error:(id)arg2 elapsedTime:(double)arg3;
- (void)promptToJoinGroup:(id)arg1 inviteCode:(id)arg2 alreadyParticipant:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentErrorMessage:(id)arg1 tryAgain:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)hideActivityIndicatorWithCompletion:(CDUnknownBlockType)arg1;
- (void)showActivityIndicatorWithText:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1;
- (void)tryAgainErrorAction:(id)arg1;
- (void)dismissErrorAction:(id)arg1;
- (void)cancelActivityAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)joinGroupAction:(id)arg1;
- (void)viewDidLoad;
- (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

