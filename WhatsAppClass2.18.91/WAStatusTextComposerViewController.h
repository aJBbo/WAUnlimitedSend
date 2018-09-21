//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "WAStatusComposerNUXDelegate-Protocol.h"
#import "WAStatusTextComposerViewDelegate-Protocol.h"
#import "WAWebPageFromTextLoaderDelegate-Protocol.h"

@class NSArray, NSString, WAStatusComposerNUX, WAStatusTextComposerView, WAWebPageFromTextLoader, WAWebPageMediaDownloader;
@protocol WAStatusTextComposerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WAStatusTextComposerViewController : WAViewController <WAStatusTextComposerViewDelegate, WAWebPageFromTextLoaderDelegate, WAStatusComposerNUXDelegate>
{
    WAStatusTextComposerView *_textComposerView;
    WAStatusComposerNUX *_statusHelperDialogView;
    int _fontType;
    NSArray *_backgroundColors;
    unsigned long long _selectedBackgroundColorIndex;
    WAWebPageFromTextLoader *_textLoader;
    WAWebPageMediaDownloader *_mediaDownloader;
    WAWebPageMediaDownloader *_mediaAutoDownloader;
    _Bool _statusBarShouldReallyBeHidden;
    id <WAStatusTextComposerViewControllerDelegate> _delegate;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <WAStatusTextComposerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)statusComposerNUXDidTapSend:(id)arg1;
- (void)statusComposerNUXDidTapPrivacy:(id)arg1;
- (void)statusComposerNUXDidTapDismiss:(id)arg1;
- (void)dismissPrivacySettings:(id)arg1;
- (void)showStatusPrivacySettings;
- (void)dismissStatusHelperDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showStatusHelperDialog;
- (void)statusTextComposerDidCancelMediaDownload:(id)arg1;
- (void)statusTextComposerDidRequestMediaDownload:(id)arg1;
- (void)statusTextComposerDidTapRemovePreview:(id)arg1;
- (void)statusTextComposerDidRequestDetectWebURL:(id)arg1;
- (void)statusTextComposerDidTapChangeFontBack:(id)arg1;
- (void)statusTextComposerDidTapChangeFont:(id)arg1;
- (void)statusTextComposerDidTapChangeBackgroundColorBack:(id)arg1;
- (void)statusTextComposerDidTapChangeBackgroundColor:(id)arg1;
- (void)statusTextComposerDidTapSend:(id)arg1;
- (void)statusTextComposer:(id)arg1 didCancelWithGestureRecognizer:(id)arg2;
- (void)updateMetadataWithImage:(id)arg1;
- (void)handleDownloadedMediaFileURL:(id)arg1;
- (void)updatePreviewImageIfPossibleUsingDownloadedMediaFileURL:(id)arg1 mimeType:(id)arg2;
- (_Bool)isAllowAutodownloadMediaWithMetadata:(id)arg1 mediaSize:(unsigned long long)arg2;
- (void)autodownloadMediaIfPossibleWithMetadata:(id)arg1 mediaSize:(unsigned long long)arg2;
- (void)webPageFromTextLoaderDidUpdateMetadata:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMatchedText:(id)arg1;
- (void)sendStatus;
- (void)detectedWebURL:(id)arg1;
- (void)detectWebURLInText:(id)arg1;
- (void)previousFontType;
- (void)nextFontType;
- (void)previousBackgroundColor;
- (void)nextBackgroundColor;
- (id)currentBackgroundColor;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)wa_prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

