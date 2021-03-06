//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAPaymentHelper : NSObject
{
}

+ (void)promptToUnblockWithMessage:(id)arg1 fromViewController:(id)arg2 userUnblockActionHandler:(CDUnknownBlockType)arg3 userCancelledHandler:(CDUnknownBlockType)arg4;
+ (id)replyContextThumbnailImageByAddingPatternBackground:(id)arg1 imageSize:(struct CGSize)arg2 isFromMe:(_Bool)arg3;
+ (id)attributedPreviewStringForTransaction:(id)arg1;
+ (id)replyContextThumbnailImageForTransaction:(id)arg1;
+ (id)backgroundPatternImageForMessageFromMe:(_Bool)arg1;
+ (void)systemEventTransactionMetadataFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)systemEventTransactionMetadataForTransactionStatus:(long long)arg1 transactionErrorCode:(id)arg2 previousStatus:(long long)arg3;
+ (id)voiceOverValueForTransaction:(id)arg1 includeNote:(_Bool)arg2;
+ (id)voiceOverLabelForTransaction:(id)arg1;
+ (id)bestSenderNameForTransaction:(id)arg1 prefersFirstName:(_Bool)arg2 allowPushName:(_Bool)arg3 useNotificationTitleFormat:(_Bool)arg4;
+ (id)bestReceiverNameForTransaction:(id)arg1 prefersFirstName:(_Bool)arg2 allowPushName:(_Bool)arg3 useNotificationTitleFormat:(_Bool)arg4;
+ (_Bool)openTransactionDetailsInPaymentSettingsForTransaction:(id)arg1;
+ (_Bool)openTransactionDetailsInPaymentSettingsForTransacionWithId:(id)arg1;
+ (_Bool)openTransactionDetailsInChatForMessageUniqueKey:(id)arg1;
+ (_Bool)openTransactionDetailsForMessageUniqueKey:(id)arg1 transactionId:(id)arg2;
+ (void)openTransactionDetailsForTransaction:(id)arg1;
+ (void)checkBlockedStatusAndPromptUnblockForJID:(id)arg1 UPIhandle:(id)arg2 fromViewController:(id)arg3 userUnblockActionHandler:(CDUnknownBlockType)arg4 userCancelledHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end

