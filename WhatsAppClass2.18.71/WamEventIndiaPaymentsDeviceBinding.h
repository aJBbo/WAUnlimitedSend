//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface WamEventIndiaPaymentsDeviceBinding : WamEvent
{
    NSNumber *_payments_psp_id_number;
    NSNumber *_payments_response_result_number;
    NSString *_payments_event_id;
    NSString *_payments_error_code;
    NSString *_payments_error_text;
    NSString *_payments_bank_id;
    double _payments_response_byte_size;
    double _payments_response_rtt;
    double _sms_provider_retry_count;
    NSString *_sms_provider_number;
    double _request_retry_count;
    double _request_retry_time_delay_seconds;
    double _has_multiple_sims;
}

@property(nonatomic) double has_multiple_sims; // @synthesize has_multiple_sims=_has_multiple_sims;
@property(nonatomic) double request_retry_time_delay_seconds; // @synthesize request_retry_time_delay_seconds=_request_retry_time_delay_seconds;
@property(nonatomic) double request_retry_count; // @synthesize request_retry_count=_request_retry_count;
@property(copy, nonatomic) NSString *sms_provider_number; // @synthesize sms_provider_number=_sms_provider_number;
@property(nonatomic) double sms_provider_retry_count; // @synthesize sms_provider_retry_count=_sms_provider_retry_count;
@property(nonatomic) double payments_response_rtt; // @synthesize payments_response_rtt=_payments_response_rtt;
@property(nonatomic) double payments_response_byte_size; // @synthesize payments_response_byte_size=_payments_response_byte_size;
@property(copy, nonatomic) NSString *payments_bank_id; // @synthesize payments_bank_id=_payments_bank_id;
@property(copy, nonatomic) NSString *payments_error_text; // @synthesize payments_error_text=_payments_error_text;
@property(copy, nonatomic) NSString *payments_error_code; // @synthesize payments_error_code=_payments_error_code;
@property(copy, nonatomic) NSString *payments_event_id; // @synthesize payments_event_id=_payments_event_id;
- (void).cxx_destruct;
@property(nonatomic) long long payments_response_result;
- (_Bool)is_payments_response_result_set;
@property(nonatomic) long long payments_psp_id;
- (_Bool)is_payments_psp_id_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

