//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;

@protocol WAShareLocationTableViewDelegate <NSObject>
- (void)shareLocationDidEndDecelerating;
- (void)shareLocationDidEndDragging;
- (void)shareLocationWillBeginDragging;
- (_Bool)shareLocationShouldAutoExpand;
- (void)shareLocationDidSelectAccessoryForPlaceAtIndex:(long long)arg1;
- (void)shareLocationDidSelectPlaceAtIndex:(long long)arg1;
- (void)shareLocationDidSelectSendLiveLocation;
- (void)shareLocationDidSelectSendCurrentLocation;
- (NSString *)shareLocationSearchQuery;
- (void)shareLocationLoadMoreResults;
- (void)shareLocationDidSelectAttribution:(NSURL *)arg1;
- (NSArray *)shareLocationPlaces;
@end

