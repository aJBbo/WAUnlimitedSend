//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WACallInfoViewDelegate-Protocol.h"
#import "WACallParticipantsViewDelegate-Protocol.h"
#import "WACallProfilePicturesViewDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UILabel, WACallButtonsView, WACallHeaderView, WACallInfoView, WACallParticipantsView, WACallProfilePicturesView, WACallSpamReportView, WACallVideoView, WACallViewParticipantInfo, WAVoiceCallRatingOptionsView, WAVoiceCallRatingView;
@protocol WACallSpamReportViewDelegate, WACallViewDelegate, WAVoiceCallRatingOptionsViewDelegate, WAVoiceCallRatingViewDelegate;

__attribute__((visibility("hidden")))
@interface WACallView : UIView <WACallProfilePicturesViewDelegate, WACallInfoViewDelegate, WACallParticipantsViewDelegate>
{
    UIView *_contentView;
    WACallInfoView *_callInfoView;
    WACallProfilePicturesView *_profilePicturesView;
    UIImageView *_gradientImageView;
    WACallParticipantsView *_participantsView;
    UIImageView *_backgroundImageView;
    WAVoiceCallRatingView *_ratingView;
    WAVoiceCallRatingOptionsView *_ratingOptionsView;
    WACallSpamReportView *_spamReportView;
    struct WAOffScreen _callButtonsOffScreen;
    struct WAOffScreen _callInfoViewOffScreen;
    struct WAOffScreen _callProfilePicturesViewOffScreen;
    struct WAOffScreen _callParticipantsViewOffScreen;
    _Bool _isHeaderViewOffScreen;
    _Bool _videoCall;
    // Error parsing type: AB, name: _isDebugLabelHidden
    // Error parsing type: AB, name: _isInfoLabelHidden
    _Bool _profilePictureHidden;
    _Bool _callInfoViewHidden;
    _Bool _callBackgroundViewHidden;
    _Bool _callButtonsViewHidden;
    _Bool _infoModeEnabled;
    _Bool _infoTableViewHidden;
    id <WACallViewDelegate> _delegate;
    id <WAVoiceCallRatingViewDelegate> _callRatingViewDelegate;
    id <WAVoiceCallRatingOptionsViewDelegate> _callRatingOptionsViewDelegate;
    id <WACallSpamReportViewDelegate> _spamReportViewDelegate;
    WACallVideoView *_videoView;
    WACallButtonsView *_callButtonsView;
    WACallHeaderView *_headerView;
    double _callDuration;
    NSArray *_peerViewParticipantsInfo;
    WACallViewParticipantInfo *_selfViewParticipantInfo;
    NSArray *_terminatedViewParticipantsInfo;
    UIView *_debugView;
    UILabel *_debugStatsLabel;
    UILabel *_infoStatsLabel;
}

