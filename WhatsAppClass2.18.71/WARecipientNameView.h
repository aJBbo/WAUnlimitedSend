//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface WARecipientNameView : UIView
{
    UILabel *_label;
    UIView *_bottomBorderView;
    double _leadingInset;
    NSString *_name;
    UIVisualEffectView *_backgroundView;
}

- (void).cxx_destruct;
- (void)reloadAttributedText;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 leadingInset:(double)arg2;

@end

