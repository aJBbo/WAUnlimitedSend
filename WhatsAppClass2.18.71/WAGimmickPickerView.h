//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WAGIFPickerManagerDelegate-Protocol.h"
#import "WAStickerPickerManagerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIButton, UICollectionView, UIImageView, WAGIFPickerManager, WAStickerPickerManager;
@protocol WAGimmickPickerViewDelegate;

__attribute__((visibility("hidden")))
@interface WAGimmickPickerView : UIView <WAStickerPickerManagerDelegate, WAGIFPickerManagerDelegate, UIScrollViewDelegate>
{
    WAStickerPickerManager *_stickerManager;
    WAGIFPickerManager *_GIFManager;
    unsigned long long _mode;
    struct CGPoint _previousContentOffset;
    _Bool _hasStartedDraggingContent;
    _Bool _isAnimatingButtonContainer;
    double _previousButtonContainerConstant;
    id <WAGimmickPickerViewDelegate> _delegate;
    UICollectionView *_contentCollectionView;
    UICollectionView *_categoryCollectionView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_stickerButton;
    UIButton *_GIFButton;
    NSLayoutConstraint *_rightButtonWidthConstraint;
    UIImageView *_rightButtonUpdateIndicatorView;
    NSLayoutConstraint *_buttonContainerBottomConstraint;
    NSLayoutConstraint *_buttonContainerHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *buttonContainerHeightConstraint; // @synthesize buttonContainerHeightConstraint=_buttonContainerHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *buttonContainerBottomConstraint; // @synthesize buttonContainerBottomConstraint=_buttonContainerBottomConstraint;
@property(nonatomic) __weak UIImageView *rightButtonUpdateIndicatorView; // @synthesize rightButtonUpdateIndicatorView=_rightButtonUpdateIndicatorView;
@property(nonatomic) __weak NSLayoutConstraint *rightButtonWidthConstraint; // @synthesize rightButtonWidthConstraint=_rightButtonWidthConstraint;
@property(nonatomic) __weak UIButton *GIFButton; // @synthesize GIFButton=_GIFButton;
@property(nonatomic) __weak UIButton *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(nonatomic) __weak UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak UICollectionView *categoryCollectionView; // @synthesize categoryCollectionView=_categoryCollectionView;
@property(nonatomic) __weak UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(nonatomic) __weak id <WAGimmickPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickerButtonTapped;
- (void)GIFButtonTapped;
- (void)rightButtonTapped;
- (void)leftButtonTapped;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)gifPickerManager:(id)arg1 didSelectGIF:(id)arg2;
- (void)stickerPickerManager:(id)arg1 didSelectManagedSticker:(id)arg2;
- (void)setButtonContainerOffset:(double)arg1;
- (void)didMoveToSuperview;
- (void)configureViewsWithManager:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

