//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WAVerificationRegistrationControllerVerifyCodeContext : NSObject
{
    _Bool _fromUserAction;
    NSString *_code;
}

@property(readonly, nonatomic) _Bool fromUserAction; // @synthesize fromUserAction=_fromUserAction;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCode:(id)arg1 fromUserAction:(_Bool)arg2;

@end

