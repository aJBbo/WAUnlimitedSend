//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAStickerPackInfoProviding <NSObject>
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic, getter=isFirstParty) _Bool firstParty;
@property(readonly, nonatomic) long long stickerCount;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, copy, nonatomic) NSString *imageDataHash;
@property(readonly, copy, nonatomic) NSString *packDescription;
@property(readonly, copy, nonatomic) NSString *publisher;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *stickerPackId;
@end

