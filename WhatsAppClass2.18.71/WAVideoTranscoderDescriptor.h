//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage, WAMediaFileInfo;

__attribute__((visibility("hidden")))
@interface WAVideoTranscoderDescriptor : NSObject
{
    _Bool _videoOnly;
    _Bool _requiresFileSizeReduction;
    _Bool _requiresFullTranscode;
    _Bool _tagAsGIF;
    WAMediaFileInfo *_mediaInfoHint;
    double _bitratePerPixel;
    double _minimumBitratePerPixel;
    NSURL *_outputURL;
    unsigned long long _maximumFileSize;
    UIImage *_overlayImage;
    struct CGSize _maximumSize;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) _Bool tagAsGIF; // @synthesize tagAsGIF=_tagAsGIF;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) unsigned long long maximumFileSize; // @synthesize maximumFileSize=_maximumFileSize;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) double minimumBitratePerPixel; // @synthesize minimumBitratePerPixel=_minimumBitratePerPixel;
@property(nonatomic) double bitratePerPixel; // @synthesize bitratePerPixel=_bitratePerPixel;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) _Bool requiresFullTranscode; // @synthesize requiresFullTranscode=_requiresFullTranscode;
@property(nonatomic) _Bool requiresFileSizeReduction; // @synthesize requiresFileSizeReduction=_requiresFileSizeReduction;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) _Bool videoOnly; // @synthesize videoOnly=_videoOnly;
@property(copy, nonatomic) WAMediaFileInfo *mediaInfoHint; // @synthesize mediaInfoHint=_mediaInfoHint;
- (void).cxx_destruct;
- (id)initWithOutputURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

