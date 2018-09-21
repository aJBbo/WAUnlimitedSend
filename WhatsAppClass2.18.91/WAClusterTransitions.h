//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface WAClusterTransitions : NSObject
{
    NSSet *_JIDsOfNewSingletons;
    NSSet *_oldSingletonJIDs;
    NSSet *_oldGroupedJIDs;
    NSSet *_newGroupedJIDs;
    NSSet *_newGroupIDs;
    NSSet *_oldGroupIDs;
    NSDictionary *_newGroupMembershipMap;
    NSDictionary *_oldGroupMembershipMap;
    NSSet *_createSingleton;
    NSSet *_moveSingleton;
    NSSet *_destroySingleton;
    NSSet *_destroyGroup;
    NSSet *_createGroup;
    NSSet *_singletonJoinGroup;
    NSSet *_singletonSplitFromGroup;
    NSSet *_groupSplitFromGroup;
    NSSet *_groupJoinGroup;
    NSDictionary *_groupMap;
    NSDictionary *_reverseGroupMap;
}

+ (id)computeGroupedJIDsFromClusters:(id)arg1;
+ (id)computeSingletonsFromClusters:(id)arg1;
+ (id)computeCreateSingletonWithJIDsOfNewSingletons:(id)arg1 oldSingletonJIDs:(id)arg2 oldGroupedJIDs:(id)arg3;
+ (id)computeMovedSingletonsWithOldSingletonJIDs:(id)arg1 jidsOfNewSingletons:(id)arg2;
+ (id)computeDestroyedSingletonsFromOldSingletonJIDs:(id)arg1 newGroupedJIDs:(id)arg2 jidsOfNewSingletons:(id)arg3;
+ (id)computeGroupIDsFromClusters:(id)arg1;
+ (id)computeGroupMapWithNewGroupIDs:(id)arg1 oldGroupIDs:(id)arg2;
+ (id)computeGroupMembershipMapWithGroupIDs:(id)arg1;
+ (id)computeReverseGroupMapFromGroupMap:(id)arg1;
+ (id)computeCreateGroupFromNewGroupIDs:(id)arg1 reverseGroupMap:(id)arg2;
+ (id)computeSingletonJoinGroupWithOldSingletonJIDs:(id)arg1 newGroupedJIDs:(id)arg2;
+ (id)computeSingletonSplitFromGroupWithOldGroupedJIDs:(id)arg1 jidsOfNewSingletons:(id)arg2;
+ (id)computeGroupJoinGroupWithOldGroupIDs:(id)arg1 newGroupIDs:(id)arg2 destroyedJIDs:(id)arg3 groupSplitFromGroup:(id)arg4 singletonSplitFromGroup:(id)arg5 groupMap:(id)arg6 newGroupMembershipMap:(id)arg7;
+ (id)computeSingletonSplitFromGroupWithOldGroupedJIDs:(id)arg1 jidsOfNewSingletons:(id)arg2 oldGroupMembershipMap:(id)arg3 newGroupMembershipMap:(id)arg4;
+ (id)computeGroupSplitFromGroupWithOldGroupedJIDs:(id)arg1 jidsOfNewSingletons:(id)arg2 groupMap:(id)arg3 oldGroupMembershipMap:(id)arg4 newGroupMembershipMap:(id)arg5;
+ (id)computeDestroyedGroupFromGroupMap:(id)arg1 oldGroupedIDs:(id)arg2;
@property(readonly, nonatomic) NSDictionary *reverseGroupMap; // @synthesize reverseGroupMap=_reverseGroupMap;
@property(readonly, nonatomic) NSDictionary *groupMap; // @synthesize groupMap=_groupMap;
@property(readonly, nonatomic) NSSet *groupJoinGroup; // @synthesize groupJoinGroup=_groupJoinGroup;
@property(readonly, nonatomic) NSSet *groupSplitFromGroup; // @synthesize groupSplitFromGroup=_groupSplitFromGroup;
@property(readonly, nonatomic) NSSet *singletonSplitFromGroup; // @synthesize singletonSplitFromGroup=_singletonSplitFromGroup;
@property(readonly, nonatomic) NSSet *singletonJoinGroup; // @synthesize singletonJoinGroup=_singletonJoinGroup;
@property(readonly, nonatomic) NSSet *createGroup; // @synthesize createGroup=_createGroup;
@property(readonly, nonatomic) NSSet *destroyGroup; // @synthesize destroyGroup=_destroyGroup;
@property(readonly, nonatomic) NSSet *destroySingleton; // @synthesize destroySingleton=_destroySingleton;
@property(readonly, nonatomic) NSSet *moveSingleton; // @synthesize moveSingleton=_moveSingleton;
@property(readonly, nonatomic) NSSet *createSingleton; // @synthesize createSingleton=_createSingleton;
- (void).cxx_destruct;
- (id)initWithOldClusters:(id)arg1 newClusters:(id)arg2;

@end

