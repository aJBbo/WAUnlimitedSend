//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WAMediaGallerySectionHeaderView : UICollectionReusableView
{
    UIView *_backgroundView;
    UILabel *_titleLabel;
    _Bool _translucent;
    _Bool _blurDisabled;
}

@property(nonatomic) _Bool blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

