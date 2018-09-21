//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WAGLProgram : NSObject
{
    unsigned int _program;
    NSMutableArray *_shaders;
    NSMutableDictionary *_attributeNames;
}

- (void).cxx_destruct;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 file:(id)arg3 prefix:(id)arg4;
- (void)deleteShadersAndDetach:(_Bool)arg1;
- (unsigned int)indexForAttributeNamed:(id)arg1;
- (_Bool)setValueOfUniformLocation:(int)arg1 toInt:(int)arg2;
- (_Bool)use;
- (int)uniformLocationNamed:(id)arg1;
- (_Bool)link;
- (void)bindAttributeName:(id)arg1 toIndex:(unsigned int)arg2;
- (_Bool)addShader:(id)arg1 ofType:(unsigned int)arg2 withPrefix:(id)arg3;
- (_Bool)addShader:(id)arg1 ofType:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

