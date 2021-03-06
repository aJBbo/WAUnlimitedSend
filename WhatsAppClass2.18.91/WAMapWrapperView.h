//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MKMapView, NSString, UITapGestureRecognizer, WAMapViewGestureRecognizer;

__attribute__((visibility("hidden")))
@interface WAMapWrapperView : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_doubleTapGesture;
    UITapGestureRecognizer *_doubleFingerTapGesture;
    WAMapViewGestureRecognizer *_mapGesture;
    MKMapView *_mapView;
}

+ (_Bool)gestureRecognizerIsTilt:(id)arg1;
+ (Class)mapViewClass;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) WAMapViewGestureRecognizer *mapGesture; // @synthesize mapGesture=_mapGesture;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleDoubleFingerTapGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)handleMapGesture:(id)arg1;
- (void)layoutSubviews;
- (void)configure;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

