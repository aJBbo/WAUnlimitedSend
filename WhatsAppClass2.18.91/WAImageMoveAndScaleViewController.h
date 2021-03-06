//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, NSURL, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel, UIView, WAImageMoveAndScaleScrollView, WALinkLabel, WAPhotoMoveAndScaleCropView;

__attribute__((visibility("hidden")))
@interface WAImageMoveAndScaleViewController : WAViewController <UIScrollViewDelegate>
{
    WAImageMoveAndScaleScrollView *_scrollView;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    WALinkLabel *_copyrightNotice;
    WAPhotoMoveAndScaleCropView *_cropView;
    UIActivityIndicatorView *_spinner;
    UIView *_imageContainerView;
    UIImageView *_imageView;
    UIImage *_blurredImage;
    UIImageView *_blurredImageView;
    double _blurredImageScaleFactor;
    struct CGSize _lastLayoutSize;
    unsigned long long _mode;
    double _minimumWidth;
    double _maximumWidth;
    NSURL *_sourceURL;
    UIImage *_originalImage;
    CDUnknownBlockType _completionHandler;
    NSURL *_fullResolutionImageURLToSaveOnCompletion;
}

@property(copy, nonatomic) NSURL *fullResolutionImageURLToSaveOnCompletion; // @synthesize fullResolutionImageURLToSaveOnCompletion=_fullResolutionImageURLToSaveOnCompletion;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(readonly, nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)recenterContainerView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)configureScrollViewForZooming;
- (id)imageForCurrentZoomRect;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)relayout;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateInterfaceWithImage;
- (void)resetImageViewLayout;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (id)initWithMode:(unsigned long long)arg1 minimumWidth:(double)arg2 maximumWidth:(double)arg3 sourceURL:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

