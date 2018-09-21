//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class NSDate, NSTimer, NSURL, UIButton, UILabel, WACircularProgressView;

__attribute__((visibility("hidden")))
@interface WATimelockViewController : WAViewController
{
    NSTimer *_progressViewTimer;
    NSDate *_viewCreationDate;
    NSURL *_learnMoreURL;
    double _progress;
    double _timeRemaining;
    UILabel *_progressLabel;
    UILabel *_labelNotice;
    UIButton *_buttonLearnMore;
    WACircularProgressView *_progressView;
}

+ (id)controller;
@property(retain, nonatomic) WACircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *buttonLearnMore; // @synthesize buttonLearnMore=_buttonLearnMore;
@property(retain, nonatomic) UILabel *labelNotice; // @synthesize labelNotice=_labelNotice;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)learnMoreAction:(id)arg1;
- (void)progressViewTimer:(id)arg1;
- (void)reloadHelperText;
- (void)prepareToBeDismissed;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

