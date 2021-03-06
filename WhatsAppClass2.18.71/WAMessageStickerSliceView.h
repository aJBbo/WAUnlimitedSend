//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class NSArray, WAMessageStickerSlice;

__attribute__((visibility("hidden")))
@interface WAMessageStickerSliceView : WAMessageContainerSliceView
{
    NSArray *_statusSliceViews;
    struct CGRect _stickerRects[2];
    NSArray *_stickerViews;
}

+ (_Bool)pairsWithQuickForwardButton;
+ (_Bool)isUserInteractionEnabled;
+ (_Bool)needsProgressView;
@property(readonly, nonatomic) NSArray *stickerViews; // @synthesize stickerViews=_stickerViews;
- (void).cxx_destruct;
- (void)handleLongPressAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)handleSingleTapAtPoint:(struct CGPoint)arg1 forMessage:(id)arg2;
- (void)reloadViews:(id)arg1 atIndex:(unsigned long long)arg2 leftMargin:(double)arg3;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)configureSlice:(id)arg1 withCellData:(id)arg2;
- (void)stickerDownloadDidFail:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageStickerSlice *slice; // @dynamic slice;

@end

