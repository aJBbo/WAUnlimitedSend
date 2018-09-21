//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "WADefaultPreviewActionItemsProviding-Protocol.h"

@class NSArray, NSString, WAMessage;

__attribute__((visibility("hidden")))
@interface WAPeekableDocumentMessagePreviewNavigationController : UINavigationController <WADefaultPreviewActionItemsProviding>
{
    NSArray *_defaultPreviewActionItems;
    WAMessage *_documentMessage;
}

@property(readonly, nonatomic) WAMessage *documentMessage; // @synthesize documentMessage=_documentMessage;
@property(copy, nonatomic) NSArray *defaultPreviewActionItems; // @synthesize defaultPreviewActionItems=_defaultPreviewActionItems;
- (void).cxx_destruct;
- (id)wa_previewActionItems;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)initWithDocumentMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

