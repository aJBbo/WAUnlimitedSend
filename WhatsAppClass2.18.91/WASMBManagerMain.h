//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WASMBManager.h>

@class WASMBAutomaticMessageManager;

__attribute__((visibility("hidden")))
@interface WASMBManagerMain : WASMBManager
{
    WASMBAutomaticMessageManager *_automaticMessageManager;
}

- (void).cxx_destruct;
- (_Bool)isExemptFromAwayMessage:(id)arg1 forJid:(id)arg2;
- (id)businessHoursForAutomaticMessageManager:(id)arg1;
- (void)clearAwayMessageRecordIfNeededForAutomaticMessageManager:(id)arg1;
- (_Bool)hasAwayMessageSentForAutomaticMessageManager:(id)arg1 forJid:(id)arg2;
- (void)recordAwayMessageSentForAutomaticMessageManager:(id)arg1 forJid:(id)arg2;
- (id)awayMessageConfigForAutomaticMessageManager:(id)arg1;
- (id)greetingMessageConfigForAutomaticMessageManager:(id)arg1;
- (id)initWithLocalKeyValueStore:(id)arg1 backedUpKeyValueStore:(id)arg2 bizManager:(id)arg3 nameDirectory:(id)arg4;

@end

