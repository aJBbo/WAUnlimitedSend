//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WANotification.h"

@class NSString, UNNotificationSound;

__attribute__((visibility("hidden")))
@interface WARichNotification : WANotification
{
}

- (id)generateAttachments;
@property(readonly, nonatomic) _Bool hasImageAttachments;
@property(readonly, nonatomic) unsigned long long summaryArgumentCount;
@property(readonly, nonatomic) NSString *summaryArgument;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) UNNotificationSound *sound;

@end

