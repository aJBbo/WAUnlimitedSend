//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAStaticTableViewController.h"

#import "UINavigationControllerDelegate-Protocol.h"
#import "WAMediaPickerDataSource-Protocol.h"
#import "WAWallpaperPreviewControllerDelegate-Protocol.h"

@class NSString, WAMediaPickerLibraryController;

__attribute__((visibility("hidden")))
@interface WAWallpaperSourceViewController : WAStaticTableViewController <UINavigationControllerDelegate, WAMediaPickerDataSource, WAWallpaperPreviewControllerDelegate>
{
    WAMediaPickerLibraryController *_libraryController;
}

+ (id)controller;
- (void).cxx_destruct;
- (_Bool)commitPreviewForQuickPreviewViewController:(id)arg1;
- (id)quickMediaViewControllerForPreviewOfAsset:(id)arg1 albumControllerToReload:(id)arg2;
- (void)clearSelection;
- (void)showMaximumSelectionCountExceededError;
- (void)toggleSelectionOfMediaPickerAsset:(id)arg1;
- (void)cancelSingleSelectionIfPossiable;
- (_Bool)canAddMoreMediaPickerAssets;
- (_Bool)canSelectMediaPickerAsset:(id)arg1;
- (void)albumViewController:(id)arg1 longPressOnAsset:(id)arg2;
- (_Bool)canHandleLongPress;
- (id)livePhotoAsGifIdentifiers;
- (id)selectedAssetIdentifiers;
- (_Bool)allowsMultipleSelection;
- (id)libraryController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)wallpaperPreviewControllerDidCancel:(id)arg1;
- (void)wallpaperPreviewController:(id)arg1 didSelectCustomImage:(id)arg2;
- (void)wallpaperPreviewController:(id)arg1 didSelectSolidColorAtIndex:(unsigned long long)arg2;
- (void)wallpaperPreviewController:(id)arg1 didSelectLibraryImageAtIndex:(unsigned long long)arg2;
- (void)showResetController;
- (void)showCameraRoll;
- (void)showPickerWithType:(long long)arg1 title:(id)arg2;
- (void)setUpTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

