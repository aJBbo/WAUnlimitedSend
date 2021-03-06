//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSArray, NSLayoutManager, NSTextContainer, NSTextStorage;

__attribute__((visibility("hidden")))
@interface WAMessageContactSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    NSArray *_contacts;
    unsigned long long _actionMode;
}

+ (Class)viewClass;
@property(readonly, nonatomic) unsigned long long actionMode; // @synthesize actionMode=_actionMode;
@property(readonly, copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_8ee84fd7)arg2 canShowActionButtons:(_Bool)arg3;

@end

