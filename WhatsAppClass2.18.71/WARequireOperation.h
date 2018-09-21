//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASynchronousBackupOperation.h"

@class NSMutableArray, WAActionManager;

__attribute__((visibility("hidden")))
@interface WARequireOperation : WASynchronousBackupOperation
{
    WAActionManager *_manager;
    unsigned long long _code;
    NSMutableArray *_requirements;
    NSMutableArray *_actions;
}

@property(retain) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain) NSMutableArray *requirements; // @synthesize requirements=_requirements;
- (void).cxx_destruct;
- (void)cancel;
- (void)run;
- (void)addAction:(CDUnknownBlockType)arg1;
- (void)addRequirement:(id)arg1;
- (id)initWithActionManager:(id)arg1 andCode:(unsigned long long)arg2;
- (id)init;
- (id)initWithDependenciesRequired:(_Bool)arg1;

@end
