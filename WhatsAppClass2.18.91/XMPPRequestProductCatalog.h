//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XMPPRequestProductCatalog : XMPPRequest
{
    NSString *_jid;
    long long _count;
    NSString *_cursor;
    struct CGSize _imageSize;
}

@property(readonly, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)description;
- (id)initWithJID:(id)arg1 count:(long long)arg2 imageSize:(struct CGSize)arg3 cursor:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

