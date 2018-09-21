//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, WACircleView, WAProfilePictureDynamicThumbnailView;
@protocol WAContactGridCellDelegate;

__attribute__((visibility("hidden")))
@interface WAContactGridCell : UICollectionViewCell
{
    _Bool _cellSelected;
    id <WAContactGridCellDelegate> _cellDelegate;
    WAProfilePictureDynamicThumbnailView *_profilePicture;
    WACircleView *_showMoreView;
    UILabel *_showMoreLabel;
    UILabel *_nameLabel;
    UIButton *_deleteButton;
    UIImageView *_checkmark;
    NSLayoutConstraint *_showMoreLeadingConstraint;
    NSLayoutConstraint *_showMoreTrailingConstraint;
    struct UIEdgeInsets _contentInset;
}

+ (struct CGSize)preferredSizeWithConfiguration:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *showMoreTrailingConstraint; // @synthesize showMoreTrailingConstraint=_showMoreTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *showMoreLeadingConstraint; // @synthesize showMoreLeadingConstraint=_showMoreLeadingConstraint;
@property(retain, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *showMoreLabel; // @synthesize showMoreLabel=_showMoreLabel;
@property(retain, nonatomic) WACircleView *showMoreView; // @synthesize showMoreView=_showMoreView;
@property(retain, nonatomic) WAProfilePictureDynamicThumbnailView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool cellSelected; // @synthesize cellSelected=_cellSelected;
@property(nonatomic) __weak id <WAContactGridCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityActivate;
- (void)setCellSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithContact:(id)arg1 cellConfiguration:(id)arg2;
- (void)configureWithShowRemainingContactCount:(unsigned long long)arg1 cellConfiguration:(id)arg2;
- (void)updateWithConfiguration:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

