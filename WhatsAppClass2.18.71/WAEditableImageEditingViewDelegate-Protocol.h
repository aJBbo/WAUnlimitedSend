//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController, WAEditableImageEditingView;

@protocol WAEditableImageEditingViewDelegate <NSObject>
- (UIViewController *)editableImageEditingViewContainingViewController:(WAEditableImageEditingView *)arg1;
- (void)editableImageEditingViewDidRequestSend:(WAEditableImageEditingView *)arg1;
- (void)editableImageEditingViewDidRequestEndCropping:(WAEditableImageEditingView *)arg1;
- (void)editableImageEditingViewDidEndDeferringRendering:(WAEditableImageEditingView *)arg1;
- (void)editableImageEditingViewDidBeginDeferringRendering:(WAEditableImageEditingView *)arg1;
@end

