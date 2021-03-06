//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAutoMigratingStorage.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface WAStickerStorage : WAAutoMigratingStorage
{
}

+ (_Bool)useMainQueueDatabaseConcurrencyType;
- (void)updateOrderOfManagedStickerPacks:(id)arg1;
- (id)existingStickerPackMapForClass:(Class)arg1;
- (void)createOrUpdateFirstPartyStickerPacks:(id)arg1;
- (void)deleteEventForSticker:(id)arg1 eventType:(long long)arg2;
- (void)createEventForSticker:(id)arg1 eventType:(long long)arg2;
- (void)removeManagedStickerPack:(id)arg1;
- (void)removeManagedStickers:(id)arg1;
- (void)removeManagedSticker:(id)arg1;
- (id)stickerPackForStickerPackId:(id)arg1;
- (id)firstPartyStickerPackForStickerPackId:(id)arg1;
- (id)managedStickerPackForStickerPackId:(id)arg1;
- (unsigned long long)firstPartyStickerPackCount;
@property(copy, nonatomic) NSArray *myStickerPacks;
- (id)firstPartyStickerPackForStickerPack:(id)arg1;
- (id)managedStickerPackForStickerPack:(id)arg1;
- (id)managedStickerForFileHash:(id)arg1;
- (id)libraryPathToManagedStickerWithHash:(id)arg1 returningSize:(struct CGSize *)arg2;
- (id)managedStickerForSticker:(id)arg1;
- (id)storeFirstPartyStickerPack:(id)arg1;
- (id)storeThirdPartyStickerPack:(id)arg1;
- (id)storeStickerPack:(id)arg1 trayImageFilePath:(id)arg2;
- (id)storeSticker:(id)arg1;
- (_Bool)isValidStickerPack:(id)arg1;
- (_Bool)isValidStickerMimeType:(id)arg1;
- (_Bool)isValidSticker:(id)arg1;
- (void)save;
- (void)handleDatabaseContext:(id)arg1 saveError:(id)arg2;
- (void)handleDatabaseContext:(id)arg1 queryError:(id)arg2;
- (id)initWithPersistentRequestManager:(id)arg1 model:(id)arg2 storeURL:(id)arg3 logIdentifier:(id)arg4 maximumBackgroundContextCount:(unsigned long long)arg5 blacklistBackup:(_Bool)arg6;
- (id)init;

@end

