//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface WAMessageStickerSlice : WAMessageContainerSlice
{
    long long _messagesCount;
    double _stickerWidth;
    double _statusHeight;
    _Bool _isFromMe;
}

+ (Class)viewClass;
- (_Bool)isLeftPosition;
- (double)leftMargin;
- (double)separatorMargin;
- (struct CGSize)statusSize;
- (struct CGSize)stickerSize;
- (void)internalFitToWidth:(double)arg1;
- (_Bool)showsMedia;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *childrenSlices; // @dynamic childrenSlices;

@end

