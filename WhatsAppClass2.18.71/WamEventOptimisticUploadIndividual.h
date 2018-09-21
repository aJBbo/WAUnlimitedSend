//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventOptimisticUploadIndividual : WamEvent
{
    NSNumber *_opt_end_state_number;
    NSNumber *_opt_origin_number;
    double _opt_cancel_time;
    double _opt_upload_delay;
    double _opt_time_since_upload_finished_t;
    double _opt_success_rate;
    double _opt_size_diff;
}

@property(nonatomic) double opt_size_diff; // @synthesize opt_size_diff=_opt_size_diff;
@property(nonatomic) double opt_success_rate; // @synthesize opt_success_rate=_opt_success_rate;
@property(nonatomic) double opt_time_since_upload_finished_t_milliseconds; // @synthesize opt_time_since_upload_finished_t_milliseconds=_opt_time_since_upload_finished_t;
@property(nonatomic) double opt_upload_delay_milliseconds; // @synthesize opt_upload_delay_milliseconds=_opt_upload_delay;
@property(nonatomic) double opt_cancel_time_milliseconds; // @synthesize opt_cancel_time_milliseconds=_opt_cancel_time;
- (void).cxx_destruct;
@property(nonatomic) double opt_time_since_upload_finished_t_seconds;
@property(nonatomic) double opt_upload_delay_seconds;
@property(nonatomic) long long opt_origin;
- (_Bool)is_opt_origin_set;
@property(nonatomic) double opt_cancel_time_seconds;
@property(nonatomic) long long opt_end_state;
- (_Bool)is_opt_end_state_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

