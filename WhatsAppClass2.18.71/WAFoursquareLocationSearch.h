//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WALocationSearchEngine-Protocol.h"

@class CLLocation, NSString, WAHTTPFetcher;

__attribute__((visibility("hidden")))
@interface WAFoursquareLocationSearch : NSObject <WALocationSearchEngine>
{
    WAHTTPFetcher *_fetcher;
    CLLocation *_location;
    _Bool _desireTransparentIconBackgrounds;
}

@property(readonly, nonatomic) _Bool desireTransparentIconBackgrounds; // @synthesize desireTransparentIconBackgrounds=_desireTransparentIconBackgrounds;
- (void).cxx_destruct;
- (void)processFoursquarePlaceSearchData:(id)arg1 error:(id)arg2 location:(id)arg3 fieldStats:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)placeForResult:(id)arg1;
- (id)placesInResults:(id)arg1;
- (void)stop;
- (void)fetchNextPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchWithQuery:(id)arg1 location:(id)arg2 radius:(double)arg3 region:(CDStruct_26e8d939)arg4 fieldStats:(id)arg5 completion:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) long long wamId;
- (id)initWithTransparentIconBackgrounds:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

