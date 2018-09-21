//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPlaintextMediaDownloadManagerDelegate-Protocol.h"

@class NSMutableDictionary, NSURL, WAPlaintextMediaDownloadManager;
@protocol WAStatusAdsDownloadManagerDelegate;

__attribute__((visibility("hidden")))
@interface WAStatusAdsDownloadManager : NSObject <WAPlaintextMediaDownloadManagerDelegate>
{
    WAPlaintextMediaDownloadManager *_plaintextMediaDownloadManager;
    NSMutableDictionary *_statusAdsForURL;
    id <WAStatusAdsDownloadManagerDelegate> _delegate;
    NSURL *_adsMediaDirectory;
}

+ (id)randomFileName;
- (void).cxx_destruct;
- (id)pathForStatusAd:(id)arg1;
- (_Bool)transferMediaFromPath:(id)arg1 toFinalPath:(id)arg2;
- (void)plaintextMediaDownloader:(id)arg1 didUpdateProgressForURL:(id)arg2;
- (void)plaintextMediaDownloader:(id)arg1 didFinishDownloadingMediaForURL:(id)arg2 toPath:(id)arg3;
- (void)plaintextMediaDownloader:(id)arg1 didFailToDownloadMediaForURL:(id)arg2 error:(id)arg3;
- (void)endSuspendingDownloadsForReason:(unsigned long long)arg1;
- (void)beginSuspendingDownloadsForReason:(unsigned long long)arg1;
- (_Bool)isDownloadingMediaForStatusAd:(id)arg1;
- (float)progressOfMediaDownloadForStatusAd:(id)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadForStatusAd:(id)arg1;
- (void)queueMediaDownloadForStatusAd:(id)arg1;
- (id)initWithMMSTaskSession:(id)arg1 adsMediaDirectory:(id)arg2 delegate:(id)arg3;

@end

