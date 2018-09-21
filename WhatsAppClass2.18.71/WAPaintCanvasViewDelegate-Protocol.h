//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, WAPaintCanvasTextItem, WAPaintCanvasTextItemView, WAPaintCanvasView;

@protocol WAPaintCanvasViewDelegate <NSObject>
- (void)paintCanvasView:(WAPaintCanvasView *)arg1 didApplyTextStyle:(NSDictionary *)arg2;
- (void)paintCanvasView:(WAPaintCanvasView *)arg1 didDeleteItemAtLocation:(struct CGPoint)arg2;
- (void)paintCanvasView:(WAPaintCanvasView *)arg1 shouldEnterPendingDeletionState:(_Bool)arg2;
- (_Bool)paintCanvasView:(WAPaintCanvasView *)arg1 shouldDeleteItemAtLocation:(struct CGPoint)arg2;
- (void)paintCanvasView:(WAPaintCanvasView *)arg1 didPrepareToEditTextItem:(WAPaintCanvasTextItem *)arg2 previewingView:(WAPaintCanvasTextItemView *)arg3;
- (void)paintCanvasViewDidChangeBrushColor:(WAPaintCanvasView *)arg1;
@end
