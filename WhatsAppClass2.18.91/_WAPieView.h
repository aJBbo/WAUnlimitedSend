//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _WAPieView : UIView
{
    UIColor *_fillColor;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double progress;
- (id)initWithFrame:(struct CGRect)arg1;

@end

