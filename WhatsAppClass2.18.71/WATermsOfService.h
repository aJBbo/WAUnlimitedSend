//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WATermsOfService : NSObject
{
}

+ (void)ackTOSResetIfNecessary;
+ (void)sendSecondPageIQIfNecessary;
+ (void)sendSetTOSStageIQIfNecessary;
+ (void)sendAcceptIQIfNecessary;
+ (void)updateServerIfNecessary;
+ (void)setTOSAccepted;
+ (void)updateTOSUILastSeenDate;
+ (void)tosUISecondPageDisplayed;
+ (void)tosUIBecameVisibleForStage:(unsigned long long)arg1;
+ (void)setStartDate:(id)arg1 forTOSStage:(unsigned long long)arg2;
+ (id)startDateForTOSStage:(unsigned long long)arg1;
+ (_Bool)canPresentUIForStage:(unsigned long long)arg1;
+ (id)stageTwoStartDate;
+ (void)turnOff;
+ (void)setStageOneDuration:(long long)arg1 stageTwoDuration:(long long)arg2;
+ (void)reloadServerPropValue;
+ (long long)region;
+ (unsigned long long)stage;

@end

