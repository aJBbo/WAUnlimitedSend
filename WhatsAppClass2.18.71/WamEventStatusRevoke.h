//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventStatusRevoke : WamEvent
{
    NSNumber *_media_type_number;
    double _status_session_id;
    double _status_life_t;
}

@property(nonatomic) double status_life_t; // @synthesize status_life_t=_status_life_t;
@property(nonatomic) double status_session_id; // @synthesize status_session_id=_status_session_id;
- (void).cxx_destruct;
@property(nonatomic) long long media_type;
- (_Bool)is_media_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

