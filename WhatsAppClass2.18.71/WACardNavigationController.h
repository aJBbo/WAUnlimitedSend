//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WACardNavigationControllerViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView;
@protocol WACardNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface WACardNavigationController : UIViewController <WACardNavigationControllerViewDelegate>
{
    _Bool _keyboardOpen;
    _Bool _popWhenKeyboardCloses;
    NSString *_status;
    UIView *_divider;
    _Bool _effectiveRightShift;
    long long _deferOpaqueFrameChangeNotifications;
    _Bool _shiftCardsRight;
    id <WACardNavigationControllerDelegate> _delegate;
    NSMutableArray *_viewControllers;
}

@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) _Bool shiftCardsRight; // @synthesize shiftCardsRight=_shiftCardsRight;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) __weak id <WACardNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cardViewControllerForCardView:(id)arg1;
@property(readonly, nonatomic) struct CGRect unusedFrameAtTop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)cardViewControllerForUserViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *topmostViewController;
- (void)setKeyboardHeight:(double)arg1 fromNotification:(id)arg2;
- (void)updateContentInsetForVisibleCard:(id)arg1;
- (void)updateContentInsetsAndOffsets;
- (void)viewDidLayoutSubviews;
- (void)popViewController;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)performBlockWithoutOpaqueFrameChangeNotifications:(CDUnknownBlockType)arg1;
- (void)statusTap:(id)arg1;
- (void)updateRightShift;
- (void)hideViewController:(id)arg1;
- (void)showViewController:(id)arg1;
- (double)expandedContentOffsetForCardViewController:(id)arg1;
- (_Bool)landscapeMode;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

