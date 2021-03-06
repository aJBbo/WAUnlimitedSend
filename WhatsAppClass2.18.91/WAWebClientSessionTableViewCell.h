//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WAWebClientSessionTableViewCell : UITableViewCell
{
    UILabel *_lastActiveLabel;
    UILabel *_locationLabel;
    UILabel *_operatingSystemLabel;
    UIImageView *_iconImageView;
}

@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *operatingSystemLabel; // @synthesize operatingSystemLabel=_operatingSystemLabel;
@property(nonatomic) __weak UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(nonatomic) __weak UILabel *lastActiveLabel; // @synthesize lastActiveLabel=_lastActiveLabel;
- (void).cxx_destruct;
- (void)setIconImageForBrowserName:(id)arg1;

@end

