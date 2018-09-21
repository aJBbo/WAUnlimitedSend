//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class UIImageView, UILabel;
@protocol WAChangeConfirmationControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAChangeConfirmationController : WAViewController
{
    id <WAChangeConfirmationControllerDelegate> _delegate;
    UILabel *_labelHelperText;
    UIImageView *_imageChangeNumber;
}

@property(retain, nonatomic) UIImageView *imageChangeNumber; // @synthesize imageChangeNumber=_imageChangeNumber;
@property(retain, nonatomic) UILabel *labelHelperText; // @synthesize labelHelperText=_labelHelperText;
@property(nonatomic) __weak id <WAChangeConfirmationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)nextAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

