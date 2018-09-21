//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImage, WAButtonLabel;

__attribute__((visibility("hidden")))
@interface WABorderlessButton : UIButton
{
    WAButtonLabel *_bottomLabel;
    UIImage *_normalImage;
    UIImage *_highlightedImage;
}

+ (id)button;
- (void).cxx_destruct;
- (id)accessibilityValue;
@property(copy, nonatomic) NSString *bottomLabelText;
- (void)setIconImage:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
