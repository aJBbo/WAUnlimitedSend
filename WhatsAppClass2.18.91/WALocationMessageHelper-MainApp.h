//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WALocationMessageHelper.h>

@interface WALocationMessageHelper (MainApp)
+ (void)copyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (_Bool)canCopyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringComponentsForExportForMessage:(id)arg1 withSenderName:(_Bool)arg2;
+ (void)loadMapThumbnailForLocation:(id)arg1 live:(_Bool)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4 retryOnFail:(_Bool)arg5;
+ (void)loadMapThumbnailForLocation:(id)arg1 live:(_Bool)arg2 jid:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5 retryOnFail:(_Bool)arg6;
+ (_Bool)needsImageLoader;
- (_Bool)requiresNetworkFetchForLargeImageWithInfo:(id)arg1;
- (_Bool)shouldCacheLargeTransformedImage:(id)arg1 fromOriginalImage:(id)arg2 info:(id)arg3;
- (id)largeImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)newImageLoaderInfo;
- (void)requestImageWithQuality:(long long)arg1 options:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
@end

