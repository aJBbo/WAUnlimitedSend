//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class UIImageView, UIView, WAMessagePaymentSlice, WAMessagePaymentSliceLayerView;

__attribute__((visibility("hidden")))
@interface WAMessagePaymentSliceView : WAMessageContainerSliceView
{
    UIView *_containerView;
    UIImageView *_watermarkView;
    WAMessagePaymentSliceLayerView *_sliceLayer;
}

+ (_Bool)pairsWithQuickForwardButton;
+ (_Bool)supportsPreviewing;
+ (_Bool)isUserInteractionEnabled;
- (void).cxx_destruct;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessagePaymentSlice *slice; // @dynamic slice;

@end

