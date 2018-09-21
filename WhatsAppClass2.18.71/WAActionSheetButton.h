//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage, UIImageView, WAProfilePictureThumbnailView;

__attribute__((visibility("hidden")))
@interface WAActionSheetButton : UIButton
{
    UIImageView *_detailImageView;
    WAProfilePictureThumbnailView *_profilePictureView;
    _Bool _profilePictureNeeded;
}

- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *detailImage;
- (void)setProfilePictureJID:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)actualImageView;
- (id)actualImage;
- (void)updateTextAlignment;
- (id)init;

@end

