//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSessionPortDescription, NSString;

__attribute__((visibility("hidden")))
@interface WACallAudioOutputRoute : NSObject
{
    AVAudioSessionPortDescription *_portDescription;
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)initWithDescription:(id)arg1;
@property(readonly, nonatomic) AVAudioSessionPortDescription *portDescription;
@property(readonly, nonatomic) NSString *name;

@end
