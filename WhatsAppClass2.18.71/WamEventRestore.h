//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventRestore : WamEvent
{
    NSNumber *_backup_restore_result_number;
    NSNumber *_backup_network_setting_number;
    NSNumber *_backup_schedule_number;
    double _backup_restore_t;
    double _backup_restore_is_full;
    double _backup_restore_is_wifi;
    double _backup_restore_retry_count;
    double _backup_restore_include_videos;
    double _backup_restore_total_size;
    double _backup_restore_chatdb_size;
    double _backup_restore_media_size;
    double _backup_restore_transfer_size;
    double _backup_restore_transfer_failed_size;
    double _backup_restore_media_file_count;
    double _backup_restore_network_request_count;
    double _restore_concurrent_reads_count;
    double _restore_restored_by_name_media_files_count;
}

@property(nonatomic) double restore_restored_by_name_media_files_count; // @synthesize restore_restored_by_name_media_files_count=_restore_restored_by_name_media_files_count;
@property(nonatomic) double restore_concurrent_reads_count; // @synthesize restore_concurrent_reads_count=_restore_concurrent_reads_count;
@property(nonatomic) double backup_restore_network_request_count; // @synthesize backup_restore_network_request_count=_backup_restore_network_request_count;
@property(nonatomic) double backup_restore_media_file_count; // @synthesize backup_restore_media_file_count=_backup_restore_media_file_count;
@property(nonatomic) double backup_restore_transfer_failed_size; // @synthesize backup_restore_transfer_failed_size=_backup_restore_transfer_failed_size;
@property(nonatomic) double backup_restore_transfer_size; // @synthesize backup_restore_transfer_size=_backup_restore_transfer_size;
@property(nonatomic) double backup_restore_media_size; // @synthesize backup_restore_media_size=_backup_restore_media_size;
@property(nonatomic) double backup_restore_chatdb_size; // @synthesize backup_restore_chatdb_size=_backup_restore_chatdb_size;
@property(nonatomic) double backup_restore_total_size; // @synthesize backup_restore_total_size=_backup_restore_total_size;
@property(nonatomic) double backup_restore_include_videos; // @synthesize backup_restore_include_videos=_backup_restore_include_videos;
@property(nonatomic) double backup_restore_retry_count; // @synthesize backup_restore_retry_count=_backup_restore_retry_count;
@property(nonatomic) double backup_restore_is_wifi; // @synthesize backup_restore_is_wifi=_backup_restore_is_wifi;
@property(nonatomic) double backup_restore_is_full; // @synthesize backup_restore_is_full=_backup_restore_is_full;
@property(nonatomic) double backup_restore_t_milliseconds; // @synthesize backup_restore_t_milliseconds=_backup_restore_t;
- (void).cxx_destruct;
@property(nonatomic) long long backup_schedule;
- (_Bool)is_backup_schedule_set;
@property(nonatomic) long long backup_network_setting;
- (_Bool)is_backup_network_setting_set;
@property(nonatomic) double backup_restore_t_seconds;
@property(nonatomic) long long backup_restore_result;
- (_Bool)is_backup_restore_result_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

