//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WAMediaAlbumCollectionViewCell, WAMediaAlbumItemStatusView;

@protocol WAMediaAlbumCollectionViewCellDelegate <NSObject>
- (void)unstarMessageInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)starMessageInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)showDialogWithMessageIDInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)deleteMessagesInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)saveMediaInMessageInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)showInfoForMessageInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)forwardMessagesInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)replyToMessageInMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (WAMediaAlbumItemStatusView *)statusViewForMediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)mediaAlbumCollectionViewCellDidRequestHandleAlertButton:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)mediaAlbumCollectionViewCellDidRequestStopNetworkTransfer:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)mediaAlbumCollectionViewCellDidRequestStartNetworkTransfer:(WAMediaAlbumCollectionViewCell *)arg1;
- (void)mediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1 didFailToUploadMediaWithError:(NSError *)arg2;
- (void)mediaAlbumCollectionViewCell:(WAMediaAlbumCollectionViewCell *)arg1 didFailToDownloadMediaWithError:(NSError *)arg2;
@end

