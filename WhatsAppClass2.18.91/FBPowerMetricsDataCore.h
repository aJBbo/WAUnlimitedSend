//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPowerMetricsDataSource-Protocol.h"

@class FBPowerSnapshotter;

__attribute__((visibility("hidden")))
@interface FBPowerMetricsDataCore : NSObject <FBPowerMetricsDataSource>
{
    struct PowerSnapshot _snapshot;
    FBPowerSnapshotter *_powerSnapshotter;
}

- (void).cxx_destruct;
- (id)dictionaryFromSnapshot:(struct PowerSnapshot)arg1;
- (id)diff:(_Bool)arg1;
- (id)diffSinceLastUpdate;
- (id)updateData;
- (id)init;

@end

