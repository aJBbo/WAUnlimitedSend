//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACalloutViewControllerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol WACalloutViewPresenterDelegate;

__attribute__((visibility("hidden")))
@interface WACalloutViewPresenter : NSObject <WACalloutViewControllerDelegate>
{
    UIViewController *_presentingVC;
    id <WACalloutViewPresenterDelegate> _delegate;
}

+ (Class)calloutViewClass;
+ (Class)presentedViewControllerClass;
@property(nonatomic) __weak id <WACalloutViewPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performAction:(id)arg1 forCalloutView:(id)arg2;
- (void)performDefaultActionForCalloutView:(id)arg1;
- (void)configureCalloutView:(id)arg1;
- (struct CGPoint)targetPointInView:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGPoint)targetPointForCalloutViewController:(id)arg1;
- (struct UIEdgeInsets)overlayInsetsForCalloutViewController:(id)arg1;
- (void)calloutViewController:(id)arg1 didRequestPerformAction:(id)arg2 forCalloutView:(id)arg3;
- (void)calloutViewController:(id)arg1 didRequestPerformDefaultActionForCalloutView:(id)arg2;
- (void)calloutViewControllerDidCancel:(id)arg1;
- (void)presenterDidFinish;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)presentFromViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

