//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAShapeView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _WARatingStar : WAShapeView
{
    struct CGSize _prevSize;
}

+ (double)preferredWidth;
@property(retain, nonatomic) UIColor *color;
@property(nonatomic, getter=isFilled) _Bool filled;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

