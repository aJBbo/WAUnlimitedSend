//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WAPaintBrush, WAPaintPositionSample;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface WAPaintBrushRenderer : NSObject
{
    WAPaintBrush *_brush;
    id <MTLBuffer> _pointBuffer;
    id <MTLBuffer> _sizeBuffer;
    id <MTLBuffer> _colorBuffer;
    id <MTLBuffer> _angleBuffer;
    id <MTLBuffer> _vertexDataBuffer;
    unsigned int _nextIndexWhenStrokeBegins;
    unsigned int _snapshotIndex;
    NSMutableArray *_indexStack;
    NSMutableArray *_samples;
    unsigned int _nextIndex;
    float _effectValue;
    unsigned long long _capacity;
    struct CGSize _brushSizeOverrideForTextureGeneration;
}

+ (_Bool)requiresPaintBlobPaintPositionSampleEquivalence;
+ (long long)defaultCapacity;
@property(nonatomic) struct CGSize brushSizeOverrideForTextureGeneration; // @synthesize brushSizeOverrideForTextureGeneration=_brushSizeOverrideForTextureGeneration;
@property(readonly, nonatomic) float effectValue; // @synthesize effectValue=_effectValue;
@property(readonly, nonatomic) unsigned int nextIndex; // @synthesize nextIndex=_nextIndex;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) WAPaintBrush *brush; // @synthesize brush=_brush;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int numberOfSamples;
@property(readonly, nonatomic) WAPaintPositionSample *anySample;
- (void)encodeForPicking:(id)arg1;
- (CDStruct_37a3040a)paintBlobAtIndex:(unsigned int)arg1;
- (void)setPaintBlob:(CDStruct_37a3040a)arg1 atIndex:(unsigned int)arg2;
- (void)setPaintPositionSample:(id)arg1 alpha:(float)arg2 atIndex:(unsigned int)arg3;
-     // Error parsing type: v76@0:8@16f24{?=[3]}28, name: addMetadataToDictionary:uncroppedAspectRatio:viewportTransform:
- (id)paintPositionSampleAtIndex:(unsigned int)arg1;
-     // Error parsing type: B32@0:8@16^24, name: addPaintPositionSample:color:
- (_Bool)addPaintBlob:(CDStruct_37a3040a)arg1;
@property(readonly, nonatomic) unsigned long long currentGroupingBlobCount;
@property(readonly, nonatomic) unsigned long long blobCountSinceLastSnapshot;
@property(readonly, nonatomic, getter=isFull) _Bool full;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)undoLastGrouping;
- (void)endGrouping;
- (void)beginGrouping;
@property(readonly, nonatomic) struct CGSize nativeBrushSize;
- (void)encodeForDrawPass:(id)arg1 sinceLastSnapshot:(_Bool)arg2 layerSize:(struct CGSize)arg3 transformInfo:(CDStruct_6b9f5eac)arg4;
- (void)encodeForConversionPass:(id)arg1 fullCanvasAspectRatio:(float)arg2 sinceLastSnapshot:(_Bool)arg3;
- (void)unmarkSnapshot;
- (void)markSnapshot;
- (_Bool)isCompatibleWithBrush:(id)arg1 effectValue:(float)arg2;
- (id)initWithPaintBrush:(id)arg1 effectValue:(float)arg2;

@end

