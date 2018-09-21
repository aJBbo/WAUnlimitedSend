//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDelegate-Protocol.h"

@class NSString, _WAChatListHeaderTableViewCell;
@protocol _WAChatListHeaderTableViewDelegate;

__attribute__((visibility("hidden")))
@interface _WAChatListHeaderTableView : UITableView <UITableViewDelegate>
{
    _WAChatListHeaderTableViewCell *_archivedChatsCell;
    id <_WAChatListHeaderTableViewDelegate> _actionDelegate;
}

+ (double)preferredHeight;
@property(nonatomic) __weak id <_WAChatListHeaderTableViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateChatCounts;
- (void)fontSizeDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

