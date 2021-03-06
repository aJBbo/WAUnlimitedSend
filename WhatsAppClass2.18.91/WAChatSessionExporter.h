//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAChatSession, WAChatStorage;

__attribute__((visibility("hidden")))
@interface WAChatSessionExporter : NSObject
{
    WAChatStorage *_chatStorage;
    // Error parsing type: Aq, name: _exportCounter
    _Bool _includesMedia;
    WAChatSession *_chatSession;
}

+ (id)textRepresentationForMessage:(id)arg1 withMetadata:(_Bool)arg2 attachmentFilename:(id)arg3;
@property(nonatomic, getter=includesMedia) _Bool includesMedia; // @synthesize includesMedia=_includesMedia;
@property(readonly, nonatomic) WAChatSession *chatSession; // @synthesize chatSession=_chatSession;
- (void).cxx_destruct;
- (unsigned long long)internalExportChatSession:(id)arg1 toURL:(id)arg2 context:(id)arg3 fetchRequest:(id)arg4 includeMedia:(_Bool)arg5 exportIndex:(long long)arg6 progress:(CDUnknownBlockType)arg7;
- (void)exportWithProgressUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)initWithChatSession:(id)arg1;

@end

