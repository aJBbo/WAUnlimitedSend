//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

__attribute__((visibility("hidden")))
@interface WamEventOfflineMessages : WamEvent
{
    double _offline_messages_receive_t;
    double _offline_messages_oldest_msg_login_delta_t;
    double _offline_message_c;
    double _offline_notification_c;
}

@property(nonatomic) double offline_notification_c; // @synthesize offline_notification_c=_offline_notification_c;
@property(nonatomic) double offline_message_c; // @synthesize offline_message_c=_offline_message_c;
@property(nonatomic) double offline_messages_oldest_msg_login_delta_t_milliseconds; // @synthesize offline_messages_oldest_msg_login_delta_t_milliseconds=_offline_messages_oldest_msg_login_delta_t;
@property(nonatomic) double offline_messages_receive_t_milliseconds; // @synthesize offline_messages_receive_t_milliseconds=_offline_messages_receive_t;
@property(nonatomic) double offline_messages_oldest_msg_login_delta_t_seconds;
@property(nonatomic) double offline_messages_receive_t_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

