//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPBinaryCoder.h>

__attribute__((visibility("hidden")))
@interface WAWebBinaryCoder : XMPPBinaryCoder
{
}

+ (id)encrypt:(id)arg1 encKey:(const void *)arg2 macKey:(const void *)arg3;
+ (id)sharedWebBinaryCoder;
- (id)unserialize:(id)arg1 encKey:(const void *)arg2 macKey:(const void *)arg3 streamError:(out _Bool *)arg4;
- (id)serialize:(id)arg1 encKey:(const void *)arg2 macKey:(const void *)arg3;

@end

