//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAStickerStartupManager : NSObject
{
    _Bool _gimmickPickerAvailable;
    unsigned long long _downloadAttemptCount;
}

+ (id)defaultStickerPackId;
@property(nonatomic) unsigned long long downloadAttemptCount; // @synthesize downloadAttemptCount=_downloadAttemptCount;
- (void)updateStickerStoreMetadata;
- (void)downloadInitialStickerPackIfNecessary;
- (void)downloadInitialStickerPack;
@property(readonly, nonatomic, getter=isGimmickPickerAvailable) _Bool gimmickPickerAvailable;
- (id)init;

@end

