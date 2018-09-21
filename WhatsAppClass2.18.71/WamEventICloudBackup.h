//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventICloudBackup : WamEvent
{
    NSNumber *_icloud_backup_result_number;
    double _icloud_backup_version;
    double _icloud_backup_backup_interval;
    double _icloud_backup_age;
    double _icloud_backup_include_videos;
    double _icloud_backup_integrity_check;
    double _icloud_t;
    double _icloud_chatdb_size;
    double _icloud_searchdb_size;
    double _icloud_calllog_size;
    double _icloud_media_tar_size;
    double _icloud_media_tar_t;
    double _icloud_thumb_tar_size;
    double _icloud_thumb_tar_t;
    double _icloud_media_tar_estimate;
    double _icloud_thumb_tar_estimate;
    double _icloud_video_tar_size;
    double _icloud_video_tar_estimate;
    double _icloud_video_tar_t;
    double _icloud_docs_tar_size;
    double _icloud_docs_tar_estimate;
    double _icloud_docs_tar_t;
}

@property(nonatomic) double icloud_docs_tar_t; // @synthesize icloud_docs_tar_t=_icloud_docs_tar_t;
@property(nonatomic) double icloud_docs_tar_estimate; // @synthesize icloud_docs_tar_estimate=_icloud_docs_tar_estimate;
@property(nonatomic) double icloud_docs_tar_size; // @synthesize icloud_docs_tar_size=_icloud_docs_tar_size;
@property(nonatomic) double icloud_video_tar_t; // @synthesize icloud_video_tar_t=_icloud_video_tar_t;
@property(nonatomic) double icloud_video_tar_estimate; // @synthesize icloud_video_tar_estimate=_icloud_video_tar_estimate;
@property(nonatomic) double icloud_video_tar_size; // @synthesize icloud_video_tar_size=_icloud_video_tar_size;
@property(nonatomic) double icloud_thumb_tar_estimate; // @synthesize icloud_thumb_tar_estimate=_icloud_thumb_tar_estimate;
@property(nonatomic) double icloud_media_tar_estimate; // @synthesize icloud_media_tar_estimate=_icloud_media_tar_estimate;
@property(nonatomic) double icloud_thumb_tar_t; // @synthesize icloud_thumb_tar_t=_icloud_thumb_tar_t;
@property(nonatomic) double icloud_thumb_tar_size; // @synthesize icloud_thumb_tar_size=_icloud_thumb_tar_size;
@property(nonatomic) double icloud_media_tar_t; // @synthesize icloud_media_tar_t=_icloud_media_tar_t;
@property(nonatomic) double icloud_media_tar_size; // @synthesize icloud_media_tar_size=_icloud_media_tar_size;
@property(nonatomic) double icloud_calllog_size; // @synthesize icloud_calllog_size=_icloud_calllog_size;
@property(nonatomic) double icloud_searchdb_size; // @synthesize icloud_searchdb_size=_icloud_searchdb_size;
@property(nonatomic) double icloud_chatdb_size; // @synthesize icloud_chatdb_size=_icloud_chatdb_size;
@property(nonatomic) double icloud_t; // @synthesize icloud_t=_icloud_t;
@property(nonatomic) double icloud_backup_integrity_check; // @synthesize icloud_backup_integrity_check=_icloud_backup_integrity_check;
@property(nonatomic) double icloud_backup_include_videos; // @synthesize icloud_backup_include_videos=_icloud_backup_include_videos;
@property(nonatomic) double icloud_backup_age; // @synthesize icloud_backup_age=_icloud_backup_age;
@property(nonatomic) double icloud_backup_backup_interval; // @synthesize icloud_backup_backup_interval=_icloud_backup_backup_interval;
@property(nonatomic) double icloud_backup_version; // @synthesize icloud_backup_version=_icloud_backup_version;
- (void).cxx_destruct;
@property(nonatomic) long long icloud_backup_result;
- (_Bool)is_icloud_backup_result_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
