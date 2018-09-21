//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

__attribute__((visibility("hidden")))
@interface WamEventUserActivitySessionSummary : WamEvent
{
    double _user_activity_start_time;
    double _user_activity_duration;
    double _user_activity_sessions_length;
    double _user_activity_time_change;
    double _user_activity_foreground;
    double _user_session_summary_sequence;
}

@property(nonatomic) double user_session_summary_sequence; // @synthesize user_session_summary_sequence=_user_session_summary_sequence;
@property(nonatomic) double user_activity_foreground; // @synthesize user_activity_foreground=_user_activity_foreground;
@property(nonatomic) double user_activity_time_change; // @synthesize user_activity_time_change=_user_activity_time_change;
@property(nonatomic) double user_activity_sessions_length; // @synthesize user_activity_sessions_length=_user_activity_sessions_length;
@property(nonatomic) double user_activity_duration; // @synthesize user_activity_duration=_user_activity_duration;
@property(nonatomic) double user_activity_start_time; // @synthesize user_activity_start_time=_user_activity_start_time;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

