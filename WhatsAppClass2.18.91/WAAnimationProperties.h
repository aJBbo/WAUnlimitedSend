//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WAAnimationProperties : NSObject
{
    double _duration;
    double _delay;
    unsigned long long _animationOptions;
}

@property(nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)mediaTimingFunctionForAnimationOptions;

@end

