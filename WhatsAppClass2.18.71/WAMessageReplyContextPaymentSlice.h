//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageReplyContextSlice.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface WAMessageReplyContextPaymentSlice : WAMessageReplyContextSlice
{
    UIImage *_thumbnail;
}

+ (id)attributedPreviewStringForMessage:(id)arg1;
+ (id)thumbnailImageForMessage:(id)arg1;
+ (_Bool)alwaysExtendsThumbnailToBottomEdge;
+ (Class)viewClass;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)prepareWithMessage:(id)arg1;
- (struct CGSize)thumbnailSize;
- (_Bool)hasThumbnailForMessage:(id)arg1;

@end

