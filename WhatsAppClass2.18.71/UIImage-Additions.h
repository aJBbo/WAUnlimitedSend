//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData, NSURL;

@interface UIImage (Additions)
+ (id)wa_imageWithWebPData:(id)arg1;
+ (id)wa_imageWithData:(id)arg1 decodeImmediately:(_Bool)arg2;
+ (id)wa_imageAtFileURL:(id)arg1 decodeImmediately:(_Bool)arg2;
+ (id)wa_imageAtFileURL:(id)arg1 decodeImmediately:(_Bool)arg2 usingMozjpeg:(_Bool)arg3;
+ (id)wa_singlePixelClearImage;
+ (id)wa_singlePixelImageWithColor:(id)arg1;
+ (id)wa_singleColorImageOfSizeInPixels:(struct CGSize)arg1 color:(id)arg2;
+ (id)wa_imageOfSize:(struct CGSize)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)wa_drawStretchableImageWithCapInsets:(struct UIEdgeInsets)arg1 destinationInsets:(struct UIEdgeInsets)arg2 inRect:(struct CGRect)arg3;
- (void)wa_drawWithSourceRect:(struct CGRect)arg1 destinationRect:(struct CGRect)arg2;
- (id)wa_subimageExtractedFromRect:(struct CGRect)arg1;
@property(copy, nonatomic) NSData *wa_data;
@property(copy, nonatomic) NSURL *wa_fileURL;
- (_Bool)wa_isBadImageFormat;
- (id)wa_unmirroredImage;
- (id)wa_imageCroppedToCircle;
- (id)wa_imageThatFlipsAutomaticallyForLayoutDirection;
- (id)wa_imageByFastResizingToSizeInPixels:(struct CGSize)arg1;
- (id)wa_templateImageWithColor:(id)arg1;
- (id)wa_darkenedImage;
- (id)wa_desaturatedImage;
- (id)wa_tintedImageWithColor:(id)arg1;
- (id)wa_imageByResizingToSizeInPixels:(struct CGSize)arg1 blurRadius:(double)arg2 blurEdges:(_Bool)arg3 saturationAdjustment:(double)arg4;
- (id)wa_imageByResizingToSizeInPixels:(struct CGSize)arg1 blurRadius:(double)arg2 blurEdges:(_Bool)arg3;
- (id)wa_imageByResizingToSizeInPixels:(struct CGSize)arg1 blurRadius:(double)arg2;
- (id)wa_imageByOverlayingImage:(id)arg1 inRect:(struct CGRect)arg2;
- (id)wa_imageByOverlayingImage:(id)arg1;
- (id)wa_transformedImageOfPixelSize:(struct CGSize)arg1 anchorPoint:(struct CGPoint)arg2 cropSize:(struct CGSize)arg3 rotationAngle:(double)arg4 overlayImage:(id)arg5;
- (id)wa_transformedImageOfPixelSize:(struct CGSize)arg1 anchorPoint:(struct CGPoint)arg2 cropSize:(struct CGSize)arg3 rotationAngle:(double)arg4;
- (struct CGSize)wa_adjustedCropSizeFromCropSize:(struct CGSize)arg1 forTargetSize:(struct CGSize)arg2;
- (id)wa_imageByCroppingToNormalizedRect:(struct CGRect)arg1 maximumEdge:(double)arg2;
- (struct CGSize)wa_sizeInPoints;
- (id)wa_imageWithAlpha:(double)arg1;
- (id)wa_imageDisconnectedFromDataProvider;
- (id)wa_normalizedImageRemovingAlpha:(_Bool)arg1;
- (id)wa_imageWithColorOverlay:(id)arg1;
- (id)wa_imageByResizingToSizeInPixels:(struct CGSize)arg1 contentMode:(long long)arg2 downscaleOnly:(_Bool)arg3;
@end

