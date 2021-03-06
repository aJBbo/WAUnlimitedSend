//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, WACircleView;

__attribute__((visibility("hidden")))
@interface WAMultiSendHeaderViewBrushControl : UIControl
{
    UIImageView *_imageView;
    WACircleView *_circleView;
    WACircleView *_backgroundCircleView;
    _Bool _showingBrushSize;
    float _brushSize;
    UIColor *_brushColor;
}

@property(nonatomic, getter=isShowingBrushSize) _Bool showingBrushSize; // @synthesize showingBrushSize=_showingBrushSize;
@property(nonatomic) float brushSize; // @synthesize brushSize=_brushSize;
@property(retain, nonatomic) UIColor *brushColor; // @synthesize brushColor=_brushColor;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end

