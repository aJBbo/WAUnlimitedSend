//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventUiAction : WamEvent
{
    NSNumber *_ui_action_type_number;
    double _ui_action_t;
    double _ui_action_preloaded;
}

@property(nonatomic) double ui_action_preloaded; // @synthesize ui_action_preloaded=_ui_action_preloaded;
@property(nonatomic) double ui_action_t_milliseconds; // @synthesize ui_action_t_milliseconds=_ui_action_t;
- (void).cxx_destruct;
@property(nonatomic) double ui_action_t_seconds;
@property(nonatomic) long long ui_action_type;
- (_Bool)is_ui_action_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

