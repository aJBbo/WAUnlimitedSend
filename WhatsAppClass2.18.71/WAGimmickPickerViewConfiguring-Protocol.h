//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UICollectionView, UICollectionViewLayout, UIColor, UIView;

@protocol WAGimmickPickerViewConfiguring <NSObject>
- (_Bool)shouldShowRightButtonUpdateIndicator;
- (UIView *)currentContentBackgroundView;
- (UICollectionViewLayout *)contentCollectionViewLayoutForCollectionView:(UICollectionView *)arg1;
- (UICollectionViewLayout *)categoryCollectionViewLayoutForCollectionView:(UICollectionView *)arg1;
- (UIColor *)GIFButtonTintColor;
- (UIColor *)stickerButtonTintColor;
- (NSString *)accessibilityLabelForLeftButton;
- (NSString *)accessibilityLabelForRightButton;
- (_Bool)shouldShowLeftButton;
- (_Bool)shouldShowRightButton;
@end
