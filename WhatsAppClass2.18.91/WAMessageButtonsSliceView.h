//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class NSArray, NSMutableArray, UIView, WAMessageButtonsSlice;

__attribute__((visibility("hidden")))
@interface WAMessageButtonsSliceView : WAMessageContainerSliceView
{
    UIView *_topBorder;
    NSArray *_buttons;
    NSMutableArray *_buttonDividers;
}

+ (_Bool)supportsPreviewing;
+ (_Bool)isUserInteractionEnabled;
- (void).cxx_destruct;
- (id)wa_accessibilityElements;
- (id)buttonsForCurrentState;
- (void)updateButtonsForCurrentState;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageButtonsSlice *slice; // @dynamic slice;

@end

