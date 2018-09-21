//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, WAMessageImageLoaderInfo;

@protocol WAMessageImageLoaderDataSource <NSObject>
- (_Bool)requiresNetworkFetchForLargeImageWithInfo:(WAMessageImageLoaderInfo *)arg1;
- (_Bool)shouldCacheLargeTransformedImage:(UIImage *)arg1 fromOriginalImage:(UIImage *)arg2 info:(WAMessageImageLoaderInfo *)arg3;
- (struct CGSize)transformedLargeImageSizeWithOriginalImageSizeInPixels:(struct CGSize)arg1;
- (UIImage *)largeImageForMessageImageLoaderWithInfo:(WAMessageImageLoaderInfo *)arg1;
- (UIImage *)smallImageForMessageImageLoaderWithInfo:(WAMessageImageLoaderInfo *)arg1;
@end

