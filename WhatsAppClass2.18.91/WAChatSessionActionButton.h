//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface WAChatSessionActionButton : UIButton
{
    UIColor *_tintColor;
    _Bool _visible;
    unsigned long long _roundedCorners;
    long long _countValue;
    double _cornerRadius;
}

+ (Class)layerClass;
+ (id)button;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) long long countValue; // @synthesize countValue=_countValue;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePathForBounds:(struct CGRect)arg1 animated:(_Bool)arg2;
- (id)shadowPathForBoundingPath:(id)arg1;
- (struct CGRect)expectedBounds;
- (double)maxHeight;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;

@end
