//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessagesBySessionTask.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface WAMessagesByActiveSessionTask : WAMessagesBySessionTask
{
    NSString *_markerJID;
    _Bool _markerNext;
    NSNumber *_markerSort;
}

- (void).cxx_destruct;
- (void)invokeDidFinishChatSession:(id)arg1;
- (id)fetchRequestForNextMessagesIn:(id)arg1;
- (id)predicateForNextMessages;
- (id)markerPredicateForNextMessages;
- (id)fetchRequestForNextChatSession;
- (id)predicateForNextChatSession;
- (id)markerPredicateForNextChatSession;
- (id)resumeIdentifier;
- (void)updateMarkerSortWithLastMessage:(id)arg1;
- (id)initWithDescription:(id)arg1 chatStorage:(id)arg2 resumeIdentifier:(id)arg3 chatPredicate:(id)arg4 messagePredicate:(id)arg5 block:(CDUnknownBlockType)arg6;
- (id)initWithDescription:(id)arg1 chatStorage:(id)arg2 chatPredicate:(id)arg3 messagePredicate:(id)arg4 block:(CDUnknownBlockType)arg5;

@end

