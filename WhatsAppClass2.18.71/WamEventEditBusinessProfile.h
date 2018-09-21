//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface WamEventEditBusinessProfile : WamEvent
{
    NSNumber *_edit_profile_action_number;
    NSString *_edit_business_profile_session_id;
    double _has_description;
    double _has_category;
    double _has_address;
    double _has_hours;
    double _has_email;
    double _has_website;
}

@property(nonatomic) double has_website; // @synthesize has_website=_has_website;
@property(nonatomic) double has_email; // @synthesize has_email=_has_email;
@property(nonatomic) double has_hours; // @synthesize has_hours=_has_hours;
@property(nonatomic) double has_address; // @synthesize has_address=_has_address;
@property(nonatomic) double has_category; // @synthesize has_category=_has_category;
@property(nonatomic) double has_description; // @synthesize has_description=_has_description;
@property(copy, nonatomic) NSString *edit_business_profile_session_id; // @synthesize edit_business_profile_session_id=_edit_business_profile_session_id;
- (void).cxx_destruct;
@property(nonatomic) long long edit_profile_action;
- (_Bool)is_edit_profile_action_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

