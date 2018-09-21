//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WACallParticipantInfo;

__attribute__((visibility("hidden")))
@interface WACallInfo : NSObject
{
    _Bool _isCallActive;
    _Bool _startedByMe;
    _Bool _videoEnabledAtCallStart;
    _Bool _endedByMe;
    _Bool _ending;
    _Bool _videoEnabled;
    _Bool _videoCaptureStarted;
    _Bool _videoPreviewStarted;
    _Bool _isGroupCallEnabled;
    _Bool _isGroupCall;
    int _duration;
    int _audioDuration;
    int _videoDuration;
    NSString *_callID;
    NSString *_peerJID;
    NSString *_initialPeerJID;
    NSArray *_participants;
}

@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) _Bool isGroupCall; // @synthesize isGroupCall=_isGroupCall;
@property(readonly, nonatomic) _Bool isGroupCallEnabled; // @synthesize isGroupCallEnabled=_isGroupCallEnabled;
@property(readonly, nonatomic) _Bool videoPreviewStarted; // @synthesize videoPreviewStarted=_videoPreviewStarted;
@property(readonly, nonatomic) _Bool videoCaptureStarted; // @synthesize videoCaptureStarted=_videoCaptureStarted;
@property(readonly, nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) int audioDuration; // @synthesize audioDuration=_audioDuration;
@property(readonly, nonatomic) int duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool ending; // @synthesize ending=_ending;
@property(readonly, nonatomic) _Bool endedByMe; // @synthesize endedByMe=_endedByMe;
@property(readonly, nonatomic) _Bool videoEnabledAtCallStart; // @synthesize videoEnabledAtCallStart=_videoEnabledAtCallStart;
@property(readonly, nonatomic) _Bool startedByMe; // @synthesize startedByMe=_startedByMe;
@property(readonly, nonatomic) _Bool isCallActive; // @synthesize isCallActive=_isCallActive;
@property(readonly, nonatomic) NSString *initialPeerJID; // @synthesize initialPeerJID=_initialPeerJID;
@property(readonly, nonatomic) NSString *peerJID; // @synthesize peerJID=_peerJID;
@property(readonly, nonatomic) NSString *callID; // @synthesize callID=_callID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *peerParticipants;
@property(readonly, nonatomic) NSArray *peerParticipantsJID;
@property(readonly, nonatomic) WACallParticipantInfo *selfParticipant;
- (id)participantWithJID:(id)arg1;
@property(readonly, nonatomic) NSArray *participantsJID;
- (id)initWithCallID:(id)arg1 peerJID:(id)arg2 videoEnabled:(_Bool)arg3 startedByMe:(_Bool)arg4;
- (id)initWithCallInfo:(struct wa_call_info_t)arg1;

@end
