//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "WALinkLabelDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIScrollView, UIView, WAGradientView, WALinkLabel;

__attribute__((visibility("hidden")))
@interface WATOSViewControllerPage1 : WAViewController <WALinkLabelDelegate>
{
    UIButton *_closeButton;
    NSLayoutConstraint *_closeButtonTop;
    NSArray *_leadingTextMargins;
    NSLayoutConstraint *_contentViewHeight;
    UIScrollView *_scrollView;
    WALinkLabel *_pageBodyLabel;
    UIView *_footerView;
    UIView *_footerContentView;
    UIButton *_footerButton;
    WAGradientView *_bottomGradient;
    unsigned long long _stage;
}

@property(nonatomic) unsigned long long stage; // @synthesize stage=_stage;
@property(nonatomic) __weak WAGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(nonatomic) __weak UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UIView *footerContentView; // @synthesize footerContentView=_footerContentView;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak WALinkLabel *pageBodyLabel; // @synthesize pageBodyLabel=_pageBodyLabel;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSLayoutConstraint *contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(copy, nonatomic) NSArray *leadingTextMargins; // @synthesize leadingTextMargins=_leadingTextMargins;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonTop; // @synthesize closeButtonTop=_closeButtonTop;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)reconfigureUI;
- (void)closeAction:(id)arg1;
- (void)nextAction:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureFonts;
- (void)viewDidLayoutSubviews;
- (void)wa_fontSizeDidChange;
- (void)wa_applicationWillEnterForeground;
- (void)wa_applicationDidBecomeActive;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

