//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WAPaintBrushContentStampDataSourceSection, WAPaintBrushRecentStampsDataSourceSection;

__attribute__((visibility("hidden")))
@interface WAPaintBrushContentDataSource : NSObject
{
    WAPaintBrushRecentStampsDataSourceSection *_recentStampSection;
    WAPaintBrushContentStampDataSourceSection *_contentStampSection;
    NSArray *_sections;
}

+ (id)newRecentStampsSection:(long long)arg1;
+ (id)recentStamps;
+ (id)encodedRecentStamps;
+ (void)addRecentStamp:(id)arg1;
+ (void)setRecentlyUsedMedia:(id)arg1;
+ (id)recentlyUsedMedia;
- (void).cxx_destruct;
- (id)indexPathsForRecentAndContentSectionItems;
- (id)localizedTitleOfSection:(long long)arg1;
- (id)contentAtIndex:(long long)arg1 inSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (_Bool)isRecentStampSection:(long long)arg1;
- (void)reloadRecentStampsWithStampLimit:(long long)arg1;
- (void)willRemoveDataSource;
- (void)didSelectContent:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithRecentStampLimit:(long long)arg1;
- (id)initInternal;

@end

