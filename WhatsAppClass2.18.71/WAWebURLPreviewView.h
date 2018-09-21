//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAMediaTransferProgressViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, WAMediaTransferProgressView, WAWebPageMetadata;
@protocol WAWebURLPreviewViewDelegate;

__attribute__((visibility("hidden")))
@interface WAWebURLPreviewView : UIView <WAMediaTransferProgressViewDelegate>
{
    UIImageView *_imageView;
    UILabel *_contentLabel;
    UILabel *_webURLLabel;
    UILabel *_hintLabel;
    double _preferredHeight;
    UIView *_containerView;
    UIView *_topEdge;
    UIView *_bottomEdge;
    UIActivityIndicatorView *_spinner;
    UIButton *_dismissButton;
    WAMediaTransferProgressView *_downloadProgressView;
    _Bool _pendingDownloadProgressViewShow;
    NSString *_linkUrlString;
    NSString *_sizeString;
    long long _downloadStatusType;
    _Bool _fromShareExtension;
    WAWebPageMetadata *_metadata;
    id <WAWebURLPreviewViewDelegate> _delegate;
}

@property(nonatomic, getter=isFromShareExtension) _Bool fromShareExtension; // @synthesize fromShareExtension=_fromShareExtension;
@property(nonatomic) __weak id <WAWebURLPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAWebPageMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (void)mediaTransferProgressView:(id)arg1 didReceiveTapEvent:(unsigned long long)arg2;
- (void)refreshWebURLLable;
- (void)setupDownloadStatus;
- (void)updateMediaDownloadWithProgress:(float)arg1;
- (void)hideDownloadMediaOption;
- (void)setDownloading:(_Bool)arg1;
- (void)showDownloadMediaOptionAfterLoadingWithMediaSize:(unsigned long long)arg1;
- (void)reloadFont;
- (id)creatWebURLLabelText;
- (_Bool)shouldHidePreview;
- (void)layoutSubviewsForHTMLStyle;
- (void)layoutSubviewsForPureMediaStyle;
- (void)layoutSubviews;
@property(nonatomic, getter=isBottomEdgeHidden) _Bool bottomEdgeHidden;
@property(nonatomic, getter=isTopEdgeHidden) _Bool topEdgeHidden;
@property(readonly, nonatomic) double preferredHeight;
- (void)handleWebURLPreviewTap:(id)arg1;
- (void)handleWebURLPreviewSwipe:(id)arg1;
- (void)dismiss:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

