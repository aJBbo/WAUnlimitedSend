//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface WACircleWipeTransitionInfo : NSObject
{
    UIView *_originatingView;
    struct CGPoint _offset;
}

@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIView *originatingView; // @synthesize originatingView=_originatingView;
- (void).cxx_destruct;
- (struct CGPoint)transitionOriginInContainerView:(id)arg1;
- (id)initWithOriginatingView:(id)arg1;

@end

