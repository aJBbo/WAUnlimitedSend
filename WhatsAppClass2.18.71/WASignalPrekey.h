//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface WASignalPrekey : NSObject
{
    unsigned int _keyId;
    NSData *_keyData;
}

@property(readonly, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(readonly, nonatomic) unsigned int keyId; // @synthesize keyId=_keyId;
- (void).cxx_destruct;
- (_Bool)isEqualToWASignalPrekey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKeyId:(unsigned int)arg1 keyData:(id)arg2;

@end

