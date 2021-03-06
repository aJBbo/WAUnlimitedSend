//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAMessage.h>

#import "WAIndexableManagedObject-Protocol.h"
#import "WAMediaUploadable-Protocol.h"

@class NSAttributedString, NSData, NSManagedObjectID, NSString;
@protocol NSObject><NSCopying;

@interface WAMessage (MainApp) <WAIndexableManagedObject, WAMediaUploadable>
+ (_Bool)didFinishExtractingURLs;
+ (void)notifyDidFinishExtractingURLs;
+ (void)createNewOutgoingMessageWithPlace:(id)arg1 liveLocationEndDate:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)createNewOutgoingMessageWithVideoURL:(id)arg1 isGIF:(_Bool)arg2 gifProvider:(id)arg3 caption:(id)arg4 replyingToMessage:(id)arg5 inChatSession:(id)arg6 interactiveAnnotations:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)createNewOutgoingMessageWithDocumentAttachment:(id)arg1 replyingToMessage:(id)arg2 inChatSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)createNewOutgoingMessageWithImage:(id)arg1 caption:(id)arg2 replyingToMessage:(id)arg3 inChatSession:(id)arg4 interactiveAnnotations:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)createNewOutgoingMessageWithMedia:(id)arg1 MIMEType:(id)arg2 caption:(id)arg3 replyingToMessage:(id)arg4 inChatSession:(id)arg5 messageType:(int)arg6 mediaOrigin:(int)arg7 interactiveAnnotations:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (id)insertMessageWithID:(id)arg1 localJID:(id)arg2 date:(id)arg3 type:(int)arg4 context:(id)arg5;
+ (_Bool)areAllMessages:(id)arg1 ofType:(int)arg2;
- (id)fetchConversionInfoDictionary;
- (void)checkForCompletedOutgoingStatusMessage;
@property(nonatomic) short statusDeletionType;
- (_Bool)markStatusPSAViewed;
@property(readonly, nonatomic) long long searchEngineDocumentType;
@property(readonly, copy, nonatomic) NSString *textForSearchIndex;
@property(readonly, nonatomic) float searchQualityScore;
- (void)setNeedsIndexing;
- (void)fetchRequiredDataForWAPlace:(id)arg1 live:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *preferredExportFilename;
- (_Bool)containsContactName;
@property(readonly, copy, nonatomic) NSString *stringRepresentationForNotification;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStringRepresentationForReply;
@property(readonly, copy, nonatomic) NSAttributedString *stringRepresentationForChat;
- (id)stringRepresentationForExportWithMetadata:(_Bool)arg1;
- (id)formattedStringWithFormat:(unsigned long long)arg1;
- (void)changedLargeImage;
- (void)endRetainingCachedImages;
- (void)beginRetainingCachedImages;
- (void)setHighQualityImage:(id)arg1;
- (_Bool)cancelImageRequestWithQuality:(long long)arg1;
- (void)requestImageWithQuality:(long long)arg1 options:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct CGSize preferredPreviewAspectRatio;
- (void)markDelivered;
- (void)sendServerErrorReceiptIfNeeded;
- (void)updateReceiptInfoFrom:(id)arg1 status:(int)arg2 date:(id)arg3 overridesExistingTimestamp:(_Bool)arg4;
@property(copy, nonatomic) NSString *relativeMediaPath;
@property(readonly, copy, nonatomic) NSData *xmppThumbnailData;
@property(copy, nonatomic) NSString *relativeXMPPThumbnailPath;
- (void)updateMediaLocalPath:(id)arg1;
@property(readonly, nonatomic) _Bool hasPendingDownloadTask;
- (void)setMediaMimeType:(id)arg1 filesize:(unsigned long long)arg2 linkToFileAtAbsolutePath:(id)arg3 saveImmediately:(_Bool)arg4;
- (_Bool)failWithUploadResult:(id)arg1 error:(id)arg2 terminal:(_Bool)arg3;
- (void)finishWithUploadResult:(id)arg1;
- (void)updateWithUploadProgress:(float)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)attachXMPPThumbnailData:(id)arg1;
- (void)attachMediaAtRelativePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)populateChildMessage:(id)arg1;
- (id)addChildMessagesIfNeeded;
@property(readonly, nonatomic) _Bool usesChildMessages;
- (void)attachQuotedMessage:(id)arg1 quotedChatSession:(id)arg2 mentions:(id)arg3 backgroundColor:(id)arg4 fontStyle:(int)arg5;
- (void)attachQuotedMessage:(id)arg1 mentions:(id)arg2 backgroundColor:(id)arg3 fontStyle:(int)arg4;
- (_Bool)checkRecipientExists;
- (_Bool)willSend;
- (void)copyMediaItemPropertiesFromMessage:(id)arg1 viaForward:(_Bool)arg2;
- (id)copyToChatTransaction:(id)arg1 viaForward:(_Bool)arg2;
- (id)querySortedDataItems;
@property(readonly, nonatomic, getter=isGhost) _Bool ghost;
- (id)authorTitleForNotification;
@property(readonly, nonatomic) NSString *bestSenderName;
@property(readonly, nonatomic) _Bool needsResend;
@property(readonly, nonatomic) _Bool messageTypeIsEligibleToSendStatus;
@property(readonly, nonatomic) _Bool canBeShared;
@property(readonly, nonatomic) _Bool needsSendReadReceipt;
@property(readonly, nonatomic, getter=isEligibleToResortChats) _Bool eligibleToResortChats;
@property(readonly, nonatomic, getter=isEligibleForNotification) _Bool eligibleForNotification;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isValidIgnoringExpiration) _Bool validIgnoringExpiration;
@property(readonly, nonatomic, getter=isValidIgnoringExpirationAndChat) _Bool validIgnoringExpirationAndChat;
- (void)endSuppressingProgressSpinner;
- (void)beginSuppressingProgressSpinner;
- (void)setStarred:(_Bool)arg1 allowExternalSideEffects:(_Bool)arg2;
- (void)setMessageStatus:(int)arg1 allowExternalSideEffects:(_Bool)arg2 allowsSendingStatusRegression:(_Bool)arg3;
- (void)setMessageStatus:(int)arg1 allowExternalSideEffects:(_Bool)arg2;
- (_Bool)shouldInvalidateMessageContainerWhenChangingFromStatus:(int)arg1 to:(int)arg2;
- (void)setChatSession:(id)arg1 allowExternalSideEffects:(_Bool)arg2;
- (void)updateMessageAffectingChatSession:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool canBeRepliedTo;
- (id)fetchPKPass;
- (void)copyContentToPasteboardOfType:(unsigned long long)arg1;
- (_Bool)canCopyContentToPasteboardOfType:(unsigned long long)arg1;
- (void)prepareXMPPThumbnailWithRelativePath:(id)arg1 group:(id)arg2;
- (void)prepareXMPPThumbnailWithBaseImage:(id)arg1 group:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *directPath;
@property(readonly, copy, nonatomic) NSString *fileHash;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long httpRetryCount; // @dynamic httpRetryCount;
@property(readonly, nonatomic) _Bool isMultiVCardMessage;
@property(readonly, nonatomic) _Bool isPTT;
@property(readonly, copy, nonatomic) NSString *mediaFilePath; // @dynamic mediaFilePath;
@property(readonly, nonatomic) int mediaOrigin; // @dynamic mediaOrigin;
@property(readonly, nonatomic) int mediaType; // @dynamic mediaType;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) short spotlightStatus;
@property(readonly, copy, nonatomic) NSString *stanzaID;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *toJID;
@property(readonly, nonatomic) id <NSObject><NSCopying> uniqueID; // @dynamic uniqueID;
@property(readonly, copy, nonatomic) NSString *wa_MIMEType;
@end

