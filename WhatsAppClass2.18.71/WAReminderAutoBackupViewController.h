//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAutobackupSettingsViewController.h"

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WAReminderAutoBackupViewController : WAAutobackupSettingsViewController
{
    _Bool _showingDoneButton;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _useDoneButton;
    UIView *_intervalHeader;
    UILabel *_labelTopTitle;
    UIImageView *_imageBackupLogo;
    UILabel *_labelTopHelperText;
}

@property(retain, nonatomic) UILabel *labelTopHelperText; // @synthesize labelTopHelperText=_labelTopHelperText;
@property(retain, nonatomic) UIImageView *imageBackupLogo; // @synthesize imageBackupLogo=_imageBackupLogo;
@property(retain, nonatomic) UILabel *labelTopTitle; // @synthesize labelTopTitle=_labelTopTitle;
@property(retain, nonatomic) UIView *intervalHeader; // @synthesize intervalHeader=_intervalHeader;
@property(copy, nonatomic) CDUnknownBlockType useDoneButton; // @synthesize useDoneButton=_useDoneButton;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)wa_fontSizeDidChange;
- (void)layoutHeaderView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)nextAction:(id)arg1;
- (id)bottomText;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateNextButtonEnabled;
- (void)refreshNextButton;

@end

