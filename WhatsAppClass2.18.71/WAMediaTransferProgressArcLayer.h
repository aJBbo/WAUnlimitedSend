//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WAMediaTransferProgressArcLayer : CALayer
{
    _Bool _ignoresRemoveAllAnimations;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) _Bool ignoresRemoveAllAnimations; // @synthesize ignoresRemoveAllAnimations=_ignoresRemoveAllAnimations;
- (void)removeAllAnimations;
- (id)init;

// Remaining properties
@property(nonatomic) float progress; // @dynamic progress;

@end

