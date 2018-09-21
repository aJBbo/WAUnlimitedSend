//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class WAPBDefaultDecaySet, WAPBPerpetualDecaySet, WAPBRapidDecaySet;

__attribute__((visibility("hidden")))
@interface WAPBRankingMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) WAPBDefaultDecaySet *defaultDecaySet; // @dynamic defaultDecaySet;
@property(nonatomic) _Bool hasDefaultDecaySet; // @dynamic hasDefaultDecaySet;
@property(nonatomic) _Bool hasPerpetualDecaySet; // @dynamic hasPerpetualDecaySet;
@property(nonatomic) _Bool hasRapidDecaySet; // @dynamic hasRapidDecaySet;
@property(nonatomic) double lastUpdated; // @dynamic lastUpdated;
@property(retain, nonatomic) WAPBPerpetualDecaySet *perpetualDecaySet; // @dynamic perpetualDecaySet;
@property(retain, nonatomic) WAPBRapidDecaySet *rapidDecaySet; // @dynamic rapidDecaySet;

@end
