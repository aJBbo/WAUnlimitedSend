//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAECKeyPair, WAECPublicKey, WAHandshakeCipher, WANoiseStreamCipher;

__attribute__((visibility("hidden")))
@interface WANoiseFullHandshake : NSObject
{
    WAHandshakeCipher *_cipher;
    WAECKeyPair *_clientEphemeralKeyPair;
    WAECKeyPair *_clientStaticKeyPair;
    WAECPublicKey *_serverEphemeralPublicKey;
    WAECPublicKey *_serverStaticPublicKey;
    _Bool _generatedClientHello;
}

@property(readonly, nonatomic) _Bool generatedClientHello; // @synthesize generatedClientHello=_generatedClientHello;
- (void).cxx_destruct;
@property(readonly, nonatomic) WANoiseStreamCipher *streamCipher;
- (_Bool)encryptClientFinishLoginPayload:(id)arg1 ciphertextOutput:(out id *)arg2 error:(out id *)arg3;
- (_Bool)decryptServerHelloCiphertext:(id)arg1 certificate:(out id *)arg2 serverStaticPublicKey:(out id *)arg3 error:(out id *)arg4;
- (_Bool)generateClientHelloCiphertextOutput:(out id *)arg1 withError:(out id *)arg2;
- (id)initWithVersion:(id)arg1 clientStaticKeyPair:(id)arg2;

@end

