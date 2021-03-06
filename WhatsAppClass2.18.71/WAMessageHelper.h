//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMessageImageLoaderDataSource-Protocol.h"

@class NSString, NSURL, WAMessage, WAMessageImageLoader;

__attribute__((visibility("hidden")))
@interface WAMessageHelper : NSObject <WAMessageImageLoaderDataSource>
{
    WAMessageImageLoader *_imageLoader;
    NSURL *_cachedMediaActivityItemURL;
    WAMessage *_message;
}

+ (id)alertStringForTextStatusExceedingMaxCharacterCount:(unsigned long long)arg1;
+ (id)alertStringForMessageExceedingMaxCharacterCount:(unsigned long long)arg1;
+ (id)dataFromXMPPThumbnailImage:(id)arg1;
+ (id)imageForMediaAtPath:(id)arg1;
+ (void)fetchMediaInfoAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)footerAttributedTextWithFont:(id)arg1 forMessage:(id)arg2;
+ (Class)helperClassForMessage:(id)arg1;
+ (Class)classForMessageType:(int)arg1 mediaOrigin:(int)arg2;
+ (id)messageHelperForMessage:(id)arg1;
+ (void)copyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (_Bool)canCopyContentToPasteboardOfType:(unsigned long long)arg1 inMessage:(id)arg2;
+ (id)fullImageFromURL:(id)arg1 ofType:(id)arg2;
+ (_Bool)containsContactNameInMessage:(id)arg1;
+ (id)stringRepresentationForNotificationForMessage:(id)arg1;
+ (id)stringRepresentationForReplyForMessage:(id)arg1;
+ (id)stringRepresentationForChatForMessage:(id)arg1;
+ (id)stringComponentsForExportForMessage:(id)arg1 withSenderName:(_Bool)arg2;
+ (id)stringRepresentationForExportForMessage:(id)arg1 withMetadata:(_Bool)arg2;
+ (id)senderNameForStringRepresentationForMessage:(id)arg1 verifiedBadgePlaceholder:(id)arg2;
+ (id)senderNameForStringRepresentationForMessage:(id)arg1;
+ (void)showReportedStoreErrors:(id)arg1 outOf:(unsigned long long)arg2 fromViewController:(id)arg3;
+ (void)storeOutgoingMedia:(id)arg1 forJID:(id)arg2 MIMEType:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)generateXMPPThumbnailFrom:(id)arg1 forJID:(id)arg2 baseName:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)storeThumbnailFromPath:(id)arg1 ofType:(id)arg2 forJID:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (struct CGSize)preferredXMPPThumbnailSizeWithSourceImageSize:(struct CGSize)arg1;
+ (_Bool)needsImageLoader;
+ (id)attributedTextForText:(id)arg1 inMessage:(id)arg2;
+ (id)attributedTextForMessage:(id)arg1;
+ (id)voiceOverStatusStringForMessage:(id)arg1;
+ (id)formattedStringWithVoiceOverDetailForMessage:(id)arg1;
+ (id)formattedStringWithSiriDetailNoStatusForMessage:(id)arg1;
+ (id)formattedStringWithVoiceOverDetailNoStatusForMessage:(id)arg1;
+ (id)voiceOverGroupParticipantNameForMessage:(id)arg1;
+ (id)formattedStringWithSiriSummaryForMessage:(id)arg1;
+ (id)formattedStringWithVoiceOverSummaryForMessage:(id)arg1;
+ (id)formattedStringForMessage:(id)arg1 format:(unsigned long long)arg2;
+ (id)messageTimestampForVoiceOverFromDate:(id)arg1;
@property(nonatomic) __weak WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)freeCachedData;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct CGSize)transformedLargeImageSizeForParallaxWithOriginalImageSizeInPixels:(struct CGSize)arg1 preservingOriginalAspectRatio:(_Bool)arg2;
- (struct CGSize)transformedLargeImageSizeWithOriginalImageSizeInPixels:(struct CGSize)arg1;
- (_Bool)requiresNetworkFetchForLargeImageWithInfo:(id)arg1;
- (_Bool)shouldCacheLargeTransformedImage:(id)arg1 fromOriginalImage:(id)arg2 info:(id)arg3;
- (id)largeImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
- (void)endRetainingCachedImages;
- (void)beginRetainingCachedImages;
- (void)setHighQualityImage:(id)arg1;
- (_Bool)cancelImageRequestWithQuality:(long long)arg1;
- (void)requestImageWithQuality:(long long)arg1 options:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)messageDidUpdateLocation:(id)arg1;
- (void)messageDidChangeAbsoluteMediaPath:(id)arg1;
- (void)messageDidChangeAbsoluteXMPPThumbnailPath:(id)arg1;
@property(readonly, nonatomic) WAMessageImageLoader *imageLoader;
- (id)newImageLoaderInfo;
- (id)activityItemSubjectText;
- (_Bool)exportMediaActivityItemToURL:(id)arg1;
- (id)mediaActivityItemPlaceholderWithInternalReference:(_Bool *)arg1;
- (id)mediaActivityItem;
- (_Bool)useMediaActivityItem;
- (id)activityItem;
- (double)blurredImageMaximumWidth;
- (void)messageDidDownloadMedia;
@property(readonly, nonatomic) _Bool shouldAutoSaveDownloadedMedia;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

