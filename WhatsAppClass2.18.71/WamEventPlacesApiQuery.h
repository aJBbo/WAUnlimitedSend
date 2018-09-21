//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface WamEventPlacesApiQuery : WamEvent
{
    NSNumber *_places_api_source_number;
    NSNumber *_places_api_source_default_number;
    NSNumber *_places_api_response_number;
    double _places_api_response_t;
    NSString *_places_api_failure_description;
    double _places_api_request_index;
    double _places_api_cached;
    NSString *_places_api_query_string;
    double _places_api_places_count;
}

@property(nonatomic) double places_api_places_count; // @synthesize places_api_places_count=_places_api_places_count;
@property(copy, nonatomic) NSString *places_api_query_string; // @synthesize places_api_query_string=_places_api_query_string;
@property(nonatomic) double places_api_cached; // @synthesize places_api_cached=_places_api_cached;
@property(nonatomic) double places_api_request_index; // @synthesize places_api_request_index=_places_api_request_index;
@property(copy, nonatomic) NSString *places_api_failure_description; // @synthesize places_api_failure_description=_places_api_failure_description;
@property(nonatomic) double places_api_response_t_milliseconds; // @synthesize places_api_response_t_milliseconds=_places_api_response_t;
- (void).cxx_destruct;
@property(nonatomic) double places_api_response_t_seconds;
@property(nonatomic) long long places_api_response;
- (_Bool)is_places_api_response_set;
@property(nonatomic) long long places_api_source_default;
- (_Bool)is_places_api_source_default_set;
@property(nonatomic) long long places_api_source;
- (_Bool)is_places_api_source_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

