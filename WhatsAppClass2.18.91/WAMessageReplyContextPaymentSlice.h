//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageReplyContextSlice.h"

@class UIImage, WAMessageID;

__attribute__((visibility("hidden")))
@interface WAMessageReplyContextPaymentSlice : WAMessageReplyContextSlice
{
    UIImage *_thumbnail;
    WAMessageID *_messageID;
}

+ (id)thumbnailImageForMessage:(id)arg1;
+ (_Bool)alwaysExtendsThumbnailToBottomEdge;
+ (Class)viewClass;
@property(readonly, nonatomic) WAMessageID *messageID; // @synthesize messageID=_messageID;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)prepareWithMessage:(id)arg1;
- (struct CGSize)thumbnailSize;
- (_Bool)hasThumbnailForMessage:(id)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;

@end
