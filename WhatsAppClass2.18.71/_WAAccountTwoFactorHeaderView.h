//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WALinkLabel;

__attribute__((visibility("hidden")))
@interface _WAAccountTwoFactorHeaderView : UIView
{
    UILabel *_titleLabel;
    WALinkLabel *_helperTextLabel;
    UIImageView *_imageView;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) WALinkLabel *helperTextLabel; // @synthesize helperTextLabel=_helperTextLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

