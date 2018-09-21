//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface WAAlternatingLabel : UILabel
{
    NSTimer *_timer;
    int _index;
    NSString *_primaryText;
    NSString *_secondaryText;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (void)switchLabel:(id)arg1;
@property(nonatomic, getter=isAnimating) _Bool animating;

@end

