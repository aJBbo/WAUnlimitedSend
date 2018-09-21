//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WASignalManager.h>

@interface WASignalManager (Location)
- (void)handleLocationEncryptionError:(id)arg1;
- (void)fetchJidsHavingSenderKeysForLocation:(CDUnknownBlockType)arg1;
- (void)fetchJidsNeedingSenderKeysForLocation:(CDUnknownBlockType)arg1;
- (id)locationGroupJID;
- (void)constructSenderKeyDistributionMessageDataWithFetch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateLocationSenderKey;
- (void)markSenderKeySentForLocationParticipant:(id)arg1 if:(CDUnknownBlockType)arg2;
- (void)markSenderKeySentForAllLocationParticipantsIf:(CDUnknownBlockType)arg1;
- (void)encryptLocation:(id)arg1 participant:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processLocationKeyDistributionMessage:(id)arg1 from:(id)arg2;
- (void)decryptLocationKeyDistributionMessage:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)decryptLocation:(id)arg1 participantJid:(id)arg2 completion:(CDUnknownBlockType)arg3;
@end

