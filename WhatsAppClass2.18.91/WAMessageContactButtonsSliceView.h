//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageButtonsSliceView.h"

@class UIButton, WAMessageContactButtonsSlice;

__attribute__((visibility("hidden")))
@interface WAMessageContactButtonsSliceView : WAMessageButtonsSliceView
{
    UIButton *_saveButton;
    UIButton *_messageButton;
    UIButton *_inviteButton;
    UIButton *_showAllButton;
}

- (void).cxx_destruct;
- (void)showAllContacts:(id)arg1;
- (void)messageContact:(id)arg1;
- (void)inviteContact:(id)arg1;
- (void)saveContact:(id)arg1;
- (id)showAllButton;
- (id)messageButton;
- (id)inviteButton;
- (id)saveButton;
- (id)buttonsForCurrentState;

// Remaining properties
@property(readonly, nonatomic) WAMessageContactButtonsSlice *slice; // @dynamic slice;

@end

