//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAQRCodeScannerViewController.h"

#import "WAPaymentLoadingViewControllerType-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAPaymentUPIQRCodeScannerViewController : WAQRCodeScannerViewController <WAPaymentLoadingViewControllerType>
{
    CDUnknownBlockType _loadingCancelledHandler;
}

- (void).cxx_destruct;
- (void)stopLoadingUI;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1;
- (id)identifier;
- (void)cancelAction:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

