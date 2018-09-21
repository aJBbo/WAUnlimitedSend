//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, WAInteractiveAnnotationView, WAPBInteractiveAnnotation, WAStatusItemView;

@protocol WAStatusItemViewDelegate <NSObject>
- (void)statusItemView:(WAStatusItemView *)arg1 didReceiveTapAtLocation:(struct CGPoint)arg2;
- (void)statusItemView:(WAStatusItemView *)arg1 didSelectInteractiveAnnotation:(WAPBInteractiveAnnotation *)arg2 atPoint:(struct CGPoint)arg3 inInteractiveAnnotationView:(WAInteractiveAnnotationView *)arg4;
- (void)statusItemView:(WAStatusItemView *)arg1 didRequestOpenGroupLink:(NSURL *)arg2;
- (void)statusItemViewDidEndShowingLinkPreview:(WAStatusItemView *)arg1;
- (void)statusItemViewDidBeginShowingLinkPreview:(WAStatusItemView *)arg1;
- (void)statusItemViewDidEndLoading:(WAStatusItemView *)arg1;
- (void)statusItemViewDidBeginLoading:(WAStatusItemView *)arg1;
- (void)statusItemViewDidRequestDownload:(WAStatusItemView *)arg1;
- (void)statusItemViewDidEndZoomPan:(WAStatusItemView *)arg1;
- (void)statusItemViewDidBeginZoomPan:(WAStatusItemView *)arg1;
- (void)statusItemViewDidEndPreventingAdvancing:(WAStatusItemView *)arg1;
- (void)statusItemViewDidBeginPreventingAdvancing:(WAStatusItemView *)arg1;
- (void)statusItemViewDidEndUserInteraction:(WAStatusItemView *)arg1;
- (void)statusItemViewDidBeginUserInteraction:(WAStatusItemView *)arg1;
- (void)statusItemViewDidFinishPresenting:(WAStatusItemView *)arg1;
- (_Bool)canStatusItemViewReportFinishPresenting:(WAStatusItemView *)arg1;
- (void)statusItemViewDidUpdateProgress:(WAStatusItemView *)arg1;
@end

