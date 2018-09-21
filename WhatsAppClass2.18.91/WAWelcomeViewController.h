//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class NSString, UIButton, UIImageView, UILabel, WALinkLabel;
@protocol WAWelcomeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAWelcomeViewController : WAViewController
{
    id <WAWelcomeViewControllerDelegate> _delegate;
    UILabel *_titleLabel;
    WALinkLabel *_helperTextLabel;
    UIButton *_buttonAccept;
    UIImageView *_imageView;
}

+ (id)controller;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *buttonAccept; // @synthesize buttonAccept=_buttonAccept;
@property(retain, nonatomic) WALinkLabel *helperTextLabel; // @synthesize helperTextLabel=_helperTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WAWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)acceptAction:(id)arg1;
- (void)reloadFonts;
- (void)wa_fontSizeDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

