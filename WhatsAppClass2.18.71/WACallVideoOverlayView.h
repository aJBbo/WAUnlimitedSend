//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel, WACallVideoOverlayActionButton, WAGradientView;
@protocol WACallVideoOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface WACallVideoOverlayView : UIView
{
    WAGradientView *_muteGradientView;
    UIImageView *_muteImageView;
    UIView *_darkOverlayView;
    UIView *_actionContainerView;
    UIImageView *_mainShadowView;
    UILabel *_textLabel;
    UIImageView *_actionImageView;
    WACallVideoOverlayActionButton *_actionButton;
    double _borderMargin;
    double _currentAngle;
    long long _muteSide;
    _Bool _simpleMuteShadow;
    _Bool _showActionShadow;
    _Bool _showActionView;
    id <WACallVideoOverlayViewDelegate> _delegate;
    long long _muteShadowType;
    long long _actionViewPosition;
    struct UIEdgeInsets _landscapeMargins;
}

@property(nonatomic) long long actionViewPosition; // @synthesize actionViewPosition=_actionViewPosition;
@property(nonatomic) struct UIEdgeInsets landscapeMargins; // @synthesize landscapeMargins=_landscapeMargins;
@property(nonatomic) _Bool showActionView; // @synthesize showActionView=_showActionView;
@property(nonatomic) _Bool showActionShadow; // @synthesize showActionShadow=_showActionShadow;
@property(nonatomic) long long muteShadowType; // @synthesize muteShadowType=_muteShadowType;
@property(nonatomic) _Bool simpleMuteShadow; // @synthesize simpleMuteShadow=_simpleMuteShadow;
@property(nonatomic) __weak id <WACallVideoOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *actionButtonTitle;
@property(retain, nonatomic) UIImage *actionImage;
@property(nonatomic) _Bool marginShadowGradientIntense;
@property(nonatomic) _Bool longMuteMargin;
- (void)rotateToAngle:(double)arg1;
- (void)muteEnabledWithSide:(long long)arg1;
- (void)setActionText:(id)arg1 prefixString:(id)arg2;
- (void)updateDarkOverlayAndShadow;
- (void)layoutSubviews;
- (void)layoutMuteElements;
- (double)yActionPosition;
- (void)setDiagonalSizeWithDistanceFromMargin:(double)arg1;
- (void)positionCenterView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (struct UIEdgeInsets)actualLandscapeMarginsInset;
- (double)actualHeight;
- (double)actualWidth;
- (_Bool)portrait;
- (_Bool)landscapeLeft;
- (_Bool)landscapeRight;
- (_Bool)upsideDown;
- (id)init;

@end

