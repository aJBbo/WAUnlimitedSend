//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov  9 2017 20:17:28).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _WALegacyMessageAdminPickerDelegate : NSObject <WAParticipantPickerViewControllerDelegate>
{
    CDUnknownBlockType _selectionBlock;
}

- (void).cxx_destruct;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (id)initWithSelectionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

