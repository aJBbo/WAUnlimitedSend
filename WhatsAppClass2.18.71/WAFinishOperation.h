//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASynchronousBackupOperation.h"

@class WAActionManager;

__attribute__((visibility("hidden")))
@interface WAFinishOperation : WASynchronousBackupOperation
{
    WAActionManager *_manager;
    unsigned long long _code;
}

@property unsigned long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)run;
- (id)initWithActionManager:(id)arg1 code:(unsigned long long)arg2;
- (id)initWithDependenciesRequired:(_Bool)arg1;

@end

