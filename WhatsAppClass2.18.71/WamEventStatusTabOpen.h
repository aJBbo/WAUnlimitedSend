//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

__attribute__((visibility("hidden")))
@interface WamEventStatusTabOpen : WamEvent
{
    double _status_session_id;
    double _status_available_updates_count;
}

@property(nonatomic) double status_available_updates_count; // @synthesize status_available_updates_count=_status_available_updates_count;
@property(nonatomic) double status_session_id; // @synthesize status_session_id=_status_session_id;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

