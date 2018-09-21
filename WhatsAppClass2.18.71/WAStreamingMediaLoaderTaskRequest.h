//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoader, AVAssetResourceLoadingRequest, NSString;

__attribute__((visibility("hidden")))
@interface WAStreamingMediaLoaderTaskRequest : NSObject
{
    _Bool _allowsCellularAccess;
    unsigned long long _type;
    NSString *_identifier;
    AVAssetResourceLoader *_resourceLoader;
    AVAssetResourceLoadingRequest *_loadingRequest;
    struct _NSRange _requestedEncRange;
}

@property(readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(readonly, nonatomic) AVAssetResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(readonly, nonatomic) struct _NSRange requestedEncRange; // @synthesize requestedEncRange=_requestedEncRange;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 requestedEncRange:(struct _NSRange)arg2 resourceLoader:(id)arg3 loadingRequest:(id)arg4 allowsCellularAccess:(_Bool)arg5;

@end

