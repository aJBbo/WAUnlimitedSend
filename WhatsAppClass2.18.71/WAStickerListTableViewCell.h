//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAStickerViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UILabel, UIView;
@protocol WAStickerPackInfoProviding;

__attribute__((visibility("hidden")))
@interface WAStickerListTableViewCell : UITableViewCell <WAStickerViewDelegate>
{
    id <WAStickerPackInfoProviding> _stickerPack;
    NSMutableArray *_stickerPreviewViews;
    NSMutableDictionary *_stickerImages;
    _Bool _isRTL;
    UILabel *_stickerTitleLabel;
    UIView *_previewListView;
}

@property(retain, nonatomic) UIView *previewListView; // @synthesize previewListView=_previewListView;
@property(retain, nonatomic) UILabel *stickerTitleLabel; // @synthesize stickerTitleLabel=_stickerTitleLabel;
- (void).cxx_destruct;
- (void)stickerViewDidTapDownloadButton:(id)arg1;
- (void)updateStickerPack;
- (void)downloadStickerPack;
- (void)setUpdateAccessoryView:(id)arg1;
- (void)setActivityIndicatorAccessoryView;
- (void)setCheckAccessoryView;
- (void)setDownloadAccessoryView:(id)arg1;
- (void)layoutSubviews;
- (void)downloadStickerPreviewForView:(id)arg1;
- (void)configureCellWithStickerPack:(id)arg1 withPreviewStickerImages:(id)arg2;
- (id)keyForStickerAtIndex:(long long)arg1;
- (void)setAlpha:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

