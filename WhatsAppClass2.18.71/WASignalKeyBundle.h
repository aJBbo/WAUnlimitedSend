//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WASignalPrekey;

__attribute__((visibility("hidden")))
@interface WASignalKeyBundle : NSObject
{
    unsigned char _keyType;
    unsigned int _registrationId;
    unsigned int _deviceId;
    NSData *_identityPublicKeyData;
    WASignalPrekey *_signedPrekey;
    NSData *_signedPrekeySignatureData;
}

@property(readonly, nonatomic) NSData *signedPrekeySignatureData; // @synthesize signedPrekeySignatureData=_signedPrekeySignatureData;
@property(readonly, nonatomic) WASignalPrekey *signedPrekey; // @synthesize signedPrekey=_signedPrekey;
@property(readonly, nonatomic) NSData *identityPublicKeyData; // @synthesize identityPublicKeyData=_identityPublicKeyData;
@property(readonly, nonatomic) unsigned char keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) unsigned int deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) unsigned int registrationId; // @synthesize registrationId=_registrationId;
- (void).cxx_destruct;
- (_Bool)isEqualToWASignalKeyBundle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)valid;
- (id)initWithRegistrationId:(unsigned int)arg1 keyType:(unsigned char)arg2 identityPublicKeyData:(id)arg3 signedPrekey:(id)arg4 signedPrekeySignatureData:(id)arg5;

@end