@property(nonatomic, getter=isInfoTableViewHidden) _Bool infoTableViewHidden; // @synthesize infoTableViewHidden=_infoTableViewHidden;
@property(nonatomic) __weak UILabel *infoStatsLabel; // @synthesize infoStatsLabel=_infoStatsLabel;
@property(nonatomic) __weak UILabel *debugStatsLabel; // @synthesize debugStatsLabel=_debugStatsLabel;
@property(retain, nonatomic) UIView *debugView; // @synthesize debugView=_debugView;
@property(copy, nonatomic) NSArray *terminatedViewParticipantsInfo; // @synthesize terminatedViewParticipantsInfo=_terminatedViewParticipantsInfo;
@property(retain, nonatomic) WACallViewParticipantInfo *selfViewParticipantInfo; // @synthesize selfViewParticipantInfo=_selfViewParticipantInfo;
@property(copy, nonatomic) NSArray *peerViewParticipantsInfo; // @synthesize peerViewParticipantsInfo=_peerViewParticipantsInfo;
@property(nonatomic) double callDuration; // @synthesize callDuration=_callDuration;
@property(nonatomic, getter=isInfoModeEnabled) _Bool infoModeEnabled; // @synthesize infoModeEnabled=_infoModeEnabled;
@property(nonatomic, getter=isCallButtonsViewHidden) _Bool callButtonsViewHidden; // @synthesize callButtonsViewHidden=_callButtonsViewHidden;
@property(nonatomic, getter=isCallBackgroundViewHidden) _Bool callBackgroundViewHidden; // @synthesize callBackgroundViewHidden=_callBackgroundViewHidden;
@property(nonatomic, getter=isCallInfoViewHidden) _Bool callInfoViewHidden; // @synthesize callInfoViewHidden=_callInfoViewHidden;
@property(nonatomic, getter=isProfilePictureHidden) _Bool profilePictureHidden; // @synthesize profilePictureHidden=_profilePictureHidden;
@property(readonly, nonatomic) WACallHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) WACallButtonsView *callButtonsView; // @synthesize callButtonsView=_callButtonsView;
@property(readonly, nonatomic) WACallVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak id <WACallSpamReportViewDelegate> spamReportViewDelegate; // @synthesize spamReportViewDelegate=_spamReportViewDelegate;
@property(nonatomic) __weak id <WAVoiceCallRatingOptionsViewDelegate> callRatingOptionsViewDelegate; // @synthesize callRatingOptionsViewDelegate=_callRatingOptionsViewDelegate;
@property(nonatomic) __weak id <WAVoiceCallRatingViewDelegate> callRatingViewDelegate; // @synthesize callRatingViewDelegate=_callRatingViewDelegate;
@property(nonatomic) __weak id <WACallViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toggleInfoStats;
- (void)toggleDebugStats;
- (void)toggleDebugStats:(id)arg1;
- (void)updateInfoViewWithStats:(id)arg1;
- (void)updateDebugViewWithStats:(id)arg1;
- (void)participantsView:(id)arg1 didCancelWithJID:(id)arg2;
- (id)callProfilePicturesViewBackgroundImageView:(id)arg1;
- (void)callProfilePicturesView:(id)arg1 didCancellCallToParticipantJID:(id)arg2;
- (void)callInfoViewInfoButtonPressed:(id)arg1;
- (void)updateProfilePictureInfo:(id)arg1;
- (void)setProfilePicturesInfo:(id)arg1;
- (void)executeBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)updateBackgroundImage:(id)arg1;
- (void)setCallerName:(id)arg1;
- (void)setCallStatusText:(id)arg1 withAccessibilityLabel:(id)arg2;
@property(copy, nonatomic) NSString *callStatusText;
- (void)setCallParticipantsViewOffScreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isCallParticipantsViewOffScreen) _Bool callParticipantsViewOffScreen;
- (void)setCallProfilePicturesViewOffScreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isCallProfilePicturesViewOffScreen) _Bool callProfilePicturesViewOffScreen;
- (void)setCallInfoViewOffScreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isCallInfoViewOffScreen) _Bool callInfoViewOffScreen;
@property(readonly, nonatomic, getter=isHeaderViewOffScreen) _Bool headerViewOffScreen;
- (void)setHeaderViewOffScreen:(_Bool)arg1;
- (void)setHeaderViewOffScreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isCallButtonsViewOffScreen) _Bool callButtonsViewOffScreen;
- (void)setCallButtonsViewOffScreen:(_Bool)arg1 direction:(long long)arg2;
- (void)setCallButtonsViewOffScreen:(_Bool)arg1 direction:(long long)arg2 animated:(_Bool)arg3;
- (void)setProfilePictureHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHeaderGradientHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isHeaderHidden) _Bool headerHidden;
- (void)setHeaderHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCallBakgroundViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCallInfoViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCallButtonsViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setInfoTableViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isCallRatingOptionsViewVisible) _Bool callRatingOptionViewVisible;
@property(readonly, nonatomic, getter=isCallRatingViewVisible) _Bool callRatingViewVisible;
@property(readonly, nonatomic, getter=isSpamReportViewVisible) _Bool spamReportViewVisible;
@property(readonly, nonatomic, getter=isDebugLabelHidden) _Bool debugLabelHidden;
@property(readonly, nonatomic, getter=isInfoLabelHidden) _Bool infoLabelHidden;
- (id)partcipantNames;
- (id)participantPhoneNumbers;
@property(readonly, nonatomic, getter=isGroupCall) _Bool groupCall;
- (void)showSpamReportView;
- (void)showRatingOptionsView;
- (void)dismissRatingViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showRatingView;
- (void)showFinalOverlayView:(id)arg1;
- (void)setContentViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTerminatedStatusTextForCallState:(int)arg1;
- (void)updateStatusTextIfNeededForCallState:(int)arg1;
- (void)updateLayoutForState:(int)arg1;
- (struct CGRect)offScreenRectFromOnScreenRect:(struct CGRect)arg1 parentView:(id)arg2 direction:(long long)arg3;
- (void)layoutSubviews;
- (void)configure;
- (id)initWithFrame:(struct CGRect)arg1 videoCall:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

