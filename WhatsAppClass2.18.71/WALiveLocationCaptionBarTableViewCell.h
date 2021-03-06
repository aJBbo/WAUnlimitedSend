//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WACaptionBar;

__attribute__((visibility("hidden")))
@interface WALiveLocationCaptionBarTableViewCell : UITableViewCell
{
    WACaptionBar *_captionBar;
    UIView *_recipientView;
    UILabel *_chatNameLabel;
    UIImageView *_recipientChevronView;
}

@property(retain, nonatomic) UIImageView *recipientChevronView; // @synthesize recipientChevronView=_recipientChevronView;
@property(retain, nonatomic) UILabel *chatNameLabel; // @synthesize chatNameLabel=_chatNameLabel;
@property(retain, nonatomic) UIView *recipientView; // @synthesize recipientView=_recipientView;
@property(retain, nonatomic) WACaptionBar *captionBar; // @synthesize captionBar=_captionBar;
- (void).cxx_destruct;
- (double)preferredHeight;
- (void)layoutSubviews;

@end

