//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAMessage;

__attribute__((visibility("hidden")))
@interface WAExternalVideoPlayerController : NSObject
{
    // Error parsing type: , name: implStorage
}

+ (id)watermarkImageForExternalVideoType:(long long)arg1;
+ (long long)externalVideoTypeOfURLString:(id)arg1 previewType:(int)arg2;
+ (id)sharedInstance;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) _Bool isLoadingCurrentMessage;
@property(nonatomic, readonly) WAMessage *currentMessage;
- (void)submitRequest:(id)arg1 originatingView:(id)arg2 fromViewController:(id)arg3;
- (void)stopPlayback;
- (id)init;

@end
