//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

__attribute__((visibility("hidden")))
@interface WamEventIphoneChatDbMigration : WamEvent
{
    double _iphone_chat_db_migration_duration;
    double _iphone_chat_db_migration_db_size_kb;
}

@property(nonatomic) double iphone_chat_db_migration_db_size_kb; // @synthesize iphone_chat_db_migration_db_size_kb=_iphone_chat_db_migration_db_size_kb;
@property(nonatomic) double iphone_chat_db_migration_duration_milliseconds; // @synthesize iphone_chat_db_migration_duration_milliseconds=_iphone_chat_db_migration_duration;
@property(nonatomic) double iphone_chat_db_migration_duration_seconds;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end
