//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventReceiptsRecv : WamEvent
{
    NSNumber *_receipts_type_number;
    NSNumber *_message_type_number;
    double _receipts_proc_t;
}

@property(nonatomic) double receipts_proc_t_milliseconds; // @synthesize receipts_proc_t_milliseconds=_receipts_proc_t;
- (void).cxx_destruct;
@property(nonatomic) double receipts_proc_t_seconds;
@property(nonatomic) long long message_type;
- (_Bool)is_message_type_set;
@property(nonatomic) long long receipts_type;
- (_Bool)is_receipts_type_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

