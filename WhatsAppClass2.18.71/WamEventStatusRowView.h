//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventStatusRowView : WamEvent
{
    NSNumber *_status_row_section_number;
    NSNumber *_status_row_entry_method_number;
    double _status_session_id;
    double _status_viewer_session_id;
    double _status_row_index;
    double _status_row_view_count;
    double _status_row_unread_item_count;
}

@property(nonatomic) double status_row_unread_item_count; // @synthesize status_row_unread_item_count=_status_row_unread_item_count;
@property(nonatomic) double status_row_view_count; // @synthesize status_row_view_count=_status_row_view_count;
@property(nonatomic) double status_row_index; // @synthesize status_row_index=_status_row_index;
@property(nonatomic) double status_viewer_session_id; // @synthesize status_viewer_session_id=_status_viewer_session_id;
@property(nonatomic) double status_session_id; // @synthesize status_session_id=_status_session_id;
- (void).cxx_destruct;
@property(nonatomic) long long status_row_entry_method;
- (_Bool)is_status_row_entry_method_set;
@property(nonatomic) long long status_row_section;
- (_Bool)is_status_row_section_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

