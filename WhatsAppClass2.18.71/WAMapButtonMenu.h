//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

__attribute__((visibility("hidden")))
@interface WAMapButtonMenu : UIView
{
    UIImageView *_backgroundShadowImageView;
    NSMutableArray *_currentButtons;
    NSMutableArray *_dividers;
    UIView *_containerView;
}

+ (id)divider;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)removeButton:(id)arg1;
- (void)addButton:(id)arg1 atIndex:(long long)arg2;
- (void)addButton:(id)arg1;
- (id)initWithWidth:(double)arg1;
- (id)correctContainerView;

@end

