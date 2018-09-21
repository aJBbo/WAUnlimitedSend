//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAPaintCanvasTextureManager;
@protocol MTLCommandQueue, MTLLibrary;

__attribute__((visibility("hidden")))
@interface WAPaintCanvasDevice : NSObject
{
    id <MTLCommandQueue> _commandQueue;
    id <MTLLibrary> _shaderLibrary;
    WAPaintCanvasTextureManager *_textureManager;
}

@property(readonly, nonatomic) WAPaintCanvasTextureManager *textureManager; // @synthesize textureManager=_textureManager;
@property(readonly, nonatomic) id <MTLLibrary> shaderLibrary; // @synthesize shaderLibrary=_shaderLibrary;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
- (void).cxx_destruct;
- (id)initWithMetalDevice:(id)arg1;

@end

