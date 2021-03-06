//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMapButton.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface WAUserTrackingButton : WAMapButton
{
    UIActivityIndicatorView *_activityIndicator;
    _Bool _trackingEnabled;
    _Bool _showsActivityIndicator;
}

@property(nonatomic) _Bool showsActivityIndicator; // @synthesize showsActivityIndicator=_showsActivityIndicator;
@property(nonatomic) _Bool trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)setTrackingEnabled:(_Bool)arg1 activity:(_Bool)arg2;
- (void)reloadButtonImage;
- (void)commonInit;

@end

