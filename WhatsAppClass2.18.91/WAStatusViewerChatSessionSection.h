//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStatusViewerSection.h"

@class NSString, WAChatSession, WAMessage;

__attribute__((visibility("hidden")))
@interface WAStatusViewerChatSessionSection : WAStatusViewerSection
{
    _Bool _isLoaded;
    WAMessage *_initialMessage;
    int _maxSortNotIncluding;
    WAChatSession *_chatSession;
}

@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void).cxx_destruct;
- (void)chatStorageDidDeleteMessages:(id)arg1;
- (_Bool)isReplyEnabled;
@property(readonly, nonatomic) NSString *fromJID;
- (_Bool)isCurrentSectionActorSelf;
- (void)loadIfNeeded;
- (void)dealloc;
- (id)initWithChatSession:(id)arg1 initialMessage:(id)arg2;

@end

