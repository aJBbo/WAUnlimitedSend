//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaintBrushContentDataSource.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAPaintBrushContentSearchResultsDataSource : WAPaintBrushContentDataSource
{
    unsigned long long _count;
    unsigned long long _selections;
    NSString *_languageCode;
}

- (void).cxx_destruct;
- (void)willRemoveDataSource;
- (void)didSelectContent:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithEmojis:(id)arg1 query:(id)arg2 languageCode:(id)arg3;
- (id)initInternal;

@end

