//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WAVideoRenderView : UIView
{
    struct iosgl_stream *stream;
    struct CGRect _lastBounds;
}

+ (Class)layerClass;
- (int)create_and_init_openGL_buffer;
- (void)resizeGLBuffer;
- (void)ensureGLBufferResized:(int)arg1;
- (void)updatedBoundsSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)change_format:(id)arg1;
- (void)finish_render;
- (void)render;
- (void)deinit_gl;
- (void)init_gl;

@end

