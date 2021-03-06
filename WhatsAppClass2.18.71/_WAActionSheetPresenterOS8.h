//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAActionSheetPresenter.h"

@class UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface _WAActionSheetPresenterOS8 : WAActionSheetPresenter
{
    UIViewController *_alertController;
    UIViewController *_retainedControllerBeforePresentation;
    UIWindow *_window;
    UIWindow *_applicationWindow;
}

- (void).cxx_destruct;
- (void)addCancelButton;
- (void)addButtonWithTitle:(id)arg1 image:(id)arg2 useBoldText:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addDestructiveButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addDetailButtonWithTitle:(id)arg1 detailImage:(id)arg2 image:(id)arg3 useBoldText:(_Bool)arg4 smallFont:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (void)addDetailButtonWithTitle:(id)arg1 detailImage:(id)arg2 jid:(id)arg3 useBoldText:(_Bool)arg4 smallFont:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (void)addButtonWithTitle:(id)arg1 detailImage:(id)arg2 image:(id)arg3 jid:(id)arg4 style:(unsigned long long)arg5 smallFont:(_Bool)arg6 handler:(CDUnknownBlockType)arg7 toActionSheetController:(id)arg8;
- (void)addButtonWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3 toAlertController:(id)arg4;
- (void)dismissByCancellingWithAnimation:(_Bool)arg1;
- (void)didDismissByCancelling:(_Bool)arg1;
- (void)presentFromViewController:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2;

@end

