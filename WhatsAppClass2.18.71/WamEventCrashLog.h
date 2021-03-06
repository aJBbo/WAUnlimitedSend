//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface WamEventCrashLog : WamEvent
{
    NSNumber *_iphone_application_state_number;
    NSString *_crash_exception;
    NSString *_crash_reason;
    NSString *_crash_context;
    double _crash_count;
}

@property(nonatomic) double crash_count; // @synthesize crash_count=_crash_count;
@property(copy, nonatomic) NSString *crash_context; // @synthesize crash_context=_crash_context;
@property(copy, nonatomic) NSString *crash_reason; // @synthesize crash_reason=_crash_reason;
@property(copy, nonatomic) NSString *crash_exception; // @synthesize crash_exception=_crash_exception;
- (void).cxx_destruct;
@property(nonatomic) long long iphone_application_state;
- (_Bool)is_iphone_application_state_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

