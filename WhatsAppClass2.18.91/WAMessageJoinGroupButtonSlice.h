//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageButtonsSlice.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface WAMessageJoinGroupButtonSlice : WAMessageButtonsSlice
{
    NSURL *_groupInviteURL;
}

+ (Class)viewClass;
@property(readonly, nonatomic) NSURL *groupInviteURL; // @synthesize groupInviteURL=_groupInviteURL;
- (void).cxx_destruct;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2;

@end
