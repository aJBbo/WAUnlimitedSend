//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAShapeView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface _WAQRCodeScanResultView : WAShapeView
{
    struct CGSize _pathRectSize;
    UIImageView *_image;
    _Bool _match;
}

+ (id)pathForViewBounds:(struct CGRect)arg1;
@property(nonatomic) _Bool match; // @synthesize match=_match;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

