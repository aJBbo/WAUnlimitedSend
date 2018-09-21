//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAClusterableItem-Protocol.h"

@class NSArray, NSString, WACachedCopyMutableArray;

__attribute__((visibility("hidden")))
@interface WACluster : NSObject <WAClusterableItem>
{
    WACachedCopyMutableArray *_items;
    WACluster *_cluster;
    id _annotation;
    struct CGPoint _location;
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)nearestClusterInClusters:(id)arg1 forItem:(id)arg2 distanceFunction:(CDUnknownBlockType)arg3;
+ (id)clustersWithClusters:(id)arg1 cutoffDistance:(double)arg2 distanceFunction:(CDUnknownBlockType)arg3;
+ (id)clustersWithItems:(id)arg1 cutoffDistance:(double)arg2 distanceFunction:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(retain, nonatomic) WACluster *cluster; // @synthesize cluster=_cluster;
- (void).cxx_destruct;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) _Bool preventGrouping;
@property(readonly, nonatomic) NSString *veryShortDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)jids;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

