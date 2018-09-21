//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WACallNotificationInfo : NSObject
{
    _Bool _videoEnabled;
    unsigned long long _notificationType;
    NSString *_callID;
    NSString *_callerJID;
    NSString *_callerPushName;
    NSArray *_participantsJID;
}

@property(copy, nonatomic) NSArray *participantsJID; // @synthesize participantsJID=_participantsJID;
@property(copy, nonatomic) NSString *callerPushName; // @synthesize callerPushName=_callerPushName;
@property(copy, nonatomic) NSString *callerJID; // @synthesize callerJID=_callerJID;
@property(copy, nonatomic) NSString *callID; // @synthesize callID=_callID;
@property(nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) unsigned long long notificationType; // @synthesize notificationType=_notificationType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isGroupCall;
@property(readonly, nonatomic) NSString *extraParticipantsConcatenatedNames;
- (id)extraParticipantsJID;
@property(readonly, nonatomic) NSString *bestCallerName;
- (id)initWithCallID:(id)arg1 callerJID:(id)arg2 callerPushName:(id)arg3 participantsJID:(id)arg4 videoEnabled:(_Bool)arg5 notificationType:(unsigned long long)arg6;

@end

