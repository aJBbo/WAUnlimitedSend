//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface XMPPStatus : NSObject
{
    NSString *_text;
    NSString *_jid;
    NSDate *_timestamp;
    unsigned long long _error;
}

@property(nonatomic) unsigned long long error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)init;

@end

