//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WATarFile, WATarHeader;

@protocol WATarFileProcessor <NSObject>
- (void)tarFile:(WATarFile *)arg1 didFinishHeader:(WATarHeader *)arg2 withResult:(unsigned long long)arg3;
- (void)tarFile:(WATarFile *)arg1 didReadBytes:(const void *)arg2 ofLength:(unsigned long long)arg3;
- (void)tarFile:(WATarFile *)arg1 didStartHeader:(WATarHeader *)arg2;
@end

