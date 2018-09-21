//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface XMPPUnifiedSyncSession : NSObject
{
    _Bool _syncStatus;
    _Bool _syncContacts;
    _Bool _syncBusiness;
    _Bool _syncSidelist;
    NSString *_sid;
    unsigned long long _mode;
    unsigned long long _context;
    unsigned long long _batchIndex;
    unsigned long long _batchSize;
    double _timeout;
    NSMutableArray *_listRequests;
    NSMutableArray *_sidelistRequests;
    NSDictionary *_protocolRequestParams;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_listResults;
    NSMutableArray *_sidelistResults;
    NSMutableDictionary *_protocolResponseParams;
    NSError *_error;
}

+ (id)stringForSyncContext:(unsigned long long)arg1;
+ (id)stringForSyncMode:(unsigned long long)arg1;
+ (id)createProtocolMalformedError;
- (void).cxx_destruct;
- (id)parseStatusFromUserNode:(id)arg1 success:(out _Bool *)arg2;
- (id)parseContactFromUserNode:(id)arg1 fromSidelist:(_Bool)arg2 success:(out _Bool *)arg3;
- (id)parseBusinessFromUserNode:(id)arg1 success:(out _Bool *)arg2;
- (id)parseUser:(id)arg1 fromSidelist:(_Bool)arg2 success:(out _Bool *)arg3;
- (id)parseErrorForHeaderErrorNode:(id)arg1;
- (void)setResponseValue:(id)arg1 forResponseKey:(id)arg2 intoResponseParamsWithProtocolKey:(id)arg3;
- (_Bool)parseStatusHeaderFromResultNode:(id)arg1;
- (_Bool)parseSidelistHeaderFromResultNode:(id)arg1;
- (_Bool)parseContactHeaderFromResultNode:(id)arg1;
- (_Bool)parseBusinessHeaderFromResultNode:(id)arg1;
- (void)parseProtocolHeaders:(id)arg1 success:(out _Bool *)arg2;
- (id)serializeSidelistHeader;
- (id)serializeStatusHeader;
- (id)serializeContactHeader;
- (id)serializeBusinessHeader;
- (void)fetchNextSyncIq:(out id *)arg1;
- (void)processSyncResponse:(id)arg1 withError:(id)arg2;
- (void)sendNextBatchIfNecessary;
- (void)start;
- (id)initWithConfiguration:(id)arg1;

@end

