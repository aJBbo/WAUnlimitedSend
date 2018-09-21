//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, WAProfilePictureThumbnailView, WAStatusViewerUser;

__attribute__((visibility("hidden")))
@interface WAStatusViewerRecipientCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    WAProfilePictureThumbnailView *_profileView;
    _Bool _hideable;
    WAStatusViewerUser *_user;
}

+ (id)timestampFont;
@property(nonatomic) _Bool hideable; // @synthesize hideable=_hideable;
@property(retain, nonatomic) WAStatusViewerUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (double)timeLabelWidth;
- (id)receiptTimeStringForDate:(id)arg1;
- (id)receiptDateStringForDate:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

