//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADialogView.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WANewUserExperienceView : WADialogView
{
    NSString *_identifier;
    NSURL *_bodyTextURL;
}

+ (void)resetIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)openBodyTextURL:(id)arg1;
- (id)headerViewWithImage:(id)arg1 title:(id)arg2 bodyText:(id)arg3 url:(id)arg4;
- (void)addButtonWithText:(id)arg1 useBoldTextStyle:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)assembleContentViewIfNeeded;
- (void)didMoveToWindow;
- (id)initWithImage:(id)arg1 title:(id)arg2 bodyText:(id)arg3 identifier:(id)arg4 bodyTextURL:(id)arg5;

@end

