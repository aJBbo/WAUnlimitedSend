//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventLiveLocationReportingSessionSegment : WamEvent
{
    NSNumber *_segment_algorithm_number;
    NSNumber *_segment_backoff_stage_number;
    double _segment_t;
    double _segment_number;
    double _segment_number_of_updates;
    double _segment_battery_level_change;
    double _segment_battery_charging;
}

@property(nonatomic) double segment_battery_charging; // @synthesize segment_battery_charging=_segment_battery_charging;
@property(nonatomic) double segment_battery_level_change; // @synthesize segment_battery_level_change=_segment_battery_level_change;
@property(nonatomic) double segment_number_of_updates; // @synthesize segment_number_of_updates=_segment_number_of_updates;
@property(nonatomic) double segment_number; // @synthesize segment_number=_segment_number;
@property(nonatomic) double segment_t_milliseconds; // @synthesize segment_t_milliseconds=_segment_t;
- (void).cxx_destruct;
@property(nonatomic) long long segment_backoff_stage;
- (_Bool)is_segment_backoff_stage_set;
@property(nonatomic) long long segment_algorithm;
- (_Bool)is_segment_algorithm_set;
@property(nonatomic) double segment_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

