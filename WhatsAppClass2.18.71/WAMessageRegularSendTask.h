//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageSendTask.h"

@class NSString, WAMessageSendUploadItem;

__attribute__((visibility("hidden")))
@interface WAMessageRegularSendTask : WAMessageSendTask
{
    int _sortIndex;
    _Bool _internalComplete;
    NSString *_chatConnectionIdentifier;
    NSString *_fanoutPhash;
    WAMessageSendUploadItem *_uploadItem;
}

@property(retain, nonatomic) WAMessageSendUploadItem *uploadItem; // @synthesize uploadItem=_uploadItem;
@property(copy, nonatomic) NSString *fanoutPhash; // @synthesize fanoutPhash=_fanoutPhash;
@property(copy, nonatomic) NSString *chatConnectionIdentifier; // @synthesize chatConnectionIdentifier=_chatConnectionIdentifier;
- (void).cxx_destruct;
- (long long)compareSortIndex:(id)arg1;
- (void)dispose;
- (_Bool)complete;
- (id)initWithMessage:(id)arg1;

@end

