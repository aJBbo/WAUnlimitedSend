//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (TimeShiftInternal)
@property(readonly, nonatomic) double wa_elapsedServerTimeInterval;
@property(readonly, nonatomic) double wa_elapsedTimeInterval;
- (id)wa_dateByRemovingShiftCorrection;
- (id)wa_dateByIncludingShiftCorrection;
@end

