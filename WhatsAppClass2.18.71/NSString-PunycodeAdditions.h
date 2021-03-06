//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (PunycodeAdditions)
@property(readonly, copy) NSString *decodedURLString;
@property(readonly, copy) NSString *encodedURLString;
- (id)URLParts;
@property(readonly, copy) NSString *IDNADecodedString;
@property(readonly, copy) NSString *IDNAEncodedString;
@property(readonly, copy) NSString *punycodeDecodedString;
@property(readonly, copy) NSString *punycodeEncodedString;
- (id)stringByDeletingIgnoredCharacters;
- (const unsigned int *)longCharactersWithCount:(unsigned long long *)arg1;
@end

