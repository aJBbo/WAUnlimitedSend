//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WamEvent.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WamEventIphoneLinkMediaDownload : WamEvent
{
    NSNumber *_iphone_link_media_download_final_state_number;
    NSNumber *_iphone_link_media_download_type_number;
}

- (void).cxx_destruct;
@property(nonatomic) long long iphone_link_media_download_type;
- (_Bool)is_iphone_link_media_download_type_set;
@property(nonatomic) long long iphone_link_media_download_final_state;
- (_Bool)is_iphone_link_media_download_final_state_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)init;

@end

