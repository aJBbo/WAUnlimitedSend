//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface Wam : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_logEventGroup;
    _Bool _isRecordingEvents;
}

- (void).cxx_destruct;
- (void)logEvent:(int)arg1 weight:(unsigned int)arg2 eventObject:(id)arg3;
- (void)setAttributeToNull:(int)arg1;
- (void)setAttribute:(int)arg1 stringValue:(id)arg2;
- (void)setAttribute:(int)arg1 numericValue:(double)arg2;
- (void)sendAck;
- (id)getData;
- (_Bool)forceRotateBuffer;
- (_Bool)hasDataToSend;
- (void)writeScheduled;
- (void)write;
- (_Bool)isRecordingEvents;
- (void)startRecordingEvents;
- (id)initWithConfig:(struct wam_config *)arg1;

@end

