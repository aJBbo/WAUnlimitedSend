//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WACameraFaceObject;

__attribute__((visibility("hidden")))
@interface WACameraPreviewFaceView : UIView
{
    UIImageView *_outlineImageView;
    WACameraFaceObject *_faceObject;
}

@property(readonly, nonatomic) WACameraFaceObject *faceObject; // @synthesize faceObject=_faceObject;
- (void).cxx_destruct;
- (void)updateFrame;
- (void)fadeOutAfterDelay:(double)arg1;
- (id)initWithFaceObject:(id)arg1;

@end

