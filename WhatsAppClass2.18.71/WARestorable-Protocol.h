//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSCoder;

@protocol WARestorable <NSObject>

@optional
- (void)encodeWARestorableStateWithCoder:(NSCoder *)arg1;
- (void)didRestoreWithCoder:(NSCoder *)arg1 children:(NSArray *)arg2;
@end
