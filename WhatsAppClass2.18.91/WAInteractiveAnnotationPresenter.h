//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACalloutViewPresenter.h"

@class WAInteractiveAnnotationView, WAPBInteractiveAnnotation;

__attribute__((visibility("hidden")))
@interface WAInteractiveAnnotationPresenter : WACalloutViewPresenter
{
    struct CGPoint _normalizedTargetPoint;
    WAPBInteractiveAnnotation *_annotation;
    WAInteractiveAnnotationView *_annotationView;
}

+ (Class)calloutViewClass;
@property(readonly, nonatomic) WAInteractiveAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(readonly, nonatomic) WAPBInteractiveAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)dismissFromMapView:(id)arg1;
- (void)performDefaultActionForCalloutView:(id)arg1;
- (void)configureCalloutView:(id)arg1;
- (struct CGPoint)targetPointInView:(id)arg1;
- (id)initWithAnnotation:(id)arg1 atPoint:(struct CGPoint)arg2 inAnnotationView:(id)arg3;

@end

