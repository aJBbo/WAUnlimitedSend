//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface WALoadingTableViewCell : UITableViewCell
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
@property(copy, nonatomic) NSString *text;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
