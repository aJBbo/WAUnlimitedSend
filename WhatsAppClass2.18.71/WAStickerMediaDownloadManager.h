//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMMSMediaDownloadOperationDelegate-Protocol.h"

@class NSMutableDictionary, WASimpleOperationQueue;

__attribute__((visibility("hidden")))
@interface WAStickerMediaDownloadManager : NSObject <WAMMSMediaDownloadOperationDelegate>
{
    WASimpleOperationQueue *_stickerDownloadQueue;
    NSMutableDictionary *_stickerToCompletionMap;
    NSMutableDictionary *_timerForDownloadOperationIdentifier;
}

- (void).cxx_destruct;
- (void)downloadTask:(id)arg1 populatedDownloadEvent:(id)arg2 downloadEvent2:(id)arg3 shouldSubmit:(_Bool)arg4 isRetry:(_Bool)arg5;
- (void)downloadTask:(id)arg1 didFinishWithAsset:(id)arg2 error:(id)arg3 terminal:(_Bool)arg4;
- (void)downloadTask:(id)arg1 assetForDecryptedFile:(CDUnknownBlockType)arg2;
- (void)downloadTask:(id)arg1 didUpdateProgress:(double)arg2;
- (void)downloadSticker:(id)arg1;
- (id)operationDownloadingStickerIdentifier:(id)arg1;
- (void)downloadMediaForSticker:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

