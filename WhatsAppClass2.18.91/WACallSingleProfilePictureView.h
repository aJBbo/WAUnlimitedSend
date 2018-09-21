//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, WACallSingleProfilePictureMaskView, WACancelBlurButton, WAProfilePictureDynamicFullSizedView;
@protocol WABlurredBackgroundProviding, WACallSingleProfilePictureViewDelegate;

__attribute__((visibility("hidden")))
@interface WACallSingleProfilePictureView : UIView
{
    UIView *_profileContainerView;
    WACancelBlurButton *_cancelButton;
    WAProfilePictureDynamicFullSizedView *_profilePictureView;
    UIView *_profileImageShadowView;
    WACallSingleProfilePictureMaskView *_maskView;
    double _baseContainerLength;
    _Bool _calling;
    _Bool _masked;
    id <WACallSingleProfilePictureViewDelegate> _delegate;
    NSString *_participantJID;
    id <WABlurredBackgroundProviding> _blurredBackgroundProvider;
    double _maskedOverlapPercentage;
}

@property(nonatomic) _Bool masked; // @synthesize masked=_masked;
@property(nonatomic) double maskedOverlapPercentage; // @synthesize maskedOverlapPercentage=_maskedOverlapPercentage;
@property(nonatomic) _Bool calling; // @synthesize calling=_calling;
@property(nonatomic) __weak id <WABlurredBackgroundProviding> blurredBackgroundProvider; // @synthesize blurredBackgroundProvider=_blurredBackgroundProvider;
@property(copy, nonatomic) NSString *participantJID; // @synthesize participantJID=_participantJID;
@property(nonatomic) __weak id <WACallSingleProfilePictureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool shadowEnabled;
@property(nonatomic) _Bool cancelable;
@property(nonatomic) double profileImageAlpha;
- (void)cancelButtonTapped:(id)arg1;
- (void)updateCancelButtonBlurredBackground;
- (void)layoutSubviews;
- (id)init;

@end

