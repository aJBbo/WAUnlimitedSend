//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStickerPackInfoProviding-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WAStickerPack : NSObject <WAStickerPackInfoProviding>
{
    NSString *_stickerPackId;
    NSString *_name;
    NSString *_publisher;
    NSString *_packDescription;
    long long _fileSize;
    long long _stickerCount;
    NSString *_trayImageId;
    NSArray *_previewImageIds;
    NSString *_imageDataHash;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *imageDataHash; // @synthesize imageDataHash=_imageDataHash;
@property(readonly, copy, nonatomic) NSArray *previewImageIds; // @synthesize previewImageIds=_previewImageIds;
@property(readonly, copy, nonatomic) NSString *trayImageId; // @synthesize trayImageId=_trayImageId;
@property(readonly, nonatomic) long long stickerCount; // @synthesize stickerCount=_stickerCount;
@property(readonly, nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSString *packDescription; // @synthesize packDescription=_packDescription;
@property(readonly, copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *stickerPackId; // @synthesize stickerPackId=_stickerPackId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isFirstParty) _Bool firstParty;
@property(readonly, nonatomic) long long downloadState;
- (_Bool)isInMyStickersList;
- (id)initWithStickerPackId:(id)arg1 name:(id)arg2 publisher:(id)arg3 packDescription:(id)arg4 fileSize:(long long)arg5 stickerCount:(long long)arg6 trayImageId:(id)arg7 previewImageIds:(id)arg8 imageDataHash:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

