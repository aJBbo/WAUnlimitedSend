//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventStatusItemView : WamEvent
{
    NSNumber *_status_item_view_result_number;
    NSNumber *_media_type_number;
    double _status_item_load_time;
    double _status_item_view_time;
    double _status_item_length;
    double _status_viewer_session_id;
    double _status_row_index;
    double _status_item_replied;
    double _status_item_unread;
}

@property(nonatomic) double status_item_unread; // @synthesize status_item_unread=_status_item_unread;
@property(nonatomic) double status_item_replied; // @synthesize status_item_replied=_status_item_replied;
@property(nonatomic) double status_row_index; // @synthesize status_row_index=_status_row_index;
@property(nonatomic) double status_viewer_session_id; // @synthesize status_viewer_session_id=_status_viewer_session_id;
@property(nonatomic) double status_item_length_milliseconds; // @synthesize status_item_length_milliseconds=_status_item_length;
@property(nonatomic) double status_item_view_time_milliseconds; // @synthesize status_item_view_time_milliseconds=_status_item_view_time;
@property(nonatomic) double status_item_load_time_milliseconds; // @synthesize status_item_load_time_milliseconds=_status_item_load_time;
- (void).cxx_destruct;
@property(nonatomic) double status_item_length_seconds;
@property(nonatomic) double status_item_view_time_seconds;
@property(nonatomic) double status_item_load_time_seconds;
@property(nonatomic) long long media_type;
- (_Bool)is_media_type_set;
@property(nonatomic) long long status_item_view_result;
- (_Bool)is_status_item_view_result_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

