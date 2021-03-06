//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseReceiptTableViewCell.h"

@class NSDictionary, NSString, UIFont, UILabel, WAProfilePictureThumbnailView;

__attribute__((visibility("hidden")))
@interface WAGroupReceiptTableViewCell : WABaseReceiptTableViewCell
{
    NSDictionary *_receiptsInfo;
    int _receiptLevel;
    _Bool _expanded;
    _Bool _nameIsTruncated;
    _Bool _timeLabelHidden;
    _Bool _dateLabelHidden;
    _Bool _isMediaMessage;
    WAProfilePictureThumbnailView *_imageViewContact;
    UILabel *_receiptTypeLabel[3];
    UILabel *_receiptDateLabel[3];
    UILabel *_receiptTimeLabel[3];
    UILabel *_nameLabel;
    UILabel *_pushNameLabel;
    NSString *_contactJID;
    double _mainSectionHeight;
    UIFont *_contactNameFont;
    UIFont *_pushNameFont;
}

@property(retain, nonatomic) UIFont *pushNameFont; // @synthesize pushNameFont=_pushNameFont;
@property(retain, nonatomic) UIFont *contactNameFont; // @synthesize contactNameFont=_contactNameFont;
@property(nonatomic) double mainSectionHeight; // @synthesize mainSectionHeight=_mainSectionHeight;
@property(copy, nonatomic) NSString *contactJID; // @synthesize contactJID=_contactJID;
@property(readonly, nonatomic) UILabel *pushNameLabel; // @synthesize pushNameLabel=_pushNameLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)setReceiptInfo:(id)arg1 receiptLevel:(int)arg2 isMediaMessage:(_Bool)arg3 expanded:(_Bool)arg4;
- (void)setExpanded:(_Bool)arg1;
- (void)updatePresentationAnimated:(_Bool)arg1;
- (id)receiptTimeStringForDate:(id)arg1;
- (id)receiptDetailTimeStringForDate:(id)arg1;
- (id)receiptDateStringForDate:(id)arg1;
- (id)receiptDateForLevel:(int)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

